#pragma once
#include <GLFW/glfw3.h>
#include "../Vector.h"

class Shape2D
{
public:
	Shape2D();
	virtual ~Shape2D();

	virtual int setSize(const float WIDTH, const float HEIGHT);
	virtual int setPosition(float x, float y);
	virtual void setColor(GLfloat r, GLfloat g, GLfloat b, GLfloat a);
	virtual void setPointColor();

	virtual void getColor();
	virtual void getPointColor(int point);

	virtual int getPoints();
	virtual void setPoint(const int point, const float x, const float y);
	
	virtual void draw();
private:
	virtual void init();

	Vector2f position;
	Vector2f size;
};

