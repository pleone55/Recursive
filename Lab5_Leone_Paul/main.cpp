/********************************************************************************************
 * Program Name: main.cpp
 * Author: Paul Leone
 * Date: 7/27/2019
 * Description: Main file to execute the functions
 * ******************************************************************************************/

#include "menu.hpp"
#include "validate.hpp"
#include "reverse.hpp"
#include "sumArray.hpp"
#include "triangle.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::getline;

int main()
{
	int choice, total, size, tri, N;
	string rev;

	//use do while loop to iterate at least once until user exits
	do
	{
		menu();
		cout << "Select from the menu options: ";
		menuValidation(choice);
		cout << "\n";

		//validate the menu selection
		while((choice < 1) || (choice > 4)){
			cout << "Please enter from the choices given: ";
			menuValidation(choice);
			cout << "\n";
		}

		//switch case depending on user options to call function
		switch(choice)
		{
			case 1:								//reverse a string
			{
				cout << "Enter a string to be reversed.\n";
				cin.ignore();
				getline(cin, rev);
				cout << "String before reversal: " << rev << "\n";	//display string before reversal
				cout << "String after reversal: ";
				reverse(rev);						//call function to reverse string
				cout << "\n";
				break;
			}

			case 2:							//sum integers of the array
			{
				cout << "Enter the array size: ";
				integerValidation(size);
				int *array = new int[size];
				cout << "Please fill the array with " << size << " integers.\n";
				for(int i = 0; i < size; i++){
					cin >> array[i];
				}
				total = sumArray(array, size);
				cout << "The sum of the array is: " << total << "\n";
				cout << "\n";
				delete [] array;
				break;
			}

			case 3:							//triangular sum
			{	cout << "Enter an integer to calculate its triangular number: ";
				integerValidation(N);
				tri = triangular(N);
				cout << "The triangular number is: " << tri << "\n"; 
				cout << "\n";
				break;
			}

			case 4:
			{
				cout << "Program Has Quit\n";
				choice = 4;
				break;
			}

			default:
			{
				break;
			}
		}
	}while(choice != 4);

	return 0;
}
