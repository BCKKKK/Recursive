#include<stdio.h>
int recursive(int n){
	if(n==0 || n==1)
	return 0;
	else if (n==2)
	return 1;
	else
	return recursive(n-3)+recursive(n-2)+recursive(n-1);
}
int main(){
	int m,i;
	printf("Kac adet eleman olsun: ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		printf("%d ",recursive(i));
	}
}
