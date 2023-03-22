#include<stdio.h>
//Girmis oldugunuz sayıya kadar olan tek sayıları gösteren program
int Teksayi(int sayi1,int sayi2)
{
   if(sayi1>=sayi2)
    return 0;
    printf("%d ",sayi1);
return Teksayi(sayi1+2,sayi2);
}
main()
{
    int sayi1=1,sayi2;
    printf("Hangi sayiya kadar tek sayilari ekranda gostersin: ");  scanf("%d",&sayi2);
    printf("Girmis oldugunuz sayiya kadar butun tek sayilar: "); 
	Teksayi(sayi1,sayi2);
}
