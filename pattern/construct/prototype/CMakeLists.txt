include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/ProtoType.hpp)

set(SRC
        ObjFactory.hpp
        ObjFactory.cpp
        src/ConcreteObject.hpp
        src/ConcreteObject.cpp
        test_prototype.cc)

add_executable(ut_prototype
        ${HEADER}
        ${SRC})

target_link_libraries(ut_prototype gtest gtest_main)

add_test(NAME ut_prototype COMMAND ut_prototype)
