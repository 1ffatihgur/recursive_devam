#include<stdio.h>

int carp(int a, int b)
{
	
	static int carpim=0;
	static int i=0;
	
	if(i<a)
	{
		carpim = carpim + b;
		i++;
		carp(a,b);
	}
	return carpim;
	
	
}

int main()
{
	
	int sayi1,sayi2;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	printf("carpim sonucu: %d",carp(sayi1,sayi2));
}
