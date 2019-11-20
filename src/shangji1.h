#include <stdio.h>
void main()
{
	char grade;
	grade=getchar();
	switch(grade)
	{case 'A':printf("85f-199\n");
	case 'B':printf("70-84\n");
	case 'C':printf("60-69\n");
	case 'D':printf("<60\n");
	default :printf("ERROR");
	}
}
