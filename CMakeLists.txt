cmake_minimum_required(VERSION 3.17)
project(Magazin_Chitare)

set(CMAKE_CXX_STANDARD 14)

add_executable(Magazin_Chitare main.cpp Amplificator.cpp Chitara.cpp Chitara_Acustica.cpp Chitara_Electrica.cpp Client.cpp Magazin_Chitare.cpp)

