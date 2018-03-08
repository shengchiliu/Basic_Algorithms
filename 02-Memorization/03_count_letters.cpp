#include <iostream>
using namespace std;
int main()
{
    char str[15] = "Hello World!";
    int count[26] = {0};
    for (int i=0; str[i]; i++) {
        if (str[i]>='A' && str[i]<='Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    for (int i=0; str[i]; i++) {
        if (str[i]>='a' && str[i]<='z') {
            count[str[i]-'a']++;
        }
    }
    for (int i=0; i<26; i++) {
        cout << count[i];
    }
    return 0;
}
