#pragma once

#include <memory>
#include <string>

#include "../types/Property.h"

namespace otg {

class AbstractObject {
public:

  PropertyValueOpt getProperty(PropertyKey key) const;
  void setProperty(PropertyKey key, const PropertyValue &value);

protected:

  template <typename... Args>
  explicit AbstractObject(Args &&... args);

  virtual ~AbstractObject() = 0;

private:
  PropertyMap m_propertys;

  bool hasProperty(PropertyKey key) const;
};

using AbstractObjectPtr = std::shared_ptr<AbstractObject>;

template <typename... Args>
AbstractObject::AbstractObject(Args &&... args)
    : m_propertys{std::forward<Args>(args)...} {}

class ObjectTank : public AbstractObject
{
public:
    ObjectTank();
};

class ObjectBunker : public AbstractObject
{
public:
    ObjectBunker();
};

}