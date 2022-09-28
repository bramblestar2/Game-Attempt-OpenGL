#include "Rect.h"


template<typename T>
Rect<T>::Rect(T Left, T Top, T Width, T Height)
{
	init(Left, Top, Width, Height);
}

template<typename T>
Rect<T>::Rect()
{
	init(0, 0, 0, 0);
}

//Returns true if point is inside the rect
template<typename T>
bool Rect<T>::contains(Vector2<T> point)
{
	if (point.x > left && point.x < left + width)
		if (point.y > top && point.y < top + height)
			return true;

	return false;
}

template<typename T>
bool Rect<T>::intersects(Rect<T> a)
{
	return false;
}

template<typename T>
void Rect<T>::init(T Left, T Top, T Width, T Height)
{
	left = Left;
	top = Top;
	width = Width;
	height = Height;
}
