#include "CommandMovable.h"

namespace otg {

CommandMovable::CommandMovable(const AbstractMovablePtr &movable)
    : m_movable{movable}
{}

AbstractObjectPtr CommandMovable::execute()
{
    m_movable->setPosition(m_movable->getPosition() + m_movable->getVelocity());
    return m_movable->getObject();
}

}