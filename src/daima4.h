#include <stdio.h>
main()
{int n;
float amount,price=2.5;
printf("��������Ʒ������");
scanf("%d",&n);
if(n>=50)
amount=price*n*0.9;
else
amount=price*n;
printf("amount=%.2f",amount);
 } 
