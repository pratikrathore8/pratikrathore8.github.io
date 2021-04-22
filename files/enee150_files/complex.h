typedef struct complex_ {
    double real;
    double imag;
} complex;

complex new_complex(double real, double imag);
complex add_complex(complex z1, complex z2);
complex subtract_complex(complex z1, complex z2);
complex multiply_complex(complex z1, complex z2);
complex divide_complex(complex z1, complex z2);
complex conjugation(complex z);
void print_complex(complex z);

