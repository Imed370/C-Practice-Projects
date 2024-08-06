#include <stdio.h>

int main(){

    int i = 1;
    //shifting bits by one spot to the left (1 becomes 2)
    i = i << 1;
    //shifting bits by one spot to the right (2 becomes 1)
    i = i >> 1;


    //bitwise AND operation (1010 & 0111 -> 0010)
    i = 0b1010 & 0b0111; // result is 2
    //same as
    i = 10 & 7; // result is 2


    //bitwise OR operation (1010 | 0111 -> 1111)
    i = 0b1010 | 0b0111; // result is 15
    //same as
    i = 10 | 7; // result is 15


    //bitwise XOR operation (1010 ^ 0111 -> 1101)
    i = 0b1010 ^ 0b0111; // result is 13
    //same as
    i = 10 ^ 7; // result is 13


    //negation of bits
    i = ~10; // result is -11 (in two's complement since its a signed int)


    //setting a specific bit to 1 with bitmask
    //7 in binary is 0111 we want to set the fourth bit from the right to be 1 so the number will be 15 (1111)
    //create bitmask, shift to right position, apply bitwise OR operation 
    //if the bit was 0 it will become 1, if the bit was 1 it will stay unaffected
    ///0111 -> 1111
    int number = 7; // 0111 in binary
    int bitmask = 1; // 0001 in binary
    bitmask = bitmask << 3; // bitmask is now 1000 in binary
    number = number | bitmask; // number is now 1111 in binary, or 15 in decimal


    //clearing specific bit to 0 with bitmask
    //15 in binary is 1111 we want to set the fourth bit from the right to be 0 so the number will be 7 (0111)
    //create bitmask, shift to right position, apply bitwise AND operation 
    //if the bit was 1 it will become 0, if the bit was 0 it will stay unaffected
    //1111 -> 0111
    number = 15; // 1111 in binary
    bitmask = ~1; // bitmask is ...11111110 in binary
    bitmask = bitmask << 3; // bitmask is ...11110111 in binary
    number = number & bitmask; // number is now 0111 in binary, or 7 in decimal



    //Toggle a bit
    //create bitmask, shift to right position, apply bitwise XOR operation 
    //if the bit was 1 it will become 0, if it was 0 it will become 1
    number = 10; // 1010 in binary
    bitmask = 1;
    bitmask = bitmask << 2; // bitmask is 0100 in binary
    number = number ^ bitmask; // number is now 1110 in binary, or 14 in decimal



    //check if a specific bit is 1 or 0
    //set bitmask to one, shift input number to the right until required bit is in rightmost position, 
    //use bitwise AND operation and store result
    //if result is one the bit was 1, if it is 0 the bit was 0
    number = 589;
    bitmask = 1;
    number = number >> 2; // number is now 147 (10010011 in binary)
    int result = number & bitmask; // result is 1 (least significant bit of 147 is 1)


    // Print results to verify correctness
    printf("Result of AND operation: %d\n", 0b1010 & 0b0111); // 2
    printf("Result of OR operation: %d\n", 0b1010 | 0b0111); // 15
    printf("Result of XOR operation: %d\n", 0b1010 ^ 0b0111); // 13
    printf("Negation of 10: %d\n", ~10); // -11
    printf("Number after setting bit: %d\n", number); // 15
    printf("Number after clearing bit: %d\n", number); // 7
    printf("Number after toggling bit: %d\n", 14); // 14
    printf("Result of bit check: %d\n", result); // 1

} 