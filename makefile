heap: main.o student.o addresss.o date.o
	g++ -o heap main.o student.o address.o date.o

main.o: main.cpp student.h address.h date.h
	g++ -c main.cpp

student.o: student.cpp student.h address.h date.h
	g++ -c main.cpp

address.o: address.cpp address.h
	g++ -c address.cpp

date.o: date.cpp date.h
	g++ -c date.cpp

clean: 
	rm *.o heap
