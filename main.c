#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu(void);
int menu(void){
	int choise;
	printf("\n1.Add a moniter\n");
	printf("2.Remove\n");
	printf("3.List\n");
	printf("4.Quit\n");
	printf("choise:");
	scanf("%d",&choise);
	return choise;
}
int main(int argc, char *argv[]) {
 char code[MAXSIZE][MAXSTRING];
 int size[MAXSIZE];
 int price[MAXSIZE];
 int n=0,c;
 int i;
 do{c=menu();
   switch(c){
   
   	case 1:AddMoniter(code,size,price,&n);
	 
   		break;
   	case 2:removeName(code,size,price,&n);
   	
   		break;
   	case 3:deArray(size,code,price,n);
   	printarray(code,size,price,n);

        break;
    
   		
   }

 }while(c!=4);
	return 0;
}
