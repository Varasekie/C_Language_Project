#include <stdio.h>
main()
{
float i=0,temp=1,m=0;
while(temp>=1e-6)
{i+=temp;
 m+=1;
 temp=temp/m;
}
printf("e=%f",i);
}
