#include "filelogin.h"
#include<string.h>
struct Login{
	char user[30];
	char pass[30];
};
struct Login l;
void loginlab(){
    fp=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\LIBRARY MANAGEMENT SYSTEM\\login.txt","w");
	if(fp==NULL){
		printf("\tFile path not found..!");
	}else{
		// username and password set here
		char user_name[30]="Library";
		char password_[30]="Books";         
		strcpy(l.user,user_name);
		strcpy(l.pass,password_);
		fputs(l.user,fp);
		fputs("\n",fp);
		fputs(l.pass,fp);
		fclose(fp);
	}
}
