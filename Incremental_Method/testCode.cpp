#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    for (auto it = begin(arr); it != end(arr); it++) {
        cout << *it << " ";
    }

    cout << "\n";

    for (auto it=end(arr); it!=begin(arr);) {
        cout << *--it << " ";
    }

    return 0;
}
