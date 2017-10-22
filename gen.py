#!
#shebang différent selon la machine, a executer en python 3.6

if __name__ == "__main__":
    first_part="""
#define typename(x) _Generic((x), _Bool: "_Bool", unsigned char: "unsigned char", char: "char", signed char: "signed char", short int: "short int", unsigned short int: "unsigned short int", int: "int", unsigned int: "unsigned int", long int: "long int", unsigned long int: "unsigned long int", long long int: "long long int", unsigned long long int: "unsigned long long int", float: "float", double: "double", long double: "long double", char *: "pointer to char", void *: "pointer to void", int *: "pointer to int", default: "other")
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
"""

    last_part="""
    return 0;
}
"""

    l=list("azertyuiopq")
    operator=['+', '-', '*', '/']
    
    print(first_part)
    
    for o in operator:
      for i in l:
        for j in l:
          print("\tprintf(\"%s {0} %s is %s\\n\", typename({1}), typename({2}), typename({1} {0} {2}));".format(o, i, j))
    print(last_part)
