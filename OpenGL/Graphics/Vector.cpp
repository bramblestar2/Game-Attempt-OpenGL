#include "Vector.h"

template<typename T>
Vector2<T>::Vector2(T xx, T yy)
{
	init(xx, yy);
}

template<typename T>
Vector2<T>::Vector2()
{
	init(0, 0);
}

template<typename T>
void Vector2<T>::init(T x, T y)
{
	this->x = x;
	this->y = y;
}

template<typename T>
Vector3<T>::Vector3(T x, T y, T z)
{
	init(x, y, z);
}

template<typename T>
Vector3<T>::Vector3()
{
	init(0, 0, 0);
}

template<typename T>
void Vector3<T>::init(T x, T y, T z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
