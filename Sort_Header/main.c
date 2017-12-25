#include<stdio.h>
#include<stdlib.h>
#include"Sort.h"




int main(){
	
	//int dizi[20]={3,6,0,8,9,1,5,7,4,2,10,18,19,11,14,15,13,12,17,16};	
	int elemansayisi, i, *dizi;

    	printf("Eleman sayısını giriniz: ");
   	scanf("%d", &elemansayisi);

    	dizi = (int*) malloc(elemansayisi * sizeof(int));  //memory allocated using malloc
    	if(dizi == NULL)
	{
        	printf("Dizi oluşturulamadı.");
        	exit(0);
    	}

    
    	for(i = 0; i < elemansayisi; ++i)
    	{
		printf("Dizinin %d. elemanını giriniz: ",i+1);
        	scanf("%d", dizi + i);        
    	}

	printf("  Girilen Dizi:		\n");
	for(i=0;i<elemansayisi;i++){
		printf("%d   ",dizi[i]);
	}

    	//Selection_Sort(dizi,elemansayisi);
	//Insertion_Sort(dizi,elemansayisi);
    	Bubble_Sort(dizi,elemansayisi);

	printf("\n  Sıralı Dizi:		\n");
	for(i=0;i<elemansayisi;i++){
		printf("%d   ",dizi[i]);
	}

printf("\n");	free(dizi);	
return 0;
}


