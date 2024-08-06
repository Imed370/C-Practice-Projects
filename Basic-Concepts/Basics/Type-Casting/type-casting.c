#include <stdio.h>

//Type casting is the process of converting a datatype to another
//Explicit Type Casting and Implicit Type Casting

int main(){

    //Implicit Type casting happens automatic by the compiler
    //For example when assigning an integer value to a floating point variable
    int sum = 17, count = 5;
    double mean;
    mean =  sum / count; //result is 3.0 because both operands are integers, then the result is converted to double
    printf("Value of mean: %f\n", mean);


    //Explicit Type Conversion can be used to manually convert data types
    //In the earlier example, if we cast one of the operands to double, then the division will be more accurate
    sum = 17;
    count = 5;
    mean =  (double) sum / count; //result is 3.4 
    printf("Value of mean: %f\n", mean);

}