#include <stdio.h>
long factor(int n)
{static long int f=1;
 f=f*n;
 return f;
 } 
 main()
 {int i;
 for (i=1;i<=5;i++)
     printf("%ld\n",factor(i));
 }
