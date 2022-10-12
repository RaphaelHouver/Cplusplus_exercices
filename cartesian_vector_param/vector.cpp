#include "vector.hh"

#include <iostream>
#include <ostream>


vector::Vector()
{
	size = NDIM;
	for (size_t i = 0; i < size; i++)
	{
		data[i] = 0;
	}
}

vector::Vector(std::initializer_list<value> l)
{
	size = l.size();
	int i = 0;
	for(auto & val : l)
		data[i++] = val;	
}


size_t Vector::getSize() const
{
    return size;
}

Vector& Vector::operator+=(const Vector& rhs)
{
    for (int i = 0; i < rhs.getSize(); i++)
        data[i] += rhs[i];
    return *this;
}



Vector& Vector::operator-=(const Vector& rhs)
{
    for (int i = 0; i < rhs.getSize(); i++)
        data[i] -= rhs[i];
    return *this;
}

Vector Vector::operator+(const Vector& rhs)
{
    auto v = Vector();
    for (int i = 0; i < rhs.getSize(); i++)
        v[i] = rhs[i] + (*this)[i];
    return v;
}

Vector Vector::operator-(const Vector& rhs)
{
    auto v = Vector();
    for (int i = 0; i < rhs.getSize(); i++)
        v[i] = rhs[i] - (*this)[i];
    return v;
}

value Vector::operator*(const Vector& rhs)
{
    value v = 0;
    for (int i = 0; i < rhs.getSize(); i++)
        v += rhs[i] * (*this)[i];
    return v;
}

value Vector::operator[](size_t i) const
{
    return data[i];
}

value& Vector::operator[](size_t i)
{
    return data[i];
}

Vector operator*(Vector& rhs,const value val)
{
    auto v = Vector();
    for (int i = 0; i < rhs.getSize(); i++)
        v[i] = rhs[i] * val;
    return v;
}
