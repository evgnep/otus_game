#pragma once

#include <optional>
#include <variant>

#include "Vector.h"

namespace otg {

enum class PropertyKey
{
    Position,
    Velocity,
    Fuel
};

using PropertyValue = std::variant<int,Vector>;
using PropertyValueOpt = std::optional<PropertyValue>;

}