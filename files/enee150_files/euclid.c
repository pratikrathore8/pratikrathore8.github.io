#include <stdio.h>

int euclid(int x, int y);

int main(int argc, char **argv){
    int x = 259;
    int y = 148;
    printf("x = %d, y = %d, gcd(x,y) = %d", x, y, euclid(x,y));
}

int euclid(int x, int y) {
    if(y == 0) return x;
    return euclid(y, x % y);
}

