# lab2
How to compile:
$ cd lab2

$ ls
bmi.cpp  bmi.exe  bmi.h  file.in  file.out  lab2.pdf  main6.cpp  Makefile  Makefile.txt  README.md

$ make
g++ -c bmi.cpp
g++ -c main6.cpp
g++ -o bmi main6.o bmi.o

$ make clean
rm bmi*.o

$ ./bmi

$ cat file.in
170 68
160 85
162 43
167 80
192 58
0   0

$ cat file.out
23.53 Normal
33.20 Obese Class I (Moderately obese)
16.38 Underweight
28.69 Overweight
15.73 Severely underweight
