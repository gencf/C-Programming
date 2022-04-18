#include <stdio.h>
#include <complex.h>
#include <math.h>
#define __STDC_WANT_LIB_EXT1__ 1

int main() {

#ifdef __STDC_NO_COMPLEX__
    printf("Complex numbers are not supported");
    exit(1);

#else
    double complex complex1 = I * I;       // I ^ 2
    printf("The first complex number: %.2f%+.2fi\n", creal(complex1), cimag(complex1));

    double complex complex2 = pow(I, 2);   // I ^ 2
    printf("The second complex number: %.2f%+.2fi\n", creal(complex2), cimag(complex2));

    double PI = acos(-1);
    double complex complex3 = cpow(I, PI);   //Euler's Formula
    printf("The third complex number: %.2f%+.2fi\n", creal(complex3), cimag(complex3));

    double complex complex4 = conj(1 + 2 * I);  // conjugates 
    printf("The fourth complex number: %.2f%+.2fi\n", creal(complex4), cimag(complex4));

    double complex complex5 = conj(1 - 2 * I);  //conjugates
    printf("The fifth complex number: %.2f%+.2fi\n", creal(complex5), cimag(complex5));

    printf("The product of the conjugates: %.2f%+.2fi", creal(complex4 * complex5), cimag(complex4 * complex5));

#endif

    return 0;
}