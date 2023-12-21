#include <stdio.h> 

main()
{
	int i;
	char name[]="KriSHna";
	
	printf("String Of Togglecase = ");
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			printf("%c",name[i]+32);
		}
		else
		{
			printf("%c",name[i]-32);
		}
	}
}