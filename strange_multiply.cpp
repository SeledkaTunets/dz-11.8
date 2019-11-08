// dz4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void strange_multiply(int m, int n)
{

if(n > m) 
   {
   int box = m;
   m = n;
   n = box;
   }

int sum = 0;
for(int i = 0; i < n; i++)
     { 
     sum = sum + m;
     }
 
std::cout << sum;
}

int main(int argc, const char * argv [])
{
    int m;
    int n;

    std::cin >> m;
    std::cout << std::endl;
    std::cin >> n;
    strange_multiply(n, m);
    return 0;
}
