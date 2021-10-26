#pragma once

#include <memory>
#include <string>

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

using ObjectBasePtr = std::shared_ptr<ObjectBase>;

template <typename... Args>
ObjectBase::ObjectBase(Args &&... args)
    : m_propertys{std::forward<Args>(args)...} {}

class ObjectTank : public ObjectBase
{
public:
    ObjectTank();
};

class ObjectBunker : public ObjectBase
{
public:
    ObjectBunker();
};

} // namespace otg