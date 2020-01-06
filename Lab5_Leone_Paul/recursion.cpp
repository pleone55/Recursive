/********************************************************************************************
 * Program Name: recursion.cpp
 * Author: Paul Leone
 * Date: 7/27/2019
 * Description: Contains the functions to return a string in reverse, sum all integers in
 * 		an array, and calculate the triangular sum of an integer
 ********************************************************************************************/

#include "reverse.hpp"
#include "sumArray.hpp"
#include "triangle.hpp"

#include <iostream>

using std::cout;

/*********************************************************************************
 * Function takes in a string then reverses the string
 * *******************************************************************************/

void reverse(const string &str)
{
	//size_t used to represent the size of an object
	//https://stackoverflow.com/questions/502856/whats-the-difference-between-size-t-and-int-in-c
	size_t  numChars = str.size();

	if(numChars == 0){
		cout << " ";
		cout << "\nThe string is empty\n";
	}
	if(numChars == 1){
		cout << str << "\n";
	}
	else{
	//formula used to reverse the string if more than one character
	//Formula sourced from https://www.geeksforgeeks.org/substring-in-cpp/
	cout << str[numChars - 1];
	reverse(str.substr(0, str.length() - 1));
	}
}

/*********************************************************************************
 * Function is used to calculate the sum of all integers in an array
 * *******************************************************************************/

int sumArray(int *array, int size)
{
	if(size <= 0){
		return 0;
	}

	return sumArray(array, size - 1) + array[size - 1];
}

/*********************************************************************************
 * Function calculates the triangular sum of integer N
 * *******************************************************************************/

int triangular(int N)
{
	if(N == 0)
		return 0;
	if(N == 1)
		return 1;

	//if number is greater than 1 return the triangular sum
	return triangular(N - 1) + N;
}
