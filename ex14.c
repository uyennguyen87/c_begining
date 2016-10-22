/*
 * =====================================================================================
 *
 *       Filename:  ex14.c
 *
 *    Description:  Writing And Using Functions
 *
 *        Version:  1.0
 *        Created:  10/22/2016 12:24:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  cue, 
 *   Organization:  MIT
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations

void print_letters(char arg[]);

void print_arguments(int argc, char* argv[])
{
    int i = 0;
    for(i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;
    int len = strlen(arg);

    for(i = 0; i < len; i++) {
        char ch = arg[i];

        int is_letter_or_blank = isalpha(ch) || isblank(ch);
        if(is_letter_or_blank) {
            printf("'%c' == %d ", ch , ch);
        }
    }

    printf("\n");
}


int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
