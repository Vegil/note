/* Last modified Time-stamp: <Ye Wenbin 2007-12-30 16:29:58>
 * @(#)forktest.c
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int glob = 6;
char buf[] = "a write to stdout\n";
int main(int argc, char *argv[]){
  int var ;
  pid_t pid;
  var = 88;
  if (write(STDOUT_FILENO, buf, sizeof(buf) -1 ) != sizeof(buf)-1)
    exit(777);
  printf("before fork\n");
  if( (pid == fork()) == 0){
    glob++;
    var++;
  }else
    sleep(5);
  printf("pid = %d, glob = %d, var = %d\n", pid, glob, var);
  exit(0);
}

                              
