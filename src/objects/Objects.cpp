#include "Objects.h"

namespace otg {

PropertyValueOpt ObjectBase::getProperty(PropertyKey key) const
{
    if (hasProperty(key)) {
        return m_propertys.at(key);
    }

    return std::nullopt;
}

void ObjectBase::setProperty(PropertyKey key,const PropertyValue &value)
{
    if (hasProperty(key)) {
        m_propertys[key] = value;
    }
}

bool ObjectBase::hasProperty(PropertyKey key) const
{
    return m_propertys.find(key) != m_propertys.end();
}

ObjectTank::ObjectTank()
        : ObjectBase{PositionProperty::init_value,
                     VelocityProperty::init_value,
                     HealthProperty::init_value,
                     FuelProperty::init_value,
                     AmmoProperty::init_value}
{
}

ObjectBunker::ObjectBunker()
        : ObjectBase{PositionProperty::init_value,
                     HealthProperty::init_value,
                     FuelProperty::init_value,
                     AmmoProperty::init_value}
{
}

}