#pragma once

#include <string>
#include <memory>

#include "../types/Property.h"

namespace otg {

class AbstractObject
{
    public:
        virtual PropertyValueOpt getProperty(PropertyKey key) const = 0;
        virtual void setProperty(PropertyKey key,const PropertyValue &value) = 0;
};

}