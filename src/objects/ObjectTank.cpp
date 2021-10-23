#include "ObjectTank.h"

namespace otg {

PropertyValueOpt ObjectTank::getProperty(PropertyKey key) const
{
    switch (key)
    {
    case PropertyKey::Position:
        return m_position;
    
    case PropertyKey::Velocity:
        return m_velocity;
    
    case PropertyKey::Fuel:
        return m_fuel;
    
    default:
        break;
    }

    return std::nullopt;
}

void ObjectTank::setProperty(PropertyKey key,const PropertyValue &value)
{
    switch (key)
    {
    case PropertyKey::Position:
        m_position = std::get<Vector>(value);
    
    case PropertyKey::Velocity:
        m_velocity = std::get<Vector>(value);
    
    case PropertyKey::Fuel:
        m_fuel = std::get<int>(value);
    
    default:
        break;
    }   
}
}