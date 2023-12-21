#include <stdio.h> 

main()
{
	int i;
	char name[]="YELLOW";
	
	printf("String Of Uppercase = ");
	for(i=0;i<=5;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]-32);
		}
	}
}