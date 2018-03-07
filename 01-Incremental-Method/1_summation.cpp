#include <iostream>
using namespace std;

int summation(int * arr, int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    cout << "\n" << summation(arr, 5) << "\n";
    return 0;
}
