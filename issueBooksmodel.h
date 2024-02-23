#include<time.h>
//created structure to store data about issue book records
struct IssueBooks{
	int id;
	char stname[30];
	char name[30];
	char cat[30];
	struct tm issue;
	struct tm duedate; 
};
struct IssueBooks ib;
