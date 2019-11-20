#include <stdio.h>
main()
{int i;
do
{printf("请输入一个数：");
scanf("%d",&i);
if(i%2==0)
printf("%d为偶数",i);
 else
 printf("%d为奇数",i);
}while(1);
}
