#include <iostream>
#include <cstring>
#include <stdio.h>
#define MAX_SIZE 1024
using namespace std;

char lowerChar(char r) {
    return r - 97;
}

char upperChar(char r) {
    return r - 65;
}

int main()
{
    char decode[MAX_SIZE];
    char encode[MAX_SIZE];

    cout << "Введите текст: " << endl;
    cin >> decode;

    int len = strlen(decode);
    int i = 0;


    for ( i = 0; i < len; i++ ) {
        encode[i] = (isupper(decode[i])) ?
         ((upperChar(decode[i]) + 3) % 26) + 65 :
         ((lowerChar(decode[i]) + 3) % 26) + 97;
    }

    for(i = 0; i < len;i++) {
        cout << encode[i];
    }

    return 0;
}
