cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp cmake-build-debug/Studio.cpp Studio.cpp Studio.h Trainer.cpp Trainer.h Customer.cpp Customer.h Action.cpp Action.h Workout.cpp Workout.h)
