#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[100],b[100],c[100],d[100],i,j,diziboyutu,gecici;
	printf("Dizi boyutu giriniz");
	scanf("%d",&diziboyutu);
	for(i=0;i<diziboyutu;i++){
		printf("A dizisini giriniz:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<diziboyutu;i++){
		printf("B dizisini giriniz:");
		scanf("%d",&b[i]);
	}
	for(i=0;i<diziboyutu;i++){
		printf("C dizisini giriniz:");
		scanf("%d",&c[i]);
	}
	for(i=0;i<diziboyutu;i++){
		d[i]=a[i]+b[i]-c[i];
	}
	 for( i = 0; i <diziboyutu; i++)
    {
        for( j = i+1; j <diziboyutu; j++)
        {
            if(d[j] < d[i]){
                gecici = d[i];
                d[i] = d[j];
                d[j] = gecici;
            }
        }
    }
    for( i = 0; i <diziboyutu; i++)
    {
        printf("%d\t",d[i]);
    }
    return 0;
}


