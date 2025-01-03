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
mr_f = ./source/multiple_recursion

# Files in recursion folder
f1 = print_name_5_times.cpp
f2 = print_to.cpp
f3 = print_to_backtrack.cpp
f4 = sum_of_n_numbers.cpp
f5 = factorial.cpp
f6 = reverse_array.cpp
f7 = is_palindrome.cpp

# files in multiple_recursion folder
s1 = fibonacci.cpp
s2 = print_subsequence.cpp
s3 = subsequence_with_sum_k.cpp
s4 = mergeSort.cpp
s5 = quick_sort.cpp

# File paths list
files = $(r_f)/$(f1) $(r_f)/$(f2) $(r_f)/$(f3) $(r_f)/$(f4) $(r_f)/$(f5) $(r_f)/$(f6) $(r_f)/$(f7)

# adding more files to the list
files += $(mr_f)/$(s1) $(mr_f)/$(s2) $(mr_f)/$(s3) $(mr_f)/$(s4) $(mr_f)/$(s5)

# commands
main: 
	g++ main.cpp $(files) -o main.exe -I$(r_f) -L./lib -lsign -lordinalnum

# building static libary from source/other/sign.cpp and sign.h
build_sign:
	g++ -c ./source/other/sign.cpp -o ./source/other/sign.o
	ar rcs ./lib/libsign.a ./source/other/sign.o
build_ordinal_number:
	g++ -c ./source/other/ordinal_number.cpp -o ./source/other/ordinal_number.o
	ar rcs ./lib/libordinalnum.a ./source/other/ordinal_number.o
	