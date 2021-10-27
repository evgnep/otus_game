cmake_minimum_required(VERSION 3.2)

set(commands_headers
    commands/AbstractCommand.h
    commands/CommandMovable.h
    commands/AdapterMovable.h
)

set(commands_sources
    commands/CommandMovable.cpp
    commands/AdapterMovable.cpp
)

set(object_headers
    objects/Objects.h
)

set(object_sources
    objects/Objects.cpp
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
    ${commands_headers}
    ${commands_sources}
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