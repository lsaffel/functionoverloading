#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main() {

    cout << sum(4, 3) << endl;      // automatically uses the definition
        // of sum with 2 parameters of type int
    cout << sum(4.4, 3.3) << endl;      // automatically uses the definition
        // of sum with 2 parameters of type double
    cout << sum(4.4, 3.3, 2.2) << endl;      // automatically uses the  /
        // definition of sum with 3 parameters of type float

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

float sum(float a, float b, float c) {
    return a + b + c;
}

