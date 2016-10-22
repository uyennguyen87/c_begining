/*
 * =====================================================================================
 *
 *       Filename:  ex10.c
 *
 *    Description:  Arrays Of Strings, Looping,
 *
 *        Version:  1.0
 *        Created:  10/22/2016 11:31:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  cue, 
 *   Organization:  MIT
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skip argv[0]?
    for(i = 1; i < argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washingon", "Texas"
    };

    int num_states = 4;

    for(i = 0; i < num_states; i++){
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}


