/* Last modified Time-stamp: <Ye Wenbin 2007-12-30 16:29:58>
 * @(#)prterr.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char *argv[]){
    int c = atoi(argv[1]);
    printf("%s\n", strerror(c));
}
