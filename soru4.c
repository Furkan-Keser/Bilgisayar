#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int eleman,i;
    int sayac = 1; 
     
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&eleman);
     
    int dizi[eleman];
     
    for(i = 0; i < eleman; i++)
    {
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\nDizinin tersten yazilmis hali.\n"); 
     
    for(i = eleman-1; i >= 0; i--)
    {
        printf("Dizinin %d. degeri = %d\n",-sayac, dizi[i]);
        sayac++;
    }
   	return 0;
}

