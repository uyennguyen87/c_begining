/*
 * =====================================================================================
 *
 *       Filename:  ex11.c
 *
 *    Description:  While-Loop And Boolean
 *
 *        Version:  1.0
 *        Created:  10/22/2016 12:00:31 PM
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
    // to throuh each string in argv

    int i = 0;
    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    // let's make our array of strings
    char *states[] = {
        "california", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;
    i = 0;
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}
