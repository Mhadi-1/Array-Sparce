#pragma once
#include <iostream>
#include <string> 
#include <cmath>
using namespace std;

namespace ReadNumberLib
{



	// Invalidation Onle Number :

	int ReadNumberFromUser(string Massge)
	{
		cout << Massge << endl;
		int Number;
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();

			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

			cout << " Enter Invlide Number Please : \n";
				cin >> Number;

		}
		return Number;

	}

	void ChickNumber(int Number)
	{
		// Using Ternary Operation 
		string result , Resultr2;


		result = (Number > 0) ? " Posstive Number " : ( (Number == 0) ? "  Number is Zero " : " Negative Number ");


		cout << Number;
		cout << result;


	}


	// Defult Parameters 
	// optional Parametres : 

	int DefultFunction(int a, int b, int c = 0, int d = 0)
	{
		c = (a & b);

		return (a + b + c + d);
	}


}