#pragma once

#include <ostream>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(std::initializer_list<value> l);
    // possibly more

// Public Member functions here
    Vector operator+(const Vector& rhs);
    Vector& operator+=(const Vector& rhs);
    Vector operator-(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    value operator*(const Vector& rhs);
    value& operator[](size_t i);
    value operator[](size_t i) const;
    size_t getSize() const;

private:
// Private Member functions here
size_t size;
value data [NDIM];
// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
