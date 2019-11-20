#include <stdio.h>
int n=1;
float a,f,i=1;
main()
{
	for(n=1;;n++)
{
	a*=n;
	f=1/a;
	{
	if(f<1e-6)
	i+=f;
	else
	printf ("%d",i);
}
}
 } 
