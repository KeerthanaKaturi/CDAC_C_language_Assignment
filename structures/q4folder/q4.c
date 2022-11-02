#include <stdio.h>
struct desdtype
{
	char studentname[20];
	int studentmodule1marks;
	int studentmodule2marks;
};
struct dssdtype
{
        char studentname[20];
        int studentmodule1marks;
        int studentmodule2marks;
	int studentmodule3marks;
};
struct dactype
{
	char studentname[20];
        int studentmodule1marks;
        int studentinternalmarks;
};
int main()
{
	struct desdtype desd[40];
	struct dssdtype dssd[40];
	struct dactype dac[40];
	int s1,s2,s3;
	float avg[40],percentage[40];
	printf("Enter no. of students in desd: ");
	scanf("%d",&s1);
	printf("Enter no. of students in dssd: ");
	scanf("%d",&s2);
	printf("Enter no. of students in dac: ");
	scanf("%d",&s3);
	for(int i = 0;i < s1;i++)
	{
		printf("Enter name of student: ");
		scanf("%s",&desd[i].studentname);
		printf("Enter module1 marks: ");
		scanf("%d",&desd[i].studentmodule1marks);
		printf("Enter module2 marks: ");
		scanf("%d",&desd[i].studentmodule2marks);
	}
	for(int i = 0;i < s2;i++)
        {
                printf("Enter name of student: ");
                scanf("%s",&dssd[i].studentname);
                printf("Enter module1 marks: ");
                scanf("%d",&dssd[i].studentmodule1marks);
                printf("Enter module2 marks: ");
                scanf("%d",&dssd[i].studentmodule2marks);
		printf("Enter module3 marks: ");
                scanf("%d",&dssd[i].studentmodule3marks);
        }
	for(int i = 0;i < s3;i++)
        {
                printf("Enter name of student: ");
                scanf("%s",&dac[i].studentname);
                printf("Enter module1 marks: ");
                scanf("%d",&dac[i].studentmodule1marks);
                printf("Enter module2 marks: ");
                scanf("%d",&dac[i].studentinternalmarks);
        }
	printf("########################################################################\n");
	printf("Data of students of desd\n");
	printf("########################################################################\n");

	for(int i = 0;i < s1;i++)
        {
                printf("Name of student: ");
                printf("%s\n",desd[i].studentname);
                printf("Module1 marks: ");
                printf("%d\n",desd[i].studentmodule1marks);
                printf("Module2 marks: ");
                printf("%d\n",desd[i].studentmodule2marks);
		avg[i] = (float)(desd[i].studentmodule1marks + desd[i].studentmodule2marks)/2;
		printf("Average marks of candidate = %f\n",avg[i]);
		if(avg[i] > 35)
			printf("Pass\n");
		else
			printf("Fail\n");
		printf("-----------------------------------------------------------------------------\n");
        }
	printf("########################################################################\n");
        printf("Data of students of dssd\n");
        printf("########################################################################\n");

        for(int i = 0;i < s2;i++)
        {
                printf("Name of student: ");
                printf("%s\n",dssd[i].studentname);
                printf("Module1 marks: ");
                printf("%d\n",dssd[i].studentmodule1marks);
                printf("Module2 marks: ");
                printf("%d\n",dssd[i].studentmodule2marks);
                printf("Module3 marks: ");
                printf("%d\n",dssd[i].studentmodule3marks);
		avg[i] = (float)(dssd[i].studentmodule1marks + dssd[i].studentmodule2marks + dssd[i].studentmodule3marks)/3;
		printf("Average marks of candidate = %f\n",avg[i]);
		if(avg[i] > 35)
                        printf("Pass\n");
                else
                        printf("Fail\n");
		printf("-----------------------------------------------------------------------------\n");

        }
	printf("########################################################################\n");
        printf("Data of students of dac\n");
        printf("########################################################################\n");

        for(int i = 0;i < s3;i++)
        {
                printf("Name of student: ");
                printf("%s\n",dac[i].studentname);
                printf("Module1 marks: ");
                printf("%d\n",dac[i].studentmodule1marks);
                printf("Module2 marks: ");
                printf("%d\n",dac[i].studentinternalmarks);
		avg[i] = (float)(dac[i].studentmodule1marks + dac[i].studentinternalmarks)/2;
		printf("Average marks of candidate = %f\n",avg[i]);
		if(avg[i] > 35)
                        printf("Pass\n");
                else
                        printf("Fail\n");

		printf("-----------------------------------------------------------------------------\n");

        }
	return 0;
}
