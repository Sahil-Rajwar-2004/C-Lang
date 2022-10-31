#include <stdio.h>
#include <string.h>

//user defined
struct Stud{
	int rollno;
	float percentage;
	char name[100];
};

int main(){
	struct Stud stud1;
	stud1.rollno = 48;
	stud1.percentage = 78.6;
	//stud1.name = "Sahil Rajwar";
	strcpy(stud1.name,"Sahil Rajwar");

	printf("Student name = %s\n",stud1.name);
	printf("Student rollno = %d\n",stud1.rollno);
	printf("Percentage secure = %f\n",stud1.percentage);

	return 0;
}

