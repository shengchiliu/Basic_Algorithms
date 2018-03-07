#include <iostream>
using namespace std;

int main() {
    int arr[11] = {5,-3,4,8,7,9,4,6,4,-6,-2};
    int minidx;

    for (int i=0; i<11; i++) {
        minidx = i;
        for (int j=i+1; j<11; j++) {
            if (arr[j]<arr[minidx]) {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }

    for (int i=0; i<11; i++) {
        cout << arr[i] << "  ";
    }
    return 0;

}

