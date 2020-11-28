cmake_minimum_required(VERSION 3.16)
project(fluxions-ssg)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

if (APPLE)
   include_directories(/usr/local/include)
   link_directories(/usr/local/lib)
endif()

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(${PROJECT_NAME}
    STATIC
	src/fluxions_ssg_aniso_light.cpp
	src/fluxions_ssg_camera.cpp
	src/fluxions_ssg_dirto_light.cpp
	src/fluxions_ssg_environment.cpp
	src/fluxions_ssg_material_library.cpp
	src/fluxions_ssg_materials.cpp
	src/fluxions_ssg_node.cpp
	src/fluxions_ssg_path_animation.cpp
	src/fluxions_ssg_point_light.cpp
	src/fluxions_ssg_property.cpp
	src/fluxions_ssg_reader.cpp
	src/fluxions_ssg_renderer_plugin.cpp
	src/fluxions_ssg_scene_graph.cpp
	src/fluxions_ssg_sphere.cpp
	src/fluxions_ssg_writer.cpp
    )

if(${CMAKE_VERSION} VERSION_GREATER "3.16.0")
    message("Fluxions SSG using precompiled headers")
    target_precompile_headers(${PROJECT_NAME} PRIVATE src/fluxions_ssg_pch.cpp)
endif()

find_package(GLEW REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE GLEW::GLEW)
