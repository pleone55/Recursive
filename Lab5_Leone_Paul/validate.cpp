/*****************************************************************************************
 * Program Name: validate.cpp
 * Author: Paul Leone
 * Date: 7/27/2019
 * Description: Validates user input of an integer and a string
 * ***************************************************************************************/

#include "validate.hpp"

void menuValidation(int &validate)
{
	bool input = false;

	while(!input){
		cin >> validate;

		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer value\n";
		}
		else if(validate < 0 || validate > 4){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer from the given options\n";
		}
		else
			input = true;
	}
}

void integerValidation(int &num)
{
	bool input = false;

	while(!input){
		cin >> num;
	
		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Please enter a positive integer.\n";
		}
		else
			input = true;
	}
}
