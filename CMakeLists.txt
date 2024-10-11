cmake_minimum_required(VERSION 3.29)

project(Estructuras_De_Datos)

set(CMAKE_CXX_STANDARD 20)
add_executable(Estructuras-De-Datos PL1/Programas/main.cpp
        PL1/Programas/Pila.cpp
        PL1/Programas/NodoPila.cpp
        PL1/Librerias/Pila.h
        PL1/Librerias/NodoCola.h
        PL1/Programas/NodoCola.cpp
        PL1/Librerias/Cola.h
        PL1/Programas/Cola.cpp)