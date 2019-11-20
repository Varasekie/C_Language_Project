#include <stdio.h>
main(){
	int i,sum=0,a; 
	do{	
	    printf("请输入数字："); 
	    scanf("%d",&a);
		sum+=a;
		printf("%d",sum);
	}while(a!=0);
	printf("结束运行");
}
