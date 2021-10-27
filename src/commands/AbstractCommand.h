#pragma once

#include <memory>

namespace otg {
class ObjectBase;

class AbstractCommand
{
public:
    virtual std::shared_ptr<ObjectBase> execute() = 0;
};

using AbstractCommandPtr = std::shared_ptr<AbstractCommand>;

}