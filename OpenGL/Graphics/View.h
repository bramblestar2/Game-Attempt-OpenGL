#pragma once
#include <GLFW/glfw3.h>
#include "Vector.h"

class View
{
public:
	View(Vector2f size, Vector2f pos);
	View();
	~View();

	virtual void setCenter(Vector2f pos);
	virtual void setSize(Vector2f size);



private:
	void init();

	Vector2f position;
};