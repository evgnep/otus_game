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

//template<PropertyKey A>
//struct PropertyType {};
//
//template<>
//struct PropertyType<PropertyKey::Position> {using type = Vector;};
//
//template<>
//struct PropertyType<PropertyKey::Velocity> {using type = Vector;};
//
//template<>
//struct PropertyType<PropertyKey::Health> {using type = int;};
//
//template<>
//struct PropertyType<PropertyKey::Fuel> {using type = int;};
//
//template<>
//struct PropertyType<PropertyKey::Ammo> {using type = int;};
//
//using PropertyValue = std::variant<PropertyType<PropertyKey::Position>,
//                                   PropertyType<PropertyKey::Velocity>,
//                                   PropertyType<PropertyKey::Health>,
//                                   PropertyType<PropertyKey::Fuel>,
//                                   PropertyType<PropertyKey::Ammo>>;

using PropertyValue = std::variant<int,Vector>;
using PropertyValueOpt = std::optional<PropertyValue>;
using PropertyPair = std::pair<PropertyKey,PropertyValue>;
using PropertyMap = std::unordered_map<PropertyKey,PropertyValue>;

}