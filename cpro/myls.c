/* Last modified Time-stamp: <Ye Wenbin 2007-12-30 16:29:58>
 * @(#)myls.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <dirent.h>
#include "myhead/cuserr.h"

#define MSGCNT 100
int
main(int argc, char *argv[]){
  DIR *dp = NULL;
  char msg[MSGCNT] = {0};
  struct dirent *dir = NULL;
  if (argc != 2){
    printf("usage: ls dirname\n");
    exit(-1);
  }
  if ((dp = opendir(argv[1])) == NULL){
    sprintf(msg, "can't open %s", argv[1]);
    err_quit(msg);
  }
  while ((dir = readdir(dp)) != NULL){
    printf("%s\n", dir->d_name);
  }
  closedir(dp);
  exit(0);
}
