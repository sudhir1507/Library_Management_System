//this function is used to add or  write book records in text file
void addbook(struct Book b){            
	fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\LIBRARY MANAGEMENT SYSTEM\\demo.txt","a");
	if(fptr==NULL){
		printf("\tFile path not found..!");
	}else{
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
		//write all data in text file
		fprintf(fptr,"%d\t%d\t%s\t%s\t%d\t%d",b.id,b.price,b.name,b.author,b.count,b.rackno);
		fputs("\n",fptr);
        printf("\tBook Added Successfully..!");
        fclose(fptr);
	}  
	
	}

