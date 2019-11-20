#include <stdio.h>
main()
{int i=1,j=1;
for(i=1;i<=8;i++)
{
for(j=1;j<=8-i;j++)
printf(" ");
for(j=1;j<=2*i-1;j++)
printf("K");
for(j=1;j<=8-i;j++)
printf(" ");
putchar('\n');}
}
