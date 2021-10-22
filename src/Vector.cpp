#include "Vector.h"

namespace otg {

Vector::Vector(int x_,int y_,int z_) : x(x_),y(y_),z(z_)
{}

Vector operator+(const Vector& rhs,const Vector &lhs)
{
    return Vector{rhs.x + lhs.x,rhs.y + lhs.y,rhs.z + lhs.z};
}

Vector& Vector::operator+=(const Vector& lhs)
{
    x += lhs.x;
    y += lhs.y;
    z += lhs.z;

    return *this;
}

}