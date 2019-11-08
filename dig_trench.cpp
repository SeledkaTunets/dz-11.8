// dz2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void dig_trench(int & size)
{
   
    const int m = size;
    int n = size;
    int ** a = new int*[m];
    for (int i=0; i<m; i++)
        a[i] = new int[n];

for(int i = 0; i < m; i++) 
      {
      for(int j = 0; j < n; j++)
         {
         if(j == i) { a[i][j] = 0;}
         if(j - i > 0) { a[i][j] = j - i;}
         if(j - i < 0) { a[i][j] = -1 * (j - i);}
         }     
      }
for(int i = 0; i < m; i++)
{
    for(int j = 0; j < n; j++)
    {
        std::cout << a[i][j] << " ";
    }
    std::cout << std::endl;
}

  
}

int main(int argc, const char * argv [])
{
    int size;
    std::cin >> size;

    dig_trench(size);

    return 0;
}
