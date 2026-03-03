#include <stdio.h> // Include the header file for input / output functions

// argc = Argument count. 1 for name of program, 1 extra for each comamnd line argument to accept
// char **argv[] = Argument vector. An array of character pointers listing all arguments

int main(int argc, char **argv) { // This is an int function since returns 0 (i.e. an int)
    
    char *input = ""; // Initialise with a pointer to empty string literal

    if (argc >= 2) { // If an argument is passed get the user's input (argv 1, argument count 2) (ignoring any extra parameters)
        input = argv[1]; // Reassign the pointer variable to point to the location of the first argument in memory
    }

    printf("%s\n", input); // Use the format specifier for a string to let C know we want to print a string. 
    return 0; // Return 0 to let us know code executed successfully
    
}