#include <stdio.h>

int main(){
    int i = 0;
    float j = 1.23;
    char c = 'a';
    char *str = "asdf";
    short int k = 10;

    i += 1;
    c = c + 3;
    *(str + 1) = 'g';
    j = j - 1;
    k *= 2;

    return 0;
}