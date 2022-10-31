#include <stdio.h>

struct student{
	int rollno;
	float percentage;
	char name[100];
};

int main(){
	struct student stud1 = {48,76.3,"Sahil Rajwar"};
	printf("student name: %s\n",stud1.name);
	printf("roll no: %d\n",stud1.rollno);
	printf("percentage: %f\n",stud1.percentage);

	return 0;
}

