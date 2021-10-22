#pragma once

namespace otg {

struct Vector 
{
    Vector(int x_ = 0,int y_ = 0,int z_ = 0);

    int x = 0;
    int y = 0;
    int z = 0;

    Vector& operator+=(const Vector& lhs);
    friend Vector operator+(const Vector& rhs,const Vector lhs);
};

}