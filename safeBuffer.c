
// The includes to load proper headers.
#include <signal.h>  
#include <stdio.h>  
#include <string.h>  


//Main program loop
int main(){      
    //Deff of required vars
    char ExpectedInput[21];      
    char ProvidedInput[21];
    //Setting var data and constraints to       
    strncpy(ExpectedInput, "123456789012345", 21);      
    fgets(ProvidedInput, 21, stdin);      
    if (0 == strncmp(ProvidedInput, ExpectedInput, 21)) {          
        printf("Input was as expected\n");     
        }else{         
        printf("Input Failure\n");     }     
    printf("This is what you provided: %s\n", ProvidedInput);      
    printf("This is what was expected: %s\n", ExpectedInput);      
    return 0;  
} 