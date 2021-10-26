#pragma once

#include <memory>

#include "../types/Property.h"

namespace otg {

class ObjectBase {
public:

  PropertyValueOpt getProperty(PropertyKey key) const;
  void setProperty(PropertyKey key, const PropertyValue &value);

protected:

  template <typename... Args>
  explicit ObjectBase(Args &&... args);

private:
  PropertyMap m_propertys;

  bool hasProperty(PropertyKey key) const;
};

template <typename... Args>
ObjectBase::ObjectBase(Args &&... args)
    : m_propertys{std::forward<Args>(args)...} {}

} // namespace otg