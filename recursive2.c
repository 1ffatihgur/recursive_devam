#include<stdio.h>


int fact(int sayi)
{
	int sonuc=0;
	
	if(sayi == 0 || sayi == 1)
	{
		return 1;
	}
	
	else
	{
		sonuc = sayi * fact(sayi-1);
		return sonuc;
	}
	
}

int main()
{
	
	int num = 4;
	int res=0;
	
	res = fact(5);
	
	printf("%d sayisinini faktoriyeli: %d",num,res);
}
