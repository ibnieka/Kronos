cmake_minimum_required(VERSION 3.3)
if(CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_CONFIGURATION_TYPES Debug Release)
  set(CMAKE_CONFIGURATION_TYPES "${CMAKE_CONFIGURATION_TYPES}" CACHE STRING
    "Set the configurations to what we need" FORCE
    )
endif()
project(chatServer)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}) # Findexternpro.cmake
set(externpro_REV 16.07.1)
find_package(externpro REQUIRED)
xpCommonFlags()
xpGetExtern(externIncs externLibs PUBLIC wxWidgets boost)
add_executable(${PROJECT_NAME} chatServer.cpp chat_message.hpp
Card.hpp Card.cpp Game.hpp Player.cpp Player.hpp
HeartsGame.cpp HeartsGame.hpp)
target_link_libraries(${PROJECT_NAME} ${externLibs})
target_include_directories(${PROJECT_NAME} ${externIncs})