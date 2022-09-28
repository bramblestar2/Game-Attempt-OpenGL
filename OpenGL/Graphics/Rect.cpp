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

template<typename T>
bool Rect<T>::contains(Vector<T> point)
{
	return false;
}

template<typename T>
bool Rect<T>::intersects(Rect<T> rectangle)
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
