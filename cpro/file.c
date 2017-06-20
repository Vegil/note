/* Last modified Time-stamp: <Ye Wenbin 2007-12-30 16:29:58>
 * @(#)file.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char *argv[]){
    if( -1 != lseek(STDIN_FILENO, 0, SEEK_CUR)){
        printf("seek success!\n");

    }else {
        printf("seek fail\n");
    }

    perror("there is a error\n");
}
