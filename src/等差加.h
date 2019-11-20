#include <stdio.h>
main(){
	int n,s=0,N,S=0;
	printf("ÇëÊäÈëÊı×Ö£º");
	scanf("%d",&N);
	for(n=1;n<=N;n++){
		S+=n;
		s+=S;
	}printf("s=%d",s);
} 
