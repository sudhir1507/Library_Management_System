void searchbooks(struct Book b){
	int bookid,flag;
    fptr=fopen("C:\\Users\\ACER\\Documents\\GTH Practicals\\C programing\\LIBRARY MANAGEMENT SYSTEM\\demo.txt","r");
     if(fptr==NULL){
     	printf("\tRecords not found..");
	 }else{
	 	flag=0;
	 	printf("\tEnter Book Id :");    //searching books by their book id
	    scanf("%d",&bookid);
	    //this loop will read all records until end of file
	    while(fscanf(fptr,"%d%d%s%s%d%d",&b.id,&b.price,&b.name,&b.author,&b.count,&b.rackno)!=-1){
	    	    if(b.id==bookid)  //if book found set flag to 1 and break loop
         	    {
         	    	flag=1;
				    break;
				 }
			 }
	 }
	 
	  if(flag){       //if flag is 1 then show list of issued books
	  
	  	printf("\n\tId\tPrice\tBName\t\tAName\tCount\tRackno\n");
	 	printf("\t%d\t%d\t%s\t%s\t%d\t%d\n",b.id,b.price,b.name,b.author,b.count,b.rackno);
	 }else{
	 	printf("\n\tBook not found..");
	 }
    fclose(fptr);	
	
}
