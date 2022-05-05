// NON RECURSION VERSION
#include <iostream>
#include<cmath>

int sumOfCube(int n) {
    int sum = 0;
    for (int i = n; i > 0; i--) {
        sum += pow(n, 3);
    }
    return sum;
}