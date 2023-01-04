include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/Builder.hpp
        include/Director.hpp
        include/Product.hpp
        )

set(SRC
        src/ConcreteBuilder.hpp
        src/ConcreteBuilder.cpp
        src/Director.cpp
        test_builder.cc)

add_executable(ut_builder
        ${HEADER}
        ${SRC})

target_link_libraries(ut_builder gtest gtest_main)

add_test(NAME ut_builder COMMAND ut_builder)
