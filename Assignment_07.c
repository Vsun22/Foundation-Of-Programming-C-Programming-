#include <stdio.h>

struct Student
{
	char name[50];
	int prn, m1, m2, m3, m4, m5;
	float percentage;
};

int main()
{
	int i, n;

	printf("Enter the number of students : ");
	scanf("%d",&n);
	struct Student info[n];

	for(i = 0; i<n;i++)
	{
		printf("Enter student name : ");
		scanf("%s",info[i].name);
		printf("Enter student prn : ");
		scanf("%d",&info[i].prn);
		printf("Enter student marks : ");
		scanf("%d %d %d %d %d",&info[i].m1,&info[i].m2,&info[i].m3,&info[i].m4,&info[i].m5);

		info[i].percentage = (float)(info[i].m1+info[i].m2+info[i].m3+info[i].m4+info[i].m5)/5;
	}

	printf("\n--- STUDENT RESULTS ---\n");
	for(i = 0; i < n; i++) 
	{
		printf("\nName: %s", info[i].name);
		printf("\nPRN: %d", info[i].prn);
		printf("\nPercentage: %.2f", info[i].percentage);
		if(info[i].percentage >= 75)
		{
		printf("\nResult: Distinction");
		}
		else if(info[i].percentage >= 60)
		{
		printf("\nResult: First Class");
		}
		else if(info[i].percentage >= 50)
		{
		printf("\nResult: Second Class");
		}
		else if(info[i].percentage >= 40)
		{
		printf("\nResult: Pass");
		}
		else
		{
		printf("\nResult: Fail");
		}
	}
	return 0;

}