#include<stdio.h>


int topla(int sayi, int t)
{
	
	if (sayi<=5)
	{
		t = t + sayi;
		topla(sayi+1,t);
	}
	
	else
	{
		return t;
	}
	
	
}



int main()
{
	
	int toplam=0;
	int sonuc=0;
	
	printf("sonuc: %d",topla(0,toplam));
	
	
	
	
	return 0;
}
