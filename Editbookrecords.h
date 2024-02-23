void editbook(){
	FILE *fptr1;
	int bid;
	char str[256];
	fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\LIBRARY MANAGEMENT SYSTEM\\demo.txt","r");
     if(fptr==NULL){
     	printf("\tRecords not found..");
	 }
	 //createing temp file to store book data
    fptr1=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\LIBRARY MANAGEMENT SYSTEM\\temp.txt","w");
     if(fptr==NULL){
     	printf("\tRecords not found..");
	 }
	 printf("\tEnter the id to edit book record :");
	 scanf("%d",&bid);
	 //this loop read all records until eof
	 while(fscanf(fptr,"%d%d%s%s%d%d",&b.id,&b.price,&b.name,&b.author,&b.count,&b.rackno)!=-1){
	 
	 		if(bid!=b.id){  //this condition ture until the book id is not found
	 			//this line of code is used to write all records in temp file excpet matched book id
			 	fprintf(fptr1,"%d\t%d\t%s\t%s\t%d\t%d",b.id,b.price,b.name,b.author,b.count,b.rackno);
			 	fputs("\n",fptr1);
			 }else{
			 	//this block execute only when the book id matched which is we are editiong
			 	printf("\tEnter id :");
				scanf("%d",&b.id);
				printf("\n\tEnter price :");
				scanf("%d",&b.price);
				printf("\n\tEnter bookname :");
				scanf("%s",&b.name);
				printf("\n\tEnter authorname :");
				scanf("%s",&b.author);
				printf("\n\tEnter count :");
				scanf("%d",&b.count);
				printf("\n\tEnter rackno :");
				scanf("%d",&b.rackno);
				//write all updated data in text file
				fprintf(fptr1,"%d\t%d\t%s\t%s\t%d\t%d",b.id,b.price,b.name,b.author,b.count,b.rackno);
				fputs("\n",fptr1);
			 }
		 } 
	fclose(fptr);
	fclose(fptr1);
	remove("demo.txt");
	rename("temp.txt","demo.txt");
    printf("\tupdated record successfully..!");
}
