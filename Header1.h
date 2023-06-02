#pragma once
#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
namespace LopLib
{
	
	/* 
	
	ARRAY Of Collection  مجموعه

	for(Iteam: rangeDeclartion : RangeExpersstion
	{
	    Code 
	}
	*/
	void RangLoop()
	{
	  
		int Arra[3];

		for (int i = 0; i < 3; i++)
		{
			cin >> Arra[i];
		}


		for (int N : Arra)
		{
			cout << N << endl;;
		}

	}
}
