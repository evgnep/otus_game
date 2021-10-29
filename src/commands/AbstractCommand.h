#pragma once

#include <memory>

namespace otg {
class AbstractObject;

class AbstractCommand
{
public:
    virtual std::shared_ptr<AbstractObject> execute() = 0;
};

using AbstractCommandPtr = std::shared_ptr<AbstractCommand>;

}