cmake_minimum_required(VERSION 3.9)

project(push_swap)

set(CMAKE_CXX_STANDARD 98)

include_directories(libft/includes)

add_executable(push_swap srcs/push_swap.c libft/push_swap/ft_ps_convert_argv.c  libft/push_swap/ft_ps_exec_s.c libft/push_swap/ft_ps_exec_p.c libft/push_swap/ft_ps_exec_r.c libft/push_swap/ft_ps_opp.c libft/push_swap/ft_ps_ops.c libft/push_swap/ft_ps_oprr.c libft/lst/ft_arerelpos_next.c libft/lst/ft_getlst_maxval.c)

add_executable(checker srcs/checker.c libft/push_swap/ft_ps_convert_argv.c libft/push_swap/ft_ps_exec_s.c libft/push_swap/ft_ps_exec_p.c libft/push_swap/ft_ps_exec_r.c libft/push_swap/ft_ps_opp.c libft/push_swap/ft_ps_ops.c libft/push_swap/ft_ps_oprr.c libft/lst/ft_is_abspos_is_relpos.c libft/lst/ft_arerelpos_next.c srcs/12.c libft/lst/ft_getlst_maxval.c)

target_link_libraries(push_swap ${CMAKE_SOURCE_DIR}/libft/libft.a)
target_link_libraries(checker ${CMAKE_SOURCE_DIR}/libft/libft.a)