#include <math.h>
#include <stdio.h>
#include <float.h>
#include <limits.h>

// valeur absolue
long long abs_(long long x) {return (x < 0 ? -x : x);}

// affiche les nombres sous forme de puissance de 2
void printIntIn2Powers(long long size) {
    long long pow = 0, n = (size > 0 ? 1 : -1);
    while (abs_(n) < abs_(size)) {n *= 2;pow++;}
    if (!pow) {printf("%lld\n", size);return;}
    if (size < 0)
        printf("-");
    else
        printf(" ");
    
    if (n-size)
        printf("2^%lld-%lld\n", pow, n-size);
    else
        printf("2^%lld\n", pow);
}

// code principal
int main() {

    printf("\vNombre de bytes occupé par un :\n");
    printf("char: %lu\n", sizeof(char));
    printf("short: %lu\n", sizeof(short));
    printf("int: %lu\n", sizeof(int));
    printf("long: %lu\n", sizeof(long));
    printf("long: %lu\n", sizeof(long));
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("long double: %lu\n", sizeof(long double));
    
    
    printf("\vValeur minimale d'un: \n");
    
    printf("signed char: "); printIntIn2Powers(SCHAR_MIN);
    printf("signed short int: "); printIntIn2Powers(SHRT_MIN);
    printf("signed int: "); printIntIn2Powers(INT_MIN);
    printf("signed long: %ld\n", LONG_MIN); // à vérifier manuellement
    
    printf("\vValeur minimale positive non nulle d'un: \n");
    
    printf("float: %.10e\n", FLT_MIN);
    printf("double: %.10e\n", DBL_MIN);
    printf("long double: %.10Le\n", LDBL_MIN);

    printf("\vValeur maximale d'un: \n");
    
    printf("signed char:"); printIntIn2Powers(SCHAR_MAX);
    printf("unsigned char:"); printIntIn2Powers(UCHAR_MAX);
    printf("signed short int:"); printIntIn2Powers(SHRT_MAX);
    printf("unsigned short int:"); printIntIn2Powers(USHRT_MAX);
    printf("signed int:"); printIntIn2Powers(INT_MAX);
    printf("unsigned int:"); printIntIn2Powers(UINT_MAX);
    printf("signed long: %ld\n", LONG_MAX); // à vérifier manuellement
    printf("unsigned long: %lu\n", ULONG_MAX); // à vérifier manuellement
    printf("float: %.10e\n", FLT_MAX);
    printf("double: %.10e\n", DBL_MAX);
    printf("long double: %.10Le\n", LDBL_MAX);

    printf("\vNombre de chiffre dans la mantisse (partie entière) d'un : \n");
    
    printf("float: %d\n", FLT_MANT_DIG);
    printf("double: %d\n", DBL_MANT_DIG);
    printf("long double: %d\n", LDBL_MANT_DIG);
    
    printf("\vNombre de chiffre significatifs d'un : \n");
    
    printf("float: %d\n", FLT_DIG);
    printf("double: %d\n", DBL_DIG);
    printf("long double: %d\n", LDBL_DIG);

    return 0;

}
