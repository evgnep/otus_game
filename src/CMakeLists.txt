cmake_minimum_required(VERSION 3.2)

set(object_headers
    objects/ObjectBase.h
    objects/ObjectTank.h
)

set(object_sources
    objects/ObjectBase.cpp
    objects/ObjectTank.cpp
)

set(types_headers
    types/Property.h
    types/Vector.h
)

set(types_sources
    types/Vector.cpp
)

add_library(OtgLib
    STATIC
    ${object_headers}
    ${object_sources}
    ${types_headers}
    ${types_sources}
)

target_compile_definitions(OtgLib
    PUBLIC
    UNICODE
    _UNICODE
)