#include <iostream>

using namespace std;


int main () {
    
    int array[5] = {3, 5, 6, 7, 3};

    int max = -1000;
    for (int i=0; i<5; i++) {
        if (array[i] > max)
            max = array[i];
    }

    cout << "Max is " << max;

}