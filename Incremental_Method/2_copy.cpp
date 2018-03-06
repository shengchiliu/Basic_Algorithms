#include <iostream>
using namespace std;

void copy() {

    char s[] = "abcde", t[] = "";
    int i;
    for (i=0; s[i] != '\0'; i++) {
        t[i] = s[i];
        cout << t[i];
    }
    t[i] = '\0';
}

int main() {
    copy();
    return 0;
}
