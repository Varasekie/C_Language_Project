#include <stdio.h>
main()
{int i,date,mouth,year,TD,err=0;
 printf("请输入日期：")；
 scanf("%d %d %d",year,day,mouth);
 switch(mouth){
 	case 12:date+=30;
 	case 11:date+=31;
 	case 10:date+=30;
 	case 9:date+=31;
 	case 8:date+=30;
 	case 7:date+=31;
 	case 6:date+=30;
 	case 5:date+=31;
 	case 4:date+=30;
 	case 3:date+=31;
 	case 2:	if(year%4==0&&year%100!=0||year%400==0)
 	        date+=28;
 	        else
 	        date+=29;
 	case 1:date+=31;
	case 0:date+=day;break;
	default:printf("输入错误");err=1    
 }if(err==0)
  {week=(date+3)%7
   printf("2004年%d月%d日是星期%d",mouth,)
  }
 } 
}
