#include "Window.h"
#include "Headers/Misc.h"

Window::Window()
{
    last_time_update = glfwGetTime();
    initWindow();
    checkSettings();
}

Window::~Window()
{
    delete window;
}

void Window::run()
{
    while (!glfwWindowShouldClose(window))
    {
        update();

        render();

        glfwPollEvents();
    }
}

void Window::render()
{
    glClear(GL_COLOR_BUFFER_BIT);



    glfwSwapBuffers(window);
}

void Window::updateDt()
{
    dt = glfwGetTime() - last_time_update;
}

void Window::update()
{
}

void Window::initWindow()
{
    if (!glfwInit())
        return;

    json settings = Misc::getJSON("Info/Game Settings.json");
    int width = settings["Size"]["Width"];
    int height = settings["Size"]["Height"];
    std::string title = settings["Title"];

    window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(window);
}

void Window::checkSettings()
{
    //Controls Scheme
    json controlScheme = Misc::getJSON("Info/Controls.json");

    if (controlScheme["Auto Set"])
    {
        json movement = controlScheme["Movement"];
        
        movement["Up"] = GLFW_KEY_W;
        movement["Down"] = GLFW_KEY_S;
        movement["Left"] = GLFW_KEY_A;
        movement["Right"] = GLFW_KEY_D;

        json actions = controlScheme["Action"];

        actions["Attack"] = GLFW_KEY_K;
        actions["Interact"] = GLFW_KEY_ENTER;
        actions["Inventory"] = GLFW_KEY_I;
        actions["Menu"] = GLFW_KEY_M;

        controlScheme["Auto Set"] = false;

        controlScheme["Movement"] = movement;
        controlScheme["Action"] = actions;

        Misc::setJSON("Info/Controls.json", controlScheme);
    }
}
