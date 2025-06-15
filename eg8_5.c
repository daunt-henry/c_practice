// Program to illustrate the use of global variables
/*
#include<stdio.h>
int gv;     // global variable
int main()
{
    void function(); // function declaration
    gv = 10;
    printf("%d is the value of gv before function call\n", gv);
    function();
    printf("%d id the value of gv after function call \n", gv);
} */

#include<stdio.h>

int gv;  // Global variable

// Function definition
void function() {
    gv = 20; // Modify the global variable gv
}

int main() {
    gv = 10;
    printf("%d is the value of gv before function call\n", gv);

    // Function call
    function();

    // Fixed typo: "id" to "is"
    printf("%d is the value of gv after function call\n", gv);

    return 0; // Added return 0 for successful program termination
}
