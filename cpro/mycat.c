/* Last modified Time-stamp: <Ye Wenbin 2007-12-30 16:29:58>
 * @(#)mycat.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char *argv[]){
    char tmp[100];
    ssize_t n;
    while( (n = read(STDIN_FILENO, tmp, 100)) > 0)
        if(  write(STDOUT_FILENO, tmp, n) !=n )
            printf("write error\n");
    if( n == -1)
        printf("read error\n");
    exit(0);
}
