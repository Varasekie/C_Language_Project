#include <stdio.h>
long sum(int i)
{int sum=0,n;
 for(n=1;n<=i;n++)
 sum+=n;
 return sum;
 } 
main(){
	int i;
	printf("请输入最后一位");
	scanf("%d",&i);
	printf("%d",sum(i));
}
