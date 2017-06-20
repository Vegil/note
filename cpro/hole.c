/* Last modified Time-stamp: <Ye Wenbin 2007-12-30 16:29:58>
 * @(#)hole.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
char buf1[] = "abcdefj", buf2[] = "ABCDEFJ";


int
main(void){
  int fd;
  if ((fd = open("file.hole", O_RDWR | O_CREAT | O_TRUNC, 755)) < 0)
    printf("create file failed\n");
  if (write(fd, buf1, strlen(buf1)) != strlen(buf1))
    printf("wirte error\n");
  if (lseek(fd, 100000, SEEK_SET) == -1)
    printf("seek failed\n");
  if (write(fd, buf2, strlen(buf2)) !=  strlen(buf2))
    printf("write buf2 failed\n");


  exit(0);
      

}

