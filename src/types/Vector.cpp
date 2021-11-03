#include "Vector.h"

namespace otg {

Vector& Vector::operator+=(const Vector& lhs)
{
    x += lhs.x;
    y += lhs.y;
    z += lhs.z;

    return *this;
}

Vector operator+(const Vector& rhs,const Vector &lhs)
{
    return Vector{rhs.x + lhs.x,rhs.y + lhs.y,rhs.z + lhs.z};
}

bool operator== (const Vector& rhs,const Vector& lhs)
{
    return (rhs.x == lhs.x) && (rhs.y == lhs.y) && (rhs.z == lhs.z);
}

std::string Vector::toString() const
{
    return "{" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + "}";
}

}