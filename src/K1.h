#include <stdio.h>
#define N 4
main()
{int i=1,m=1,j=1;
 for(i=1;i<=N;i++)
 {for(j=1;j<=N-i;j++)
  printf(" ");
 for(j=1;j<=2*i-1;j++)
  printf("K");
 for(j=1;j<=N-i;j++)
  printf(" ");
  putchar('\n');
 }
 }
