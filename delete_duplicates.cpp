// dz1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void delete_duplicates(int & size,int * a)
{
   
    for(int i = 0; i < size; i++)
    {
        for(int m = i + 1; m < size; m++)
        {
            if(a[i] == a[m]) 
            {   
                size = size - 1;
                for(int z = m; z < size; z++)
                {
                    a[z] = a[z+1];
                }
            }
        }
    }

}

int main(int argc, const char * argv [])
{
    int size;
    std::cin >> size;
    int * a = new int[size];
    for(int i = 0; i < size; i++)
    {
        std::cin >> a[i];
    }

    delete_duplicates(size, a);

    for(int i = 0; i < size; i++) 
        std::cout << a[i] << " ";

    std::cout << std::endl;

    return 0;
}