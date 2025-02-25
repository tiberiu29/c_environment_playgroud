#include <stdio.h>
#include<string.h>

//The accepted convention of passing C-strings to functions is to use a pointer
 int length_string(char* string) {
// strlen reads UNTIL NULL-BYTE
   return strlen(string); 
 }

//The accepted convention of passing C-strings to functions is to use a pointer
void print_by_character(char* string, int length) {
    for(int i = 0; i< length; i++) {
        printf("%c\n", string[i]);
    }
}

int main() {

    // string literal, stored as READ-ONLY data
    char string_1[] = "some string";

    // char array initialized from string literal, copied to and stored on the stack (MODIFIABLE data)
    char *string_2 = "some string";

    // empty char array with max size of 128. (MODIFIABLE data)
    char string_3[128];

    //print_by_character(string_1, length_string(string_1));
    //print_by_character(string_2, length_string(string_2));


    
    
    // READ characters

    printf("\nREADING\n");
    printf("%c\n", string_1[0]);
    // string_1[0] gets extended by compiler to this:
    printf("%c\n", *(string_1 + 0));

    printf("%c\n", string_1[1]);
    // string_1[1] gets extended by compiler to this:
    printf("%c\n", *(string_1 + 1));


    // MODIFY
    printf("\nMODIFYING\n");
    string_1[0] = 't';
    *(string_1 + 0)= 't';

    string_1[1] = 't';
    *(string_1 + 1)= 'u';

    printf("Modified s -> %c\n", string_1[0]);
    printf("Modified s -> %c\n", string_1[1]);
    return -1;
}


