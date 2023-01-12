#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int A[5],B[5],i;
	for(i=0;i<5;i++)
	{
		printf("lutfen dizi elemanlarini giriniz: ");
		scanf("%d",&A[i]);	
	}
	for(i=4;i>=0;i--)
	{
		B[i]=-A[i];
		printf("%d yeni dinizidir\n",B[i]);
	}


	return 0;
}
