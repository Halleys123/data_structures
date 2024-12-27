# ? Windows: makefile
# To include a folder in the path, use the -I flag
# To include a library in the path, use the -L flag
# ? To use dynamic libraries, put the .dll files in the same folder as the .exe file 
# To link a library, use the -l flag (without the lib prefix and the .dll extension)
# ? Static libraries can be linked by putting the .lib files in the lib folder
# To add .lib files, use the -l flag (without the lib prefix and the .lib extension)
# To compile a file, use the -c flag that will generate a .o file
# To link the .o files, use the -o flag

# To compile the main file, use the following command:

# Variable for source/recursion
r_f = ./source/recursion

# Files
f0 = main.cpp
f1 = print_name_5_times.cpp
# f2 = print_linearly_1_to_N.cpp
f2 = print_to.cpp
f3 = print_to_backtrack.cpp

# File paths list
files = $(r_f)/$(f1) $(r_f)/$(f2) $(r_f)/$(f3)

# commands
main: 
	g++ main.cpp $(files) -o main.exe -I$(r_f) -L./lib -lsign

# building static libary from source/other/sign.cpp and sign.h
build:
	g++ -c ./source/other/sign.cpp -o ./source/other/sign.o
	ar rcs ./lib/libsign.a ./source/other/sign.o
	