#include <stdio.h>

int main(void) {
    int arr[5] = {1,2,3,4,5};

    for (int i=0; arr[i] != '\0'; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
