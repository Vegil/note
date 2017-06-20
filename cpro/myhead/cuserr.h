/* cuserr.h --- xiabo
 */

#ifndef INCLUDED_CUSERR_H
#define INCLUDED_CUSERR_H 1

#include <stdio.h>
#include <errno.h>

void err_quit(const char *err_msg){
  perror(err_msg);
  exit(-1);
}

#endif /* INCLUDED_CUSERR_H */

