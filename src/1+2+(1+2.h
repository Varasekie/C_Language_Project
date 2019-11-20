#include <stdio.h>
main(){
	int n,m=0,i,sum=0;
	printf("qingshuru:");
	scanf("%d",&n);
    for(i=1;i<=n;i++){
		m+=i;
		sum+=m;
	} 
	printf("daanwei:%d",sum);
}
