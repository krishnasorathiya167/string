#include<stdio.h>

main()
{
	char ch;
	
	printf("Any Character = ");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("Uppercase Character = %c",ch);
	}
	else
	{
	printf("Uppercase Character = %c",ch-32);
	}	
}