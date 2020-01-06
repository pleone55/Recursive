/******************************************************************************************
 * Program Name: validate.hpp
 * Author: Paul Leone
 * Date: 7/27/2019
 * Description: Validates user input of choice selected and input of a string
 * ****************************************************************************************/

#ifndef VALIDATE_HPP
#define VALIDATE_HPP

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::getline;
using std::string;

void menuValidation(int &);		//validates menu selection
void integerValidation(int &);		//validates an integer input

#endif
