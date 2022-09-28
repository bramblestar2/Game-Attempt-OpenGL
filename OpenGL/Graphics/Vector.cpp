#include "Vector.h"

template<typename T>
Vector<T>::Vector(T xx, T yy)
{
	x = xx;
	y = yy;
}

template<typename T>
Vector<T>::Vector()
{
	x = 0;
	y = 0;
}
