/* Last modified Time-stamp: <Ye Wenbin 2007-12-30 16:29:58>
 * @(#)environ.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]){
  char *home = getenv("HOME");
  printf("%s\n", home);
}
