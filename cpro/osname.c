/* Last modified Time-stamp: <Ye Wenbin 2007-12-30 16:29:58>
 * @(#)osname.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAC
void printfosname(void){
#ifdef MAC
  printf("this is mac os\n");
#else
  printf("this is linux\n");
#endif
}


main(){
  int i;
 AA:
  scanf("%d", &i);
  if (i == 0) {
    printf("i is 0\n");
  }else
    goto AA;
  printfosname();
}
