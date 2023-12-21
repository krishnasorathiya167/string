#include<stdio.h>

main()
{
	char ch;
	
	printf("Any Character = ");
	scanf("%c",&ch);
	
	if(ch>=97 && ch<=122)
	{
		printf(" Lowercase Character = %c",ch);
	}
	else
	{
	printf("lowercase Character = %c",ch+32);
	}
		
	
}