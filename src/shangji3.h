#include <stdio.h>
main()
{char ch;
do
{ch=getchar();
if (ch=='Q'||ch=='q')
break;
else if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
putchar(ch);
}while(1);
}
