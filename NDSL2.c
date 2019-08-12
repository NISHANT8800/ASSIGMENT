#include<stdio.h>
void uni(int b[],int c[],int nb,int nc);
void intersection(int b[],int c[],int nb,int nc);
void main()
{
	int c[20],b[20],n,i,nc,nb,ch,f;
 	printf("Enter the no of students playing cricket");
	scanf("%d",&nc);
	printf("Enter the roll no of student playing cricket\n");
	for(i=0;i<nc;i++)
	  {
		scanf("%d",&c[i]);
	   }
printf("\nstudent playing cricket");
	for(i=0;i<nc;i++)
	  {
	       printf("\t%d",c[i]);
	   }
	printf("\nenter the no of student playing badminton");
	scanf("%d",&nb);
	printf("\nEnter the roll no of student playing badminton\n");
	for(i=0;i<nb;i++)
	  {
		scanf("%d",&b[i]);
	    }
	printf("\nstudent playing badminton");
	for(i=0;i<nc;i++)
	  {
	       printf("\t%d",b[i]);
	   }
	do
	{
		printf("\nMenu List:\n");
		printf("1:Sets of students who play both cricket and badminton\n");
		printf("2:Sets of students who play either playing Badminton or Cricket or both\n");
		printf("3:Sets of students who play only cricket\n");
		printf("4:Sets of students who play only badminton\n");
		printf("5:Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		 {
			case 1: uni(b,c,nb,nc);
			break;
			case 2: intersection(b,c,nb,nc);
			break;
			case 3:
			break;
			case 4: f=2;
			break;
		 }
	 }
while(f==1);
}
void uni(int b[],int c[],int nb,int nc)
{
	int u[nb],k,i,j;
	for(i=0;i<nc;i++)
	{
	 u[i]=b[i];
	}
	for(j=0;j<nb;j++)
	{
		for(k=0;k<i;k++)
		{
			 if(c[j]==u[k])
			{
			    j++;
                break;
			}
		}

			u[i]=c[j];
			i++;
	}
	printf("NO Of Player Playing Both Cricket And Badmiton",u[k]);
	for(i=0;i<nb+nc;i++)
	{
		printf("%d\t",u[i]);
	}
}
void intersection(int b[],int c[],int nb,int nc)
{
	int inter[20];
	int k=0,i,j;
	for(j=0;j<nb;j++)
	{
		for(i=0;i<nc;i++)
		{
			 if(b[i]==c[j])
			{
			 inter[k]=b[i];
				k++;
			break;
			}
		}
	}
}

