#include "ObjectTank.h"

namespace otg {

ObjectTank::ObjectTank()
        : ObjectBase{PropertyPosition::init_value,
                     PropertyVelocity::init_value,
                     PropertyHealth::init_value,
                     PropertyFuel::init_value}
{
}

}