#include <stdio.h>
main()
{int n;
float amount,price=2.5;
printf("请输入商品数量：");
scanf("%d",&n);
if(n>=50)
amount=price*n*0.9;
else
amount=price*n;
printf("amount=%.2f",amount);
 } 
