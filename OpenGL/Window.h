#pragma once
#include <GLFW/glfw3.h>
class Window
{
public:
	Window();
	virtual ~Window();

	void run();
	void render();
	void updateDt();
	void update();

private:
	void initWindow();

	double dt, last_time_update;

	GLFWwindow* window;
};

