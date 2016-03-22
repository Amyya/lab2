bmi: bmi.o main6.o
	g++ -o bmi main6.o bmi.o

bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp

main6.o: main6.cpp bmi.h
	g++ -c main6.cpp

clean:
	rm bmi*.o