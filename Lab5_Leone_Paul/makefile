
#Program Name: makefile
#Author: Paul Leone
#Date: 7/27/2019
#Description: This is the makefile to compile the program

CXX = g++
CXXFLAGS = -std=c++11

OBJS = main.o menu.o validate.o recursion.o

SRCS = main.cpp menu.cpp validate.cpp recursion.cpp

HEADERS = menu.hpp validate.hpp reverse.hpp sumArray.hpp triangle.hpp

recur: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o recur

clean:
	rm *.0 main 
