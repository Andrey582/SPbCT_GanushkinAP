#include "pch.h"
#include "Vector.h"


template<class T>
Vector::Vector<T>::Vector()
{
    my_capacity = 0;
    my_size = 0;
    T* buffer = new T[0];
}

template<class T>
Vector::Vector<T>::Vector(const Vector<T>& v)
{
    my_size = v.my_size;
    my_capacity = v.my_capacity;
    T* buffer = new T[my_size];
    for (int i = 0; i < my_size; i++)
        buffer[i] = v.buffer[i];
}

template<class T>
Vector::Vector<T>::Vector(unsigned int size)
{
    my_capacity = size;
    my_size = size;
    T* buffer = new T[size];
}

template<class T>
Vector::Vector<T>::Vector(unsigned int size, const T& initial)
{
    my_size - size;
    my_capacity = size;
    T* buffer = new T[size];
    for (int i = 0; i < size; i++)
        buffer[i] = initial;
    T();
}

template<class T>
Vector::Vector<T>& Vector::Vector<T>::operator = (const Vector<T>& v)
{
    delete[] buffer;
    my_size = v.my_size;
    my_capacity = v.my_capacity;
    T* buffer = new T[my_size];
    for (int i = 0; i < my_size; i++)
        buffer[i] = v.buffer[i];
    return *this;
}


template<class T>
void Vector::Vector<T>::push_back(const T& v)
{
   if (my_size >= my_capacity)
       reserve(my_capacity + 5);
   buffer[my_size++] = v;
}


template<class T>
T& Vector::Vector<T>::operator[](unsigned int index)
{
    return buffer[index];
}


template<class T>
Vector::Vector<T>::~Vector()
{
    delete[] buffer;
}
