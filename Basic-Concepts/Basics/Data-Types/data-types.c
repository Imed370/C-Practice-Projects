#include <stdio.h>

/*
char / signed char 
Integer Type that can contain basic character sets
Format Specifier: %c
Minimum Size: 8 bits
Minimum Range: -128 to 127
*/
char c = 'a';
signed char sc = 'b';

/*
unsigned char 
same as char but unsigned
Format Specifier: %c
Minimum Size: 8 bits
Minimum Range: 0 to 255
*/
unsigned char uc = 'c';

/*
short / signed short
Short Integer Type
Format Specifier: %hi 
Minimum Size: 16 bits
Minimum Range: −32767 to +32767
*/
short s = 1;
signed short ss = -1;

/*
unsigned short
Short Integer Type (unsigned)
Format Specifier: %hu
Minimum Size: 16 bits
Minimum Range: 0 to +65535
*/
unsigned short us = 1;

/*
int / signed int
Basic signed Integer Type
Format Specifier: %i or %d
Minimum Size: 16 bits
Minimum Range: −32767 to +32767
*/
int n = 2;
signed int sn = -3;

/*
unsigned int
Basic unsigned Integer Type
Format Specifier: %u
Minimum Size: 16 bits
Minimum Range: 0 to +65535
*/
unsigned int un = 5;

/*
long / signed long
Long signed Integer Type
Format Specifier: %li or %ld
Minimum Size: 32 bits
Minimum Range: −2147483647 to +2147483647
*/
long l = -2147483647;
signed long sl = 2147483647;

/*
unsigned long
Long unsigned Integer Type
Format Specifier: %lu
Minimum Size: 32 bits
Minimum Range: 0 to 4294967295
*/
unsigned long ul = 4294967295;

/*
long long / signed long long
Long long signed Integer Type
Format Specifier: %lli or %lld
Minimum Size: 64 bits
Minimum Range: −9223372036854775807 to +9223372036854775807
*/
long long ll = -9223372036854775807;
signed long long sll = 9223372036854775807;

/*
unsigned long long
Long long unsigned Integer Type
Format Specifier: %llu
Minimum Size: 64 bits
Minimum Range: 0 to +18446744073709551615
*/
unsigned long long ull = 18446744073709551615;

/*
float
Floating Point Type (IEEE 754)
Format Specifier: %f, %g, %e, %a
Minimum Size: 32 bits
*/
float f = 5.4;

/*
double
Double Precision Floating Point Type (IEEE 754)
Format Specifier: %lf, %lg, %le, %la
Minimum Size: 64 bits
*/
double d = 6.9;


int main(){

    printf("Type: char, Size: %lu\n",sizeof(c));
    printf("Type: signed char, Size: %lu\n",sizeof(sc));
    printf("Type: unsigned char, Size: %lu\n",sizeof(uc));
    printf("Type: short, Size: %lu\n",sizeof(s));
    printf("Type: signed short, Size: %lu\n",sizeof(ss));
    printf("Type: unsigned short, Size: %lu\n",sizeof(us));
    printf("Type: int , Size: %lu\n",sizeof(n));
    printf("Type: signed int, Size: %lu\n",sizeof(sn));
    printf("Type: unsigned int, Size: %lu\n",sizeof(un));
    printf("Type: long, Size: %lu\n",sizeof(l));
    printf("Type: signed long, Size: %lu\n",sizeof(sl));
    printf("Type: unsigned long, Size: %lu\n",sizeof(ul));
    printf("Type: long long, Size: %lu\n",sizeof(ll));
    printf("Type: signed long long, Size: %lu\n",sizeof(sll));
    printf("Type: unsigned long long, Size: %lu\n",sizeof(ull));
    printf("Type: float, Size: %lu\n",sizeof(f));
    printf("Type: double, Size: %lu\n",sizeof(d));

}


