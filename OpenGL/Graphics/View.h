#pragma once
#include <GLFW/glfw3.h>
#include "Rect.h"

class View
{
public:
	View(Vector2f size, Vector2f pos);
	View();
	~View();

	virtual void setCenter(Vector2f pos);
	virtual void setSize(Vector2f size);

	virtual void resetOffset();

	virtual void move(Vector2f);
private:
	void init(FloatRect);

	Vector2f offset;
	FloatRect rect;
};