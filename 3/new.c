// Compile with: gcc -g -Wall args.c -o args.out
// Try running with:
//          - ./args.out
//          - ./args.out somefile.c
//          - ./args.out argv1 argv2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_SIZE 100
#define ADD_CYCLES 1
#define MOV_CYCLES 1
#define PUSH_CYCLES 1
#define POP_CYCLES 1
#define LEA_CYCLES 3
#define MUL_CYCLES 3
#define DIV_CYCLES 24
#define SUB_CYCLES 1
#define RET_CYCLES 1
// The parameters to the main function are read in
// when you execute your program on the terminal.
// argc: is the argument count
// argv: is a 'variable' number of arguments provided
//
// This program shows how to iterate through all of the arguments
int main(int argc, char** argv){
    char buff[BUFF_SIZE]; 
    int r;
    printf("argc is the argument count: %d\n",argc);

    // This loop will print out all of the arguments
    for(int i=0; i < argc; i++){
        printf("argv[%d] is %s\n",i,argv[i]);
    }
    FILE *input = fopen(argv[1],"r");
    r = fscanf(input, "%s", buff);

    while (r != EOF) {
        r = fscanf(input, "%s", buff);  // grab the next line and store into buff
        printf("%s", buff);
    }
    fclose(input); // don't forget to close a file!
    // Then you can use the argv's as needed.
    // example: If argv[1] is suppose to be a particular (like the filename), 
    //          you can make use of it.
    //         So your next step would be to use FILE* input = fopen(argv[1],"r");
    //        Then read every line in that file, and 'parse' the first few characters

    return 0;
}