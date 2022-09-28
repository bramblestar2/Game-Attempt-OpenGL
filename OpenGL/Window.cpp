#include "Window.h"

Window::Window()
{
    last_time_update = glfwGetTime();
    initWindow();
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

    window = glfwCreateWindow(400, 400, "Window", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(window);
}
