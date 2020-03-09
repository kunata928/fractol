cmake_minimum_required(VERSION 3.15)
project(fractol C)

set(CMAKE_C_STANDARD 99)
link_directories(minilibx)

include_directories(fractol/includes)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lmlx -framework OpenGL -framework AppKit")

set(SOURCES srcs/main.c srcs/error.c srcs/fr_keyboard.c srcs/ft_change_map.c srcs/fr_init.c srcs/fr_plot.c srcs/fr_mouse.c srcs/fr_change_param.c srcs/fr_color.c srcs/fr_menu.c)

set(HEADERS includes/fractol.h includes/mlx.h)

set(LIBMLX minilibx/libmlx.a)

add_executable(fractol ${SOURCES} ${HEADERS} ${LIBMLX})

add_subdirectory(libft minilibx)

target_link_libraries(fractol mlx ${OPEN_GL} ${APP_KIT} libft)