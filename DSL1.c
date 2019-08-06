#include<stdio.h>
void average(int marks[],int n);
void maxi(int marks[],int n);
void mini(int marks[],int n);
void absent(int marks[],int n);
void maxmarks(int marks[],int n);
void rec(int marks[],int n);
void main()
{
	int marks[30],n;
	int i=0;
	int ch,c;
	printf("enter the no. of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the marks of roll no.=%d\n",i+1);
		scanf("%d",&marks[i]);
	}
	printf("roll no.\t\t marks\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t\t %d\n",i+1,marks[i]);

	}
do
{
	printf("menu\n");
	printf("1:average\n");
	printf("2:max\n");
	printf("3:min\n");
	printf("4:absent\n");
	printf("5:no. of stud got max marks\n");
	printf("6:no. of stud got same marks\n");
		printf("enter the choise");
		scanf("%d",&ch)	;
	switch(ch)
	{
		case 1:	average(marks,n);
		break;

		case 2:	maxi(marks,n);
		break;

		case 3:mini(marks,n);
		break;

		case 4:absent(marks,n);
		break;

		case 5:maxmarks(marks,n);
		break;

		case 6:rec(marks,n);
		break;
	}

	printf("do u want to continue if yes press 1\n");
	scanf("%d",&c);
}while(c==1);
}
void average(int marks[],int n)
{
	int total=0;
	int i;
	for(i=0;i<n;i++)
	{
	  total=total+marks[i];
	}
	float avg=total/n;
	printf("avrage is %f",avg);
}

void maxi(int marks[],int n)
{
	int i;
	int max=0;
	for(i=0;i<n;i++)
	{

		if(max<marks[i])
		{
			max=marks[i];
		}
	}
	printf("max no. is %d\n",max);

}
void mini(int marks[],int n)
{

	int i;
	int min=marks[0];
	for(i=0;i<n;i++)
	{

		if(min>marks[i])
		{
			min=marks[i];
		}
	}
	printf("min no. is %d\n",min);

}
void absent(int marks[],int n)
{
	int i,ab=0;
	for(i=0;i<n;i++)
	{
		if(marks[i]==-1)
		{
			ab=ab+1;
		}
	}
	printf("no of absent stuent are:%d",ab);
}void maxmarks(int marks[],int n)
{
		int i,y=0;
	int max=0;
	for(i=0;i<n;i++)
	{

		if(max<marks[i])
		{
			max=marks[i];
		}
		int y=y+1;
	}
	printf("the no. of student got max marks ");
}
void rec(int marks[], int n)

{
	int i,j,st;
	int tot=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(marks[j]>marks[j+1])
			{
				int temp;
				temp=marks[j];
				marks[j]=marks[j+1];
				marks[j+1]=temp;
			}
		}
	}
	printf("sorted array is");
	for(i=0;i<n;i++)
        {
            printf(" %d\n ",marks[i]);
        }
	for(i=0;i<n;i++)
        {
            for(st=0;st<i+1;st++)
            {
                if(marks[i]==marks[i+1])
                    {
                        tot=tot+1;
                    }
            }

            printf("%d cames %d times ",marks[i],tot+1);
                tot=0;
        }

}







