cmake_minimum_required(VERSION 3.15)
project(Tetris)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tetris main.cpp Header/Block.h Source/Block.cpp Header/Blocks.h Source/Blocks.cpp Header/OBlocks.h Source/OBlocks.cpp Header/Board.h Source/Board.cpp Header/GameUI.h Source/GameUI.cpp Header/Game.h Source/Game.cpp)