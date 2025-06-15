// Let us write a simple function that calculates the square of an integer.

// Program to calculate the square of a given integer
/* #include<stdio.h>
main()
{
// square() function
    int square (int no); // passing of argument
    int result;    // local variable to function square
    result = square ;
    return (result); // returns an integer value
}

// It will be called from main() as follows
main()
{
    int n, sq; // local variable to function main
    printf("Enter a number to calculate square value");
    scanf("%d", &n);
    sq = square(n); // function call with parameter passing
    printf("\n Square of the number is: %d", sq);
} // Program endsee
*/

#include<stdio.h>

// Function to calculate the square of an integer
int square(int no) {
    return no * no; // Return the square of the number
}

int main() {
    int n, sq; // Local variable to function main

    // Get user input
    printf("Enter a number to calculate square value: ");
    scanf("%d", &n);

    // Function call to calculate square
    sq = square(n);

    // Output the result
    printf("\nSquare of the number is: %d\n", sq);

    return 0; // Indicate successful program termination
}
