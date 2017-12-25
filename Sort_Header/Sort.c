#include<stdio.h>
#include<stdlib.h>
#include"Sort.h"
void Selection_Sort(int* dizi,int ElemanSayisi){
	int i,j,min,sirali=1;	
	for(i=0;i<ElemanSayisi;i++){
		min=dizi[i];
		for(j=i+1;j<ElemanSayisi;j++){
			if(dizi[j]<min){
				sirali=0;
				min=dizi[j];			
				dizi[j]=dizi[i];
				dizi[i]=min;
			}
		}
		if(sirali){	
			printf("\n Verilen dizi zaten sıralıdır.\n");
			break;
	    	}		
	}
	if(sirali==0){
		printf("\n Dizi Selection Sort ile sıralandı.\n");
	}
}


void Insertion_Sort(int dizi[],int ElemanSayisi){
	int i,j,key,sirali=1;
	for(i=1;i<ElemanSayisi;i++){
		key=dizi[i];
		j=i-1;
		while(key<dizi[j] && j>=0){
			sirali=0;
			dizi[j+1]=dizi[j];
			j--;
		}
		dizi[j+1]=key;
	}

	if(sirali){	
		printf("\n Verilen dizi zaten sıralıdır.\n");
	}	
	else{
		printf("\n Dizi Insertion Sort ile sıralandı.\n");
	}
}


void Bubble_Sort(int* dizi,int ElemanSayisi){
	int i,j,tmp,sirali=1;
	for(i=0;i<ElemanSayisi;i++){	
	    for(j=0;j<ElemanSayisi-1;j++){
		if(dizi[j+1]<dizi[j]){
			sirali=0;
			tmp=dizi[j+1];	
			dizi[j+1]=dizi[j];
			dizi[j]=tmp;	
		}		
	    }
	    if(sirali){	
		printf("\n Verilen dizi zaten sıralıdır.\n");
		break;
	    }
	}
	if(sirali==0){
		printf("\n Dizi Bubble Sort ile sıralandı.\n");
	}

}
