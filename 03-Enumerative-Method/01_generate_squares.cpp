#include <iostream>
#include <cmath>
using namespace std;

int main () {
    for (int i=0; i<100; i++) {
        // cout << i << " square number: " << i * i << "\n";
        int sqrt_i = sqrt(i);

        if (sqrt_i * sqrt_i == i) {
            cout << i << " is " << sqrt_i << " square number. \n";
        }
    }
}
