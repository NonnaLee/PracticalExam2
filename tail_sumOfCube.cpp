// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

// NON RECURSION VERSION
int sumOfCube(int n) {
    int sum = 0;
    for (int i = n; i > 0; i--) {
        sum += pow(n, 3);
    }
    return sum;
}

// RECURSION VERSION 
int sumOfCube(int n) {
    int sum = pow(n, 3);
    if (n >= 1) {
        return sum + sumOfCube(n - 1);
    }
    return sum;
}

int main()
{
    //std::cout << sumOfCube(20);
}