// Program for illustration of the function with no arguments and no reuturn value

// Function with no arguments and no return value
/*
#include<stdio.h>
int main()
{
    void message();
    printf("Control is in main\n");
    message();    // Type 1 Function
    printf("Control is again in main\n");
}

void messasge()
{
    printf("Control is in message function\n");
}                                          // does not return anything
*/

#include<stdio.h>

// Function with no arguments and no return value
void message() {
    printf("Control is in message function\n");
}

int main() {
    printf("Control is in main\n");
    
    // Calling the message function
    message(); // Type 1 function (no arguments, no return value)

    printf("Control is again in main\n");

    return 0; // Added return 0 for successful program termination
}
