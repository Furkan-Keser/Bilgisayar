#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[100],b[100],c[100],toplam=0,i,diziboyutu,j;
	float ort;
	printf("Dizi boyutu giriniz:");
	scanf("%d",&diziboyutu);
	
	for(i=0;i<diziboyutu;i++){
		printf("Dizi giriniz:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<diziboyutu;i++){
		toplam=toplam+a[i];
	}
    ort=toplam/diziboyutu;
    
   for(i=0;i<diziboyutu;i++){
   	if(a[i]<ort)
   	  b[j]=a[i];
   	else
	   c[j]=a[i];  
   }
	return 0;
}
