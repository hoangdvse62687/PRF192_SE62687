#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"header.h"
void printarray(char code[][MAXSTRING],int size[],int price[],int n){
	int i;
 for(i=0;i<n;i++){
   		printf("code:%s",code[i]);
   		printf("            size:%d",size[i]);
   		printf("                           price:%d\n",price[i]);
}
}
