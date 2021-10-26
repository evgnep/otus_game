#include "ObjectTank.h"

namespace otg {

ObjectTank::ObjectTank()
        : ObjectBase{std::pair{PropertyKey::Position,Vector{}},
                     std::pair{PropertyKey::Velocity,Vector{}},
                     std::pair{PropertyKey::Health,0},
                     std::pair{PropertyKey::Fuel,0}}
{
}

}