#include <stdio.h>

int main(){

    /*
        Arithmetic Operators (binary operators)
        Are used to perform arithmetic operations on operands
        + 	Adds two operands. 
        − 	Subtracts second operand from the first.
        * 	Multiplies both operands. 
        / 	Divides numerator by de-numerator. 
        % 	Modulus Operator and remainder of after an integer division. 
        ++ 	Increment operator increases the integer value by one. (Unary Operator)
        -- 	Decrement operator decreases the integer value by one. (Unary Operator)
    */

    int a = 1 + 1; // 1 + 1 = 2
    int b = 2 - 1; // 2 - 1 = 1
    int c = 1 * 2; // 1 * 2 = 2
    int d = 4 / 2; // 4 / 2 = 2
    int e = 5 % 3; // 5 / 3 = 1 remainer 2
    int f = 5;     // 5 
    f++;       // 6
    int g = 6;     // 6
    g--;       // 5

    printf("\n");
    printf("Arithmetic Operators:\n");
    printf("1 + 1 = %d\n", a);
    printf("2 - 1 = %d\n", b);
    printf("1 * 2 = %d\n", c);
    printf("4 / 2 = %d\n", d);
    printf("5 mod 3 = %d\n", e);
    printf("f = 5; f++ = %d\n", f);
    printf("g = 6; g-- = %d\n", g);

    /*
        Relational Operators (binary operators)
        Are used to compare two operands
        ==  Checks for equality.
        != 	Checks for equality but returns true if not equal.
        >   Checks wether first operand is bigger than the second operand.
        <   Checks wether first operand is smaller than the second operand,
        >=  Checks wether first operand is bigger or equal to the second operand.
        <=  Checks wether first operand is smaller or equal to the second operand.
    */

    printf("\n");
    printf("Relational Operators\n");
    if(a == b){
        printf("a is equal to b.\n");
    }else if(a != b){
        printf("a is not equal to b.\n"); 
    }

    if(c > d){
        printf("c is bigger than d.\n");
    }else if(c < d){
        printf("c is smaller than d.\n");
    }else{
        printf("c and d are equal.\n");
    }

    
    if(e >= f){
        printf("e is bigger or equal to f.\n");
    }else if(e <= f){
        printf("e is smaller or equal to f.\n");
    }

    /*
        Logical Operators (Binary Operators)
        Are used to combine two boolean expressions
        Example : a >= 50 && b >= 50
        &&   Logical AND (TRUE if both are TRUE)
        ||   Logical OR  (TRUE if either one is true )
        !    Logical NOT (Negates the Condition)
    */
    
    printf("\n");
    printf("Logical Operators\n");
    if(a < f && a < g){
        printf(" a is smaller than f and g\n");
    }

    if(a < f || a < g){
        printf("a is smaller than f or g\n");
    }

    if(!(a > g)){
        printf("a is not bigger than g\n");
    }

    /*
        Bitwise Operators
        User to perform bitwise operations on the operands
        &   Bitwise AND (copies bit to result if it exists in both operands (as 1))
        |   Bitwise OR  (copies bit to result if it exists in one of the operands (as 1))
        ^   Bitwise XOR (copies bit to result if it exists in one but not both operands (as 1))
        ~   Bitwise Complement Operator (Flips all the bits)
        <<  Shift Bits to the left by one spot
        >>  Shift Bits to the right by one spot
    */
    
    a = 3;
    b = 2;
    a = a & b; //0011 & 0010 = 0010 = 2
    a = 1;
    b = 2;
    a = a | b; //0001 | 0010 = 0011 = 3
    a = 3;
    b = 1;
    a = a ^ b; //0011 ^ 0001 = 0010 = 2;
    a = ~1;
    a = 2 << 1; // Take 2 and shift to left by one position. Result = 4;
    b = 4 >> 1; // Take 4 and shift to left by one position. Result = 2;

    printf("\n");
    printf("Bitwise Operators\n");
    printf("0011 & 0010 = 0010 = 2\n");
    printf("0001 & 0010 = 0011 = 3\n");
    printf("0011 ^ 0001 = 0010 = 2\n");
    printf("1 = 0001; ~1 = 1110\n");
    printf("(2 << 1) = 0100 = 4\n");
    printf("(4 >> 1) = 0010 = 2\n");

    /*
        Assignment Operators
        Used to assign values to variables.
        =   Assigns value from right operand to left operand
        +=  Adds right operand to left and assigns result to the left operand.
        -=  Subtracts right operand from left and assigns result to left operand.
        *=  Multiplies both operands and assigns value to the left operand.
        /=  Divides left operand by right and assigns result to left.
        %=  Modulo the left operand with the right and store result in left operand.
        <<= Left shift and assignment.
        >>= Right shift and assignment.
        &=  Bitwise AND assignment ((a &= b) == (a = a & b))
        |=  Bitwise OR assignment ((a |= b) == (a = a | b))
        ^=  Bitwise XOR assignment ((a ^= b) == (a = a ^ b))
    */

    printf("\n");
    printf("Assignment Operators\n");
    a = 5;
    a += 1; // 6
    printf("5 += 1 = %d\n", a); 
    a -= 1; //5
    printf("6 -= 1 = %d\n", a);
    a *= 2; // 10
    printf("5 *= 2 = %d\n", a);
    a /= 2; // 5
    printf("10 /= 2 = %d\n", a);
    a %= 3; // 2
    printf("5 mod= 3 = %d\n", a);
    a <<= 1; // 4
    printf("2 <<= 1 = %d\n", a);
    a >>= 1; // 2
    printf("4 >>= 1 = %d\n", a);
    a &= 3; // 2
    printf("2 &= 3 = %d\n", a);
    a |= 3; // 3
    printf("2 |= 3 = %d\n", a);
    a ^= 3; // 0
    printf("3 ^= 3 = %d\n", a);


    /*
        Other operators
        Few other important operators
        sizeof()  returns the size of a variable
        &         address operator - returns address of a variable
        *         pointer to a variable / dereference operator
        ?:        conditional expression - If Condition is true ? then value X : otherwise value Y
    */

    printf("\n");
    printf("Other operators\n");
    printf("size of an integer: %lu\n", sizeof(a));
    printf("Address of Integer a: %p\n", &a);
    int *p = &a;
    printf("Pointer to a (same as address): %p\n", p);
    (a > b)? printf("a is bigger.") : printf("a is smaller.");
    printf("\n");

    
}