###
# \authors   Олег Лесков <oleg@oSvoj.ru>
# \version   0.0.1a
# \date      10.2022
# \copyright MIT
###
PACKAGE=001.osvoj.ru
default: clear 001
	gcc -o 001.exe ./main.c ./001.o

001:
	gcc -c ./001.c

clear:
	rm -rf ./*.exe ./*.o

doc:
	doxygen ./Doxyfile
