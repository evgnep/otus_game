#include "ObjectTank.h"

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
}