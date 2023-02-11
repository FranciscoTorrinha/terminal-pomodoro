project('terminal-pomodoro', 'c')
ncurses_dep = dependency('ncurses')
uuid_dep = dependency('uuid')

lib_ncomponent = shared_library('ncomponent', 'src/lib/ncomponent/lib.c', dependencies: [ncurses_dep, uuid_dep])

executable('pomodoro', 'src/main.c',  link_with: lib_ncomponent)
executable('ncomponent_tests', 'src/tests/ncomponent/main.c', link_with: lib_ncomponent)
