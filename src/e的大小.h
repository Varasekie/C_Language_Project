#include <stdio.h>
main(){
	int i=1,s=1;
	float m=1,n=1;
	while(m>1e-6){
		s*=i;
		m=1/(float)s;
		n+=m;
		i++;
	}
	printf("e=%f",n);
}
