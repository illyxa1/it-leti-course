all: main.cpp increments
	g++ main.cpp increments.o -o prog.o

increments: increments.cpp increments.h
	g++ -c increments.cpp -o increments.o

PHONEY: clean 
clean:
	rm -f prog.o increments.o
