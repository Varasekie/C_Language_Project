#include <stdio.h>
long sum(int i)
{int sum=0,n;
 for(n=1;n<=i;n++)
 sum+=n;
 return sum;
 } 
main(){
	int i;
	printf("���������һλ");
	scanf("%d",&i);
	printf("%d",sum(i));
}
