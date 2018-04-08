#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"header.h"
void deArray(int size[],char code[][MAXSTRING],int price[],int n){
	int i,j,t,p;
	char tmp[MAXSTRING];
	for(i=0;i<n-1;i++)
	   for(j=n-1;j>i;j--){
	   if(size[j]>size[j-1]){t=size[j];
	                   size[j]=size[j-1];
	                   size[j-1]=t;
	                   
	                   p=price[j];
	                   price[j]=price[j-1];
	                   price[j-1]=p;
	                   
	                   	   
				       strcpy(tmp,code[j]);		  
				       strcpy(code[j],code[j-1]);	  
				       strcpy(code[j-1],tmp);	
	   }	   

}
}
