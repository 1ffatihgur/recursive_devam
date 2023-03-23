#include<stdio.h>


int topla(int sayi)
{
	int sum=0;
	
	if(sayi == 0)
	{
		return 0;
	}
	
	else 
	{
		sum = sayi + topla(sayi-1);
		return sum;
	}
}

int main()
{
	int toplam = 0;
	int num;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&num);
	
	toplam = topla(num);
	
	printf("\nsayilarin toplami: %d",toplam);
}
