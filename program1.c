#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"header.h"
int search(char list[][MAXSTRING],int n){
	int found,i,id;
	char name[MAXSTRING+1];
	found=Fail;
	id=-1;
	printf("input code:");
	fflush(stdin);
	scanf("%[^\n]",name);
	for(i=0;i<n  &&  !found;i++){
		if(stricmp(list[i],name)==0){
			found=True;
			id=i;
	}
}
return id;
}
void AddMoniter(char code[][MAXSTRING],int size[],int price[],int *pn){
	char name[MAXSTRING];
	int s,p;
	int id;


	if(*pn>MAXSIZE)
	   printf("The list is full!!");
	else{
		printf("input code:");
	 	fflush(stdin);
	 	scanf("%[^\n]",name);
	 	strcpy(code[*pn],name);
	 	
	 	
	 	
		 printf("input size:");
		 scanf("%d",&s);
		 size[(*pn)]=s;
		 
		 printf("input price:");
		 scanf("%d",&p);
		 price[(*pn)]=p;
	    (*pn)++;
	}
}
