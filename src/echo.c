#include <stdio.h> // Include the header file for input / output functions
#include <string.h> // Include string header so we can do string comparisons

// argc = Argument count. 1 for name of program, 1 extra for each comamnd line argument to accept
// char **argv[] = Argument vector. An array of character pointers listing all arguments

int main(int argc, char **argv) { // This is an int function since returns 0 (i.e. an int)
    
    char *input = ""; // Initialise with a pointer to empty string literal

    if (argc >= 2) { // Check if any arguments have been passed
        input = argv[1]; // Reassign the pointer variable to point to the location of the first argument in memory
        if (strcmp(input, "-n") == 0) { // Check if -n argument passed first. We need to use the strcmp() function since input == "-n" would compare *pointer values* (memory addreses), not the string contents.
            input = argv[2]; // Ressign the pointer variable to the second argument to get the text input since first is -n
            printf("%s", input); // Use the format specifier for a string to let C know we want to print a string. 
        } else { // If passed without -n
            printf("%s\n", input); // Use the format specifier for a string to let C know we want to print a string. 
        }
    } else { //If no arguments passed just return a newline character
        printf("%s\n", input); // Use the format specifier for a string to let C know we want to print a string. 
    }

    return 0; // Return 0 to let us know code executed successfully
    
}