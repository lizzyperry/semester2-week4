
/*
Name: Elizabeth Perry
Student ID: 201952237
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100] = "";
    int i;

    // process the command-line data using appropriate string functions
    /*
    The code below will go through the string and will concatenate it to the end, and if i isnt the end of the array then another - will be added
    */
    for (i=1; i<argc;i++ ){
        strcat(buffer, argv[i]);
        if (i < argc-1){
            strcat(buffer, "-")
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}