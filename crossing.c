// Résultat de l'opérateur + entre les différents types, il en va de même pour les autres

#define typename(x) _Generic((x), _Bool: "_Bool", unsigned char: "unsigned char", \
char: "char", signed char: "signed char", short int: "short int", \
unsigned short int: "unsigned short int", int: "int", unsigned int: "unsigned int", \
long int: "long int", unsigned long int: "unsigned long int", long long int: "long long int", \
unsigned long long int: "unsigned long long int", float: "float", double: "double", \
long double: "long double", char *: "pointer to char", void *: "pointer to void", \
int *: "pointer to int", default: "other")

#include <stdio.h>

int main(int argc, char* argv[]) {

    signed char a;
    unsigned char z;
    signed short int e;
    signed int r;
    signed long int t;
    unsigned short int y;
    unsigned int u;
    unsigned long int i;
    float o;
    double p;
    long double q;

    printf("%s + %s is %s\n", typename(a), typename(z), typename(a + z));
    printf("%s + %s is %s\n", typename(a), typename(e), typename(a + e));
    printf("%s + %s is %s\n", typename(a), typename(r), typename(a + r));
    printf("%s + %s is %s\n", typename(a), typename(t), typename(a + t));
    printf("%s + %s is %s\n", typename(a), typename(y), typename(a + y));
    printf("%s + %s is %s\n", typename(a), typename(u), typename(a + u));
    printf("%s + %s is %s\n", typename(a), typename(i), typename(a + i));
    printf("%s + %s is %s\n", typename(a), typename(o), typename(a + o));
    printf("%s + %s is %s\n", typename(a), typename(p), typename(a + p));
    printf("%s + %s is %s\n", typename(a), typename(q), typename(a + q));
    printf("%s + %s is %s\n", typename(z), typename(a), typename(z + a));
    printf("%s + %s is %s\n", typename(z), typename(e), typename(z + e));
    printf("%s + %s is %s\n", typename(z), typename(r), typename(z + r));
    printf("%s + %s is %s\n", typename(z), typename(t), typename(z + t));
    printf("%s + %s is %s\n", typename(z), typename(y), typename(z + y));
    printf("%s + %s is %s\n", typename(z), typename(u), typename(z + u));
    printf("%s + %s is %s\n", typename(z), typename(i), typename(z + i));
    printf("%s + %s is %s\n", typename(z), typename(o), typename(z + o));
    printf("%s + %s is %s\n", typename(z), typename(p), typename(z + p));
    printf("%s + %s is %s\n", typename(z), typename(q), typename(z + q));
    printf("%s + %s is %s\n", typename(e), typename(a), typename(e + a));
    printf("%s + %s is %s\n", typename(e), typename(z), typename(e + z));
    printf("%s + %s is %s\n", typename(e), typename(r), typename(e + r));
    printf("%s + %s is %s\n", typename(e), typename(t), typename(e + t));
    printf("%s + %s is %s\n", typename(e), typename(y), typename(e + y));
    printf("%s + %s is %s\n", typename(e), typename(u), typename(e + u));
    printf("%s + %s is %s\n", typename(e), typename(i), typename(e + i));
    printf("%s + %s is %s\n", typename(e), typename(o), typename(e + o));
    printf("%s + %s is %s\n", typename(e), typename(p), typename(e + p));
    printf("%s + %s is %s\n", typename(e), typename(q), typename(e + q));
    printf("%s + %s is %s\n", typename(r), typename(a), typename(r + a));
    printf("%s + %s is %s\n", typename(r), typename(z), typename(r + z));
    printf("%s + %s is %s\n", typename(r), typename(e), typename(r + e));
    printf("%s + %s is %s\n", typename(r), typename(t), typename(r + t));
    printf("%s + %s is %s\n", typename(r), typename(y), typename(r + y));
    printf("%s + %s is %s\n", typename(r), typename(u), typename(r + u));
    printf("%s + %s is %s\n", typename(r), typename(i), typename(r + i));
    printf("%s + %s is %s\n", typename(r), typename(o), typename(r + o));
    printf("%s + %s is %s\n", typename(r), typename(p), typename(r + p));
    printf("%s + %s is %s\n", typename(r), typename(q), typename(r + q));
    printf("%s + %s is %s\n", typename(t), typename(a), typename(t + a));
    printf("%s + %s is %s\n", typename(t), typename(z), typename(t + z));
    printf("%s + %s is %s\n", typename(t), typename(e), typename(t + e));
    printf("%s + %s is %s\n", typename(t), typename(r), typename(t + r));
    printf("%s + %s is %s\n", typename(t), typename(y), typename(t + y));
    printf("%s + %s is %s\n", typename(t), typename(u), typename(t + u));
    printf("%s + %s is %s\n", typename(t), typename(i), typename(t + i));
    printf("%s + %s is %s\n", typename(t), typename(o), typename(t + o));
    printf("%s + %s is %s\n", typename(t), typename(p), typename(t + p));
    printf("%s + %s is %s\n", typename(t), typename(q), typename(t + q));
    printf("%s + %s is %s\n", typename(y), typename(a), typename(y + a));
    printf("%s + %s is %s\n", typename(y), typename(z), typename(y + z));
    printf("%s + %s is %s\n", typename(y), typename(e), typename(y + e));
    printf("%s + %s is %s\n", typename(y), typename(r), typename(y + r));
    printf("%s + %s is %s\n", typename(y), typename(t), typename(y + t));
    printf("%s + %s is %s\n", typename(y), typename(u), typename(y + u));
    printf("%s + %s is %s\n", typename(y), typename(i), typename(y + i));
    printf("%s + %s is %s\n", typename(y), typename(o), typename(y + o));
    printf("%s + %s is %s\n", typename(y), typename(p), typename(y + p));
    printf("%s + %s is %s\n", typename(y), typename(q), typename(y + q));
    printf("%s + %s is %s\n", typename(u), typename(a), typename(u + a));
    printf("%s + %s is %s\n", typename(u), typename(z), typename(u + z));
    printf("%s + %s is %s\n", typename(u), typename(e), typename(u + e));
    printf("%s + %s is %s\n", typename(u), typename(r), typename(u + r));
    printf("%s + %s is %s\n", typename(u), typename(t), typename(u + t));
    printf("%s + %s is %s\n", typename(u), typename(y), typename(u + y));
    printf("%s + %s is %s\n", typename(u), typename(i), typename(u + i));
    printf("%s + %s is %s\n", typename(u), typename(o), typename(u + o));
    printf("%s + %s is %s\n", typename(u), typename(p), typename(u + p));
    printf("%s + %s is %s\n", typename(u), typename(q), typename(u + q));
    printf("%s + %s is %s\n", typename(i), typename(a), typename(i + a));
    printf("%s + %s is %s\n", typename(i), typename(z), typename(i + z));
    printf("%s + %s is %s\n", typename(i), typename(e), typename(i + e));
    printf("%s + %s is %s\n", typename(i), typename(r), typename(i + r));
    printf("%s + %s is %s\n", typename(i), typename(t), typename(i + t));
    printf("%s + %s is %s\n", typename(i), typename(y), typename(i + y));
    printf("%s + %s is %s\n", typename(i), typename(u), typename(i + u));
    printf("%s + %s is %s\n", typename(i), typename(o), typename(i + o));
    printf("%s + %s is %s\n", typename(i), typename(p), typename(i + p));
    printf("%s + %s is %s\n", typename(i), typename(q), typename(i + q));
    printf("%s + %s is %s\n", typename(o), typename(a), typename(o + a));
    printf("%s + %s is %s\n", typename(o), typename(z), typename(o + z));
    printf("%s + %s is %s\n", typename(o), typename(e), typename(o + e));
    printf("%s + %s is %s\n", typename(o), typename(r), typename(o + r));
    printf("%s + %s is %s\n", typename(o), typename(t), typename(o + t));
    printf("%s + %s is %s\n", typename(o), typename(y), typename(o + y));
    printf("%s + %s is %s\n", typename(o), typename(u), typename(o + u));
    printf("%s + %s is %s\n", typename(o), typename(i), typename(o + i));
    printf("%s + %s is %s\n", typename(o), typename(p), typename(o + p));
    printf("%s + %s is %s\n", typename(o), typename(q), typename(o + q));
    printf("%s + %s is %s\n", typename(p), typename(a), typename(p + a));
    printf("%s + %s is %s\n", typename(p), typename(z), typename(p + z));
    printf("%s + %s is %s\n", typename(p), typename(e), typename(p + e));
    printf("%s + %s is %s\n", typename(p), typename(r), typename(p + r));
    printf("%s + %s is %s\n", typename(p), typename(t), typename(p + t));
    printf("%s + %s is %s\n", typename(p), typename(y), typename(p + y));
    printf("%s + %s is %s\n", typename(p), typename(u), typename(p + u));
    printf("%s + %s is %s\n", typename(p), typename(i), typename(p + i));
    printf("%s + %s is %s\n", typename(p), typename(o), typename(p + o));
    printf("%s + %s is %s\n", typename(p), typename(q), typename(p + q));
    printf("%s + %s is %s\n", typename(q), typename(a), typename(q + a));
    printf("%s + %s is %s\n", typename(q), typename(z), typename(q + z));
    printf("%s + %s is %s\n", typename(q), typename(e), typename(q + e));
    printf("%s + %s is %s\n", typename(q), typename(r), typename(q + r));
    printf("%s + %s is %s\n", typename(q), typename(t), typename(q + t));
    printf("%s + %s is %s\n", typename(q), typename(y), typename(q + y));
    printf("%s + %s is %s\n", typename(q), typename(u), typename(q + u));
    printf("%s + %s is %s\n", typename(q), typename(i), typename(q + i));
    printf("%s + %s is %s\n", typename(q), typename(o), typename(q + o));
    printf("%s + %s is %s\n", typename(q), typename(p), typename(q + p));

}

