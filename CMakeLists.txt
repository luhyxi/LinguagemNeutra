cmake_minimum_required(VERSION 3.26)
project(LinguagemNeutra C)

set(CMAKE_C_STANDARD 23)

add_executable(LinguagemNeutra main.c
        Dict/dict.c
        Dict/dict.h)
