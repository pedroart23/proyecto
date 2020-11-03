cmake_minimum_required(VERSION 3.17)
project(emulador)

set(CMAKE_CXX_STANDARD 14)

add_executable(emulador main.cpp botonera.cpp botonera.h puerta.cpp puerta.h sistema_seguridad.cpp sistema_seguridad.h software.cpp software.h)