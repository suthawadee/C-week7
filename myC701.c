#include<stdio.h>
void main(){
    short a;
    long b;
    long long c;
    long double d;
    float e;
    printf("size of shot = %d byte\n",sizeof(a));
    printf("size of long = %d byte\n",sizeof(b));
    printf("size of long long = %d byte\n",sizeof(c));
    printf("size of long double = %d byte\n",sizeof(d));
    printf("size of floating point = %f byte\n",sizeof(e));
}