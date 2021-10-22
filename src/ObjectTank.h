#pragma once

#include "AbstractObject.h"

namespace otg {

class ObjectTank : public AbstractObject
{
public:

    PropertyValueOpt getProperty(PropertyKey key) const override;    
    void setProperty(PropertyKey key,const PropertyValue &value) override;

private:

    Vector m_position = 0;
    Vector m_velocity = 0;
    int m_fuel = 0;
};

}