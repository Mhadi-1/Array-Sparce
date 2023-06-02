


#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cctype>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "C++ Part 2.h"
using namespace std;


// Chick If Array Sparce or not 

int RandNumber(int From , int To)
{
    int Number = rand() % (To - From + 1) + From;

    return Number;
}

void FillMatrixWithRandNum(int Arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j  < 3; j ++)
        {
            Arr[i][j] = RandNumber(1, 10);
        }
    }
}

void ChickElementsZeroOnArr(int arr[3][3] , int &CounterOfZero , int &CountNum )
{
  

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j  < 3; j++)
        {
      
            if (arr[i][j] == 0)
            {
                CounterOfZero++;
            }
            else
            {
                CountNum++;
            }
        }
    }

}

void PrintAr(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %0*d ",2, arr[i][j]);
        }
        cout << endl;
    }

}

short CounNumbInMatrix(int Arr[3][3], int Row, int Colm, int NumberToCount)
{
    short Counter = 0;

    for (int i = 0; i < Row ; i++)
    {
        for (int j = 0; j < Colm; j++)
        {
            if (Arr[i][j] == NumberToCount)
            {
                Counter++;
            }
        }

    }
    return Counter;
}

bool chickIfMatrixSparce(int CountZero, int CuntNum)
{
 
    return (CountZero >= CuntNum);

}
int main()
{

      int Arr1[3][3] = { {0,10,1},{10,0,90},{0,0,1} };

      int CounterOfZero = 0;
      int CountNum = 0;

      srand((unsigned)time(NULL));
    
     // FillMatrixWithRandNum(Arr1);

      PrintAr(Arr1);
      ChickElementsZeroOnArr(Arr1, CounterOfZero, CountNum);

      if (!chickIfMatrixSparce(CounterOfZero, CountNum))
          cout << "No: Matrix is Not Sparce\n";
      else
          cout << " Yes: Matrix is Sparce\n";


    

}



