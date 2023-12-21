#include <stdio.h> 

main()
{
	int i;
	char name[]="YELLOW";
	
	printf("String Of Lowwercase = ");
	for(i=0;i<=5;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]+32);
		}
	}
}
