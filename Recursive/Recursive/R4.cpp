#include<stdio.h>
#include<math.h>
//Decimal olarak girdiðimiz sayýyý binary dönüþtüren program.
int binary(int n){
if(n==0)	
return 0;	
else
return(n % 2+10*binary(n/2));
}
main(){
int sayi;	
printf("Bir sayi giriniz: "); scanf("%d",&sayi);	
printf("Decimal olarak girdiginiz sayinin binarysi:%d",binary(sayi));	
}
