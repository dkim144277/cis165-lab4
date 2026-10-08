#include <iostream>

double NUM1 = 23;
double NUM2 = 32;
double NUM3 = 37;
double NUM4 = 24;
double NUM5 = 33;

// get sum and average
double sum = NUM1 + NUM2 + NUM3 + NUM4 + NUM5;
double average = sum / 5;

int main()
{
    std::cout << "Sum: " << sum << "\nAvg: " << average;
    return 0;
}