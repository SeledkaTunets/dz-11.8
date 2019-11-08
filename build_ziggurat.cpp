// dz3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>



    void build_Ziggurat(int & size)
    {
       
        const int m = size;
        int n = size;

        int ** a = new int*[m];
        for (int i=0; i<m; i++)
            a[i] = new int[n];

     
        for(int i = 0; i < n/2; i++)
           {
            for(int j = 0; j < m/2; j++)
               {
                  a[i][j] = j + 1;
                  a[j][i] = j + 1;
                  a[n - i - 1][m - j - 1] = j + 1;
                  a[m - j - 1][n - i - 1] = j + 1;
                  a[i][m - j - 1] = j + 1;
                  a[m - j - 1][i] = j + 1;
                  a[n - i - 1][j] = j + 1;
                  a[j][n - i - 1] = j + 1;
               }
            
           }
       
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
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
        build_Ziggurat(size);
        return 0;
    }
