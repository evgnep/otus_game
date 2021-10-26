#pragma once

#include <optional>
#include <unordered_map>
#include <variant>

#include "Vector.h"

namespace otg {

enum class PropertyKey
{
    Position,
    Velocity,
    Health,
    Fuel,
    Ammo
};

using PropertyValue = std::variant<int,Vector>;

template<PropertyKey key>
struct Property {};

#define SPECIFY_PROPERTY_TYPE(Key,Type)                               \
    template<>                                                        \
    struct Property<PropertyKey::Key>                                 \
    {                                                                 \
        using type = Type;                                            \
        static constexpr PropertyKey key = PropertyKey::Key;          \
        static constexpr auto init_value = std::pair{key,type{}};     \
    };                                                                \
    using Key##Property = Property<PropertyKey::Key>;                 \

SPECIFY_PROPERTY_TYPE(Position,otg::Vector)
SPECIFY_PROPERTY_TYPE(Velocity,otg::Vector)
SPECIFY_PROPERTY_TYPE(Health,int)
SPECIFY_PROPERTY_TYPE(Fuel,int)
SPECIFY_PROPERTY_TYPE(Ammo,int)


using PropertyValueOpt = std::optional<PropertyValue>;
using PropertyMap = std::unordered_map<PropertyKey,PropertyValue>;

}