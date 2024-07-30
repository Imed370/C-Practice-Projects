#include <stdio.h>
#include <string.h>

int main(){

    //Initialization of Strings
    char str[] = "Hello World!";
    // Output will be "Hello World!"
    printf("str: %s\n", str); 

    char str1[] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};
    // Output will be "Hello World!"
    printf("str1: %s\n", str1);

    //Pointer to String Literal (Read Only)
    char *str2 = "Hello World!";
    // Output will be "Hello World!"
    printf("str2: %s\n", str2); 

    //Initialization of array with fixed size
    char str3[13] = "Hello World!";
    // Output will be "Hello World!"
    printf("str3: %s\n", str3);

    //Not enough space in the Array
    char str4[6] = "Hello, World"; // Only "Hello" + '\0' will be stored in str2
    printf("str4: %s\n", str4); // Output will be "Hello"

    //Copying String with strcpy 
    char str5[13];
    strcpy(str5, "Hello World!"); //12 characters + null terminator = 13 spaces required
    printf("str5: %s\n", str5); // Output will be "Hello World!"

    //Problem with strcpy
    //char str6[6];
    //strcpy(str6, "Hello World"); // Not enough space in the array leads to buffer overflow
    //printf("str6: %s\n", str6); // Undefined Behaviour

    //Copying with strncpy
    //No Overlfow if the array is too short 
    char str7[13];
    strncpy(str7, "Hello, World!", sizeof(str7) - 1);//sizeof() returns size in bytes
    str5[sizeof(str7) - 1] = '\0'; // Ensure null-termination
    printf("%s\n", str7);//Output will be Hello World!

    
    



    


}

//demonstrate problem with stings(overflow,) how to take user input string properly