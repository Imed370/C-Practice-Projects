#include <stdio.h>
#include <stdlib.h>

//A pointer is a variable that stores a memory address

int main(){

    int n1 = 5;
    //declare a pointer and initialize with address of integer n
    int *p = &n1;
    //printing address stored in p (address of n)
    printf("\nAddress stored in pointer p: %p\n\n",p);
    
    //dereferencing the pointer to retrieve the value stored at the address
    int n2 = *p;
    //printing value of integer n1 & n2
    printf("Value of integer n1: %d\n",n1);
    printf("Value of integer n2: %d\n\n",n2);

    //declaring and initializing an integer array
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    //array name is a pointer to the first element in the array
    int first_element = *arr;
    printf("Value at the first spot in the array: %d\n",first_element);

    //accessing value at other positions in the array
    int third_element = *(arr +2);
    printf("Value at the third spot in the array: %d\n",third_element);

    //creating another pointer to an element of the array
    int *pointer_to_element = arr + 1; //second element
 
    //pointers can be incremented to move to the next position
    //compiler knows type of the pointer and increments it by right amount
    //incrementing the pointer too far can cause errors or undefined behaviour
    printf("Pointer before incrementing (second position in the array): %d\n", *pointer_to_element);
    pointer_to_element++;
    printf("Pointer after incrementing (third position in the array): %d\n", *pointer_to_element);
    
    //Null Pointers do not point to any valid memory address
    //This can happen for example when a function is supposed to return a value, but 
    //encounters a fault, and returns NULL instead
    int *np = NULL;
    //dereferencing a Null Pointer can cause undefined behaviour or crashes
    //int i = *np;

    //check if pointer is null before dereferencing
    if(np != NULL){
        int i = *np;//Will not be executed
    }

    //Dangling Pointer is a pointer to an address that is not valid anymore
    int *dp = (int*)malloc(sizeof(int));
    *dp = 5;
    free(dp);
    //dp is now a dangling pointer and dereferencing it can cause errors or undefined behaviour
    //printf("%d\n",*dp);
    //set the pointer to null directly after free to avoid dangling pointer
    //this also prevents double free error
    dp = NULL;

    


    





}