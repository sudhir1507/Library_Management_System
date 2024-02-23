#include<stdio.h>
#include<string.h>
#include "bookmodel.h"
#include "filepath.h"
#include "Searchbook.h"
#include "viewbooks.h"
#include "addBook.h"
int main(){
	int choice;
	do{
		printf("\n1 : Add New Book");
		printf("\n2 : View All Books");
		printf("\n3 : Search Book");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				addbook(b);
				break;
			case 2:
				viewbooks(b);
				break;
			case 3:
				searchbooks(b);
				break;
//			default :
				
		}
		
	}while(choice!=4);
}

