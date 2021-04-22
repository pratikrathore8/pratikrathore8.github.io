#include "complex.h"
#include <stdio.h>

int main(){
    complex z1 = new_complex(1, 1);
    complex z2 = new_complex(1, 2);

    printf("z1 = ");
    print_complex(z1);

    printf("z2 = ");
    print_complex(z2);

    complex sum = add_complex(z1, z2);
    printf("z1+z2 = ");
    print_complex(sum);

    complex diff = subtract_complex(z1, z2);
    printf("z1-z2 = ");
    print_complex(diff);

    complex mult = multiply_complex(z1, z2);
    printf("z1*z2 = ");
    print_complex(mult);

    complex div = divide_complex(z1, z2);
    printf("z1/z2 = ");
    print_complex(div);

    complex conj = conjugation(z1);
    printf("(z1)* = ");
    print_complex(conj);

    // sq_norm(z1); // Fails because sq_norm is static
}