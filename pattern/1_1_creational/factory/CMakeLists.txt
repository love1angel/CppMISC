include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(include)

set(HEADER
        include/SettingInterface.hpp
        include/SettingFactory.hpp)

set(SRC
        src/SettingFactory.cpp
        src/SettingImpl.hpp
        src/SettingImpl.cpp
        test_factory.cc)

add_executable(ut_factory
        ${HEADER}
        ${SRC})

target_link_libraries(ut_factory gtest gtest_main)

add_test(NAME ut_factory COMMAND ut_factory)
