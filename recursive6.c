#include<stdio.h>

char f1(int b);
main()
{
	char a;
	a = f1(10);
	printf("%c",a);
	
	return 0;	
}

char f1(int b)
{
	printf("a");
	if(b<=8)
	{
		return 'a';
	}
	else
	{
		printf("a");
		f1(b--);
	}
}
