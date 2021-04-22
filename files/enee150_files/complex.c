#include <stdio.h>
#include <math.h>
#include "complex.h"

// Squared norm
static float sq_norm(complex z){ // Static makes sure the function cannot be called from other files
    return (pow(z.real, 2) + pow(z.imag, 2));
}

// Constructor
complex new_complex(double real, double imag)
{
    complex to_return;
    to_return.real = real;
    to_return.imag = imag;

    return to_return;
}

// Addition
complex add_complex(complex z1, complex z2)
{
    double real = z1.real + z2.real;
    double imag = z1.imag + z2.imag;

    return new_complex(real, imag);
}

// Subtraction
complex subtract_complex(complex z1, complex z2)
{
    double real = z1.real - z2.real;
    double imag = z1.imag - z2.imag;

    return new_complex(real, imag);
}

// Multiplication
complex multiply_complex(complex z1, complex z2)
{
    double real = z1.real * z2.real - z1.imag * z2.imag;
    double imag = z1.real * z2.imag + z1.imag * z2.real;

    return new_complex(real, imag);
}

// Division
complex divide_complex(complex z1, complex z2)
{
    float z2_sq_norm = sq_norm(z2);
    double real = 1 / z2_sq_norm * (z1.real * z2.real + z1.imag * z2.imag);
    double imag = 1 / z2_sq_norm * (-z1.real * z2.imag + z1.imag * z2.real);

    return new_complex(real, imag);
}

// Complex conjugation
complex conjugation(complex z)
{
    return new_complex(z.real, -z.imag);
}

// Print complex number
void print_complex(complex z){
    if(z.imag >= 0){
        printf("%f+%fi\n", z.real, z.imag);
    }
    else{
        printf("%f-%fi\n", z.real, -z.imag);
    }
}