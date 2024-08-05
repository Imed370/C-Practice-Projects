#include <stdio.h>
#include <stdlib.h>

//Command Line Arguments are used to pass arguments to the program from the command line.
//main function gets two parameters passed, argc (argument count), argv (array of arguments)
int main(int argc, char **argv){

    //check that the program has received the correct amount of arguments
    if(argc != 4){
        printf("Usage: %s <Name> <Number1> <Number2>\n",argv[0]);
        exit(EXIT_FAILURE);
    }

    //convert arguments to integers
    int n1 = atoi(argv[2]);
    int n2 = atoi(argv[3]);

    printf("Hello %s, you entered the numbers: %d, %d\n",argv[1],n1,n2);
    exit(EXIT_SUCCESS);
}