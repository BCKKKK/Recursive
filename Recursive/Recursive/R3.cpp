#include<stdio.h>
#include<math.h>
int ArmstrongMu(int n)
{
     if(n>0)
    return (pow(n%10,3) +ArmstrongMu(n/10));
}
int main()
{
    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
   if(ArmstrongMu(sayi)==sayi)
    printf("Girmis oldugunuz sayi armstrong sayisidir.");
   else
    printf("Girmis oldugunuz sayi armstrong sayi degildir");
}
