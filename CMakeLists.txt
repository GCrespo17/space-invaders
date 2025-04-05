cmake_minimum_required(VERSION 3.10)
project(space-invaders VERSION 1.0)

set(CXX_STANDARD 17)

#Add include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

#Here you should set the path to your SFML 
set(SFML_DIR "C:/Users/gcrespo/Libraries/SFML/lib/cmake/SFML")

find_package(SFML 3.0 REQUIRED COMPONENTS Graphics Window System Audio Network)
# find_package(Freetype REQUIRED)

#For recursive compile .cpp files
file(GLOB_RECURSE SRC_FILES src/*.cpp)


add_executable(space-invaders ${SRC_FILES})


# #Link Libraries to target
target_link_libraries(space-invaders PRIVATE
    SFML::Graphics
    SFML::Window
    SFML::System
    SFML::Audio
    SFML::Network
    opengl32  # Solo en Windows
    winmm     # Solo en Windows
)
