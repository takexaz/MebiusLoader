cmake_minimum_required (VERSION 3.23.2)

project (MebiusLoader VERSION 0.1.0 LANGUAGES CXX)

# デバッグフォルダにコンパイルの産物をコピー
set(DEBUG_DIR "${CMAKE_SOURCE_DIR}/../!MUGEN_DEBUG")

add_subdirectory(DINPUT)