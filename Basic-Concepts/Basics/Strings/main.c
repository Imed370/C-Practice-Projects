#include <stdio.h>
#include <string.h>

//How to initialize and use Strings in C, also some functions from string.h
int main()
{
    //Strings in c are character arrays

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


    //Taking User Input String Safely with fgets
    char input[100];
    printf("Please Enter Your Name:");
    //Read Input String
    if(fgets(input, sizeof(input), stdin) != NULL)
    {
        //Remove newline character if present
        size_t len = strlen(input);
        if(len > 0 && input[len -1] == '\n'){
            input[len -1] = '\0';//Replace with null terminator
        }
        printf("You entered:%s\n", input);  
    }
    else
    {
        printf("Error Reading Input.");
    }

    //Some Functions of String.h

    //strlen() returns the size of the string without null terminator
    //if the buffer is 50 and the string has a null terminator at position 13 then it will return 12
    size_t length_of_string = strlen(str);
    
    //strcpy() copies the string to a destination  
    char str5[13];
    strcpy(str5, "Hello World!"); //12 characters + null terminator = 13 spaces required
    printf("str5: %s\n", str5); // Output will be "Hello World!"

    //Problem with strcpy
    //char str6[6];
    //strcpy(str6, "Hello World"); // Not enough space in the array leads to buffer overflow
    //printf("str6: %s\n", str6); // Undefined Behaviour

    //strncpy() copying more safely 
    //No Overlfow if the array is too short 
    char str7[14];
    strncpy(str7, "Hello, World!", sizeof(str7) -1 );//sizeof() returns size in bytes
    str5[sizeof(str7) - 1] = '\0'; // Ensure null-termination
    printf("%s\n", str7);//Output will be Hello World!

    //strcat() appends the second string to the end of the first string 
    //can cause buffer overflow if destination does not have enough space
    char dest[13] = "Hello";
    char src[] = " World!";
    strcat(dest,src);
    printf("Concatenated string:%s\n", dest);

    //strncat() safer way of concatenating two strings
    char dest1[12] = "Hello";
    char src1[] = " World!";
    strncat(dest1,src1,7); 
    printf("Concatenated string:%s\n", dest1);

    //strcmp(str1,str2) compares two strings 
    //and returns <0, 0, >0 if str1 is less than, equal, or more than str2 respectively 
    printf("%d\n",strcmp("ABC", "ABC"));//prints 0
    printf("%d\n",strcmp("ABD", "ABC"));//prints a number > 0
    printf("%d\n",strcmp("ABB", "ABC"));//prints a number < 0
    //strncmp(str1,str2,n) compares the first n positions of the strings

    //char* strstr(const char *haystack, const char *needle);
    //Find the first occurrence of the substring needle in the string haystack
    //returning a pointer to the found substring
    printf("%s\n",strstr("ABCABBA","ABB"));//prints:"ABBA" 



}

