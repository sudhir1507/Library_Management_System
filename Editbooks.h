void editbooks(){
	int bookid,flag,bid,p,rn,c;
	char n[90],an[90];
    fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\LIBRARY MANAGEMENT SYSTEM\\demo.txt","r");
     if(fptr==NULL){
     	printf("Records not found..");
	 }else{
	 	flag=0;
	 	printf("Enter Book Id for edit book info :");
	    scanf("%d",&bookid);
	    while(fscanf(fptr,"%d%d%s%s%d%d",&b.id,&b.price,&b.name,&b.author,&b.count,&b.rackno)!=-1){
	    	    if(b.id==bookid)
         	    {
         	    	flag=1;
				    break;
				 }
			 }
	 }
	  if(flag){
	  	fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\LIBRARY MANAGEMENT SYSTEM\\demo.txt","w");
	  	printf("Update information of Book");
	  	printf("\nEnter id :");
		scanf("%d",&bid);
		b.id=bid;
		printf("\nEnter price :");
		scanf("%d",&p);
		b.price=p;
		printf("\nEnter bookname :");
		scanf("%s",n);
		strcpy(b.name,n);
		printf("\nEnter authorname :");
		scanf("%s",an);
		strcpy(b.author,an);
		printf("\nEnter count :");
		scanf("%d",&c);
		b.count=c;
		printf("\nEnter rackno :");
		scanf("%d",&rn);
		b.rackno=rn;
		fprintf(fptr,"%d\t%d\t%s\t%s\t%d\t%d",b.id,b.price,b.name,b.author,b.count,b.rackno);
	 	printf("Book Information updated successfully..!");
	 }else{
	 	printf("\nBook not found..");
	 }
    fclose(fptr);	
	
}
