main: main.o calculator.o scientific.o
	g++ -o main main.o calculator.o scientific.o

main.o: main.cpp calculator.hpp scientific.hpp
	g++ -c main.cpp

calculator.o: calculator.cpp calculator.hpp
	g++ -c calculator.cpp

scientific.o: scientific.cpp scientific.hpp
	g++ -c scientific.cpp
