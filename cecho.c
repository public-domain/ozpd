/*********************************************************************/
/*                                                                   */
/*  This Program Written by Paul Edwards, 3:711/934@fidonet.         */
/*  Released to the Public Domain                                    */
/*                                                                   */
/*********************************************************************/
/*********************************************************************/
/*                                                                   */
/*  cecho - echo arguments                                           */
/*                                                                   */
/*********************************************************************/

#include <stdio.h>

int main(int argc, char **argv)
{
    int x;
    
    x = 1;
    while (x < argc)
    {
        printf("%s ", *(argv + x));
        x++;
    }
    printf("\n");
}
