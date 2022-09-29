#include "View.h"

View::View(Vector2f size, Vector2f pos)
{
	init(FloatRect(pos.x, pos.y, size.x, size.y));
}

void View::resetOffset()
{
	offset = Vector2f();
}

void View::move(Vector2f a)
{
	offset += a;
}

void View::init(FloatRect a)
{
	rect = a;
}
