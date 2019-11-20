#include <stdio.h>
main()
{
int i;
long f=1;
for(i=1;i<=10;i++){
f*=i;
printf("%d!=%ld\n",i,f);
}
}
