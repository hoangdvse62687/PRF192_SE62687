#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"header.h"
void removeName(char list[][MAXSTRING],int size[],int price[],int *pn ){
	int id,i;
	char name[MAXSTRING+1];
	id=search(list,*pn);
	if(id>=0){
		for(i=id;i<(*pn-1);i++){
		   strcpy(list[i],list[i+1]);
		   price[i]=price[i+1];
		   size[i]=size[i+1];
}
		(*pn)--;
	}
	
}

