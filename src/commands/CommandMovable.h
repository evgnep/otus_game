#pragma once

#include "AbstractCommand.h"
#include "Movable.h"

namespace otg {

class CommandMovable : public AbstractCommand
{
public:
    
    explicit CommandMovable(const AbstractMovablePtr& movable);

    void execute() override;

private:

    AbstractMovablePtr m_movable;
};

}