/*
RESULTATS (effectué avec addition uniquement)

signed char + unsigned char is int
signed char + short int is int
signed char + int is int
signed char + long int is long int
signed char + unsigned short int is int
signed char + unsigned int is unsigned int
signed char + unsigned long int is unsigned long int
signed char + float is float
signed char + double is double
signed char + long double is long double
unsigned char + signed char is int
unsigned char + short int is int
unsigned char + int is int
unsigned char + long int is long int
unsigned char + unsigned short int is int
unsigned char + unsigned int is unsigned int
unsigned char + unsigned long int is unsigned long int
unsigned char + float is float
unsigned char + double is double
unsigned char + long double is long double
short int + signed char is int
short int + unsigned char is int
short int + int is int
short int + long int is long int
short int + unsigned short int is int
short int + unsigned int is unsigned int
short int + unsigned long int is unsigned long int
short int + float is float
short int + double is double
short int + long double is long double
int + signed char is int
int + unsigned char is int
int + short int is int
int + long int is long int
int + unsigned short int is int
int + unsigned int is unsigned int
int + unsigned long int is unsigned long int
int + float is float
int + double is double
int + long double is long double
long int + signed char is long int
long int + unsigned char is long int
long int + short int is long int
long int + int is long int
long int + unsigned short int is long int
long int + unsigned int is long int
long int + unsigned long int is unsigned long int
long int + float is float
long int + double is double
long int + long double is long double
unsigned short int + signed char is int
unsigned short int + unsigned char is int
unsigned short int + short int is int
unsigned short int + int is int
unsigned short int + long int is long int
unsigned short int + unsigned int is unsigned int
unsigned short int + unsigned long int is unsigned long int
unsigned short int + float is float
unsigned short int + double is double
unsigned short int + long double is long double
unsigned int + signed char is unsigned int
unsigned int + unsigned char is unsigned int
unsigned int + short int is unsigned int
unsigned int + int is unsigned int
unsigned int + long int is long int
unsigned int + unsigned short int is unsigned int
unsigned int + unsigned long int is unsigned long int
unsigned int + float is float
unsigned int + double is double
unsigned int + long double is long double
unsigned long int + signed char is unsigned long int
unsigned long int + unsigned char is unsigned long int
unsigned long int + short int is unsigned long int
unsigned long int + int is unsigned long int
unsigned long int + long int is unsigned long int
unsigned long int + unsigned short int is unsigned long int
unsigned long int + unsigned int is unsigned long int
unsigned long int + float is float
unsigned long int + double is double
unsigned long int + long double is long double
float + signed char is float
float + unsigned char is float
float + short int is float
float + int is float
float + long int is float
float + unsigned short int is float
float + unsigned int is float
float + unsigned long int is float
float + double is double
float + long double is long double
double + signed char is double
double + unsigned char is double
double + short int is double
double + int is double
double + long int is double
double + unsigned short int is double
double + unsigned int is double
double + unsigned long int is double
double + float is double
double + long double is long double
long double + signed char is long double
long double + unsigned char is long double
long double + short int is long double
long double + int is long double
long double + long int is long double
long double + unsigned short int is long double
long double + unsigned int is long double
long double + unsigned long int is long double
long double + float is long double
long double + double is long double
*/
