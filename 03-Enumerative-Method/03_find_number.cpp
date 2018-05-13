#include <iostream>

using namespace std;

int main() {

    int array[7] = {2, 4, 1, 6, 12, 3, 7};

    bool find_number(int n) {

        bool found = false;

        for (int i=0; i<7; i++) {
            
            if (array[i] == n) {
                found = true;
                break;
            }
        }
        return found;
    }
}