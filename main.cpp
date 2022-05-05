// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int sumOfCube(int n) {
    int sum = n ^ 3;
    if (n >= 1) {
        return sum + sumOfCube(n - 1);
    }
    return sum;
}
int main()
{
    std::cout << sumOfCube(20);
}

