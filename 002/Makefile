###
# \authors   Олег Лесков <oleg@oSvoj.ru>
# \version   0.0.1a
# \date      10.2022
# \copyright MIT
###
PACKAGE=001.osvoj.ru
default: clear 001
	gcc -o 002.exe ./main.c ./0020.o ./0021.o  ./0022.o

001:
	gcc -c ./0020.c
	gcc -c ./0021.c
	gcc -c ./0022.c

clear:
	rm -rf ./*.exe ./*.o

doc:
	doxygen ./Doxyfile
