###############
#  Variables  #
###############

DEBUG_MODE=1

build: main.o my_lib.o
		g++ main.o my_lib.o -o main
main.o:
		g++ main.cpp -c
my_lib.o:
		g++ my_lib.cpp -c

run:
		./main

clean:
		rm -f *.o
		rm -f main