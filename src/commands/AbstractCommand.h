#pragma once

namespace otg {

class AbstractCommand
{
public:
    virtual void execute() = 0;
};

}