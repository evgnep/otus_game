#pragma once

namespace otg {

struct Vector 
{
    int x = 0;
    int y = 0;
    int z = 0;

    Vector& operator+=(const Vector& lhs);
    friend Vector operator+(const Vector& rhs,const Vector lhs);
};

}