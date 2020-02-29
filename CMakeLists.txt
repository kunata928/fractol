cmake_minimum_required(VERSION 3.15)
project(fractol C)

set(CMAKE_C_STANDARD 99)
link_directories(minilibx)

include_directories(fdf/includes)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lmlx -framework OpenGL -framework AppKit")

set(SOURCES )

set(HEADERS includes/fdf.h includes/mlx.h)

set(LIBMLX minilibx/libmlx.a)

add_executable(fdf ${SOURCES} ${HEADERS} ${LIBMLX})

add_subdirectory(libft minilibx)

target_link_libraries(fractol mlx ${OPEN_GL} ${APP_KIT} libft)