#include<stdio.h>
#include<string.h>
#include "bookmodel.h"
#include "filepath.h"
#include "Searchbook.h"
#include "viewbooks.h"
#include "addBook.h"
#include "Editbooks.h"
#include "Deletebooks.h"
int main(){
	int choice;
	do{
		printf("\n1 : Add Books");
		printf("\n2 : View Books");
		printf("\n3 : Search Books");
		printf("\n4 : Edit book Record");
		printf("\n5 : Delete book");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				addbook(b);
				break;
			case 2:
				viewbooks();
				break;
			case 3:
				searchbooks(b);
				break;
			case 4:
				editbooks();
				break;
			case 5:
				deletebooks();
				break;
			case 6:
				break;
				
		}
		
	}while(choice!=6);
}

