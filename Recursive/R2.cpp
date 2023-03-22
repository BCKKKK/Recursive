#include<stdio.h>
int Asalmi(int i,int n)
{
    if(n==i)
        return 0;
    else
        if(n%i==0)
            return 1;
    else{
        return Asalmi(i+1,n);
    }
}
int main()
{
    int sayi;
    printf("Bir sayi giriniz: "); scanf("%d",&sayi);
    
    if(Asalmi(2,sayi)==0)
        printf("Girdiginiz sayi asal sayidir.");
    else
        printf("Girmis oldugunuz sayi asal degildir.");
}
