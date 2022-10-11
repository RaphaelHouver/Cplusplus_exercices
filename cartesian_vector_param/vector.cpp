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
    for (auto & val : l)
        data[i++] = val;
}
