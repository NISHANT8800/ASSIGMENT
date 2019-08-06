#include<stdio.h>
int uni(int b[],int c[],int nb,int nc);
void both(int b[],int c[],int nb,int nc);
void onlybadmin(int b[],int c[],int nb,int nc);
void niethernor(int u[],int last);
void main()
{
	int last;
	int u[65];
	int b[20],c[20];
	int nb,nc,i,ch,f;
	printf("enter the no. of students playing badminton");
	scanf("%d",&nb);
	printf("enter the roll no.");
	last=nb+nc;
	for(i=0;i<nb;i++)
	{
		scanf("%d",&b[i]);
	}



		printf("enter the no. of students playing cricket");
		scanf("%d",&nc);


	for(i=0;i<nc;i++)
	{
		scanf("%d",&c[i]);
	}
		printf("enter roll no.playing badminton");
		for(i=0;i<nb;i++)
	{
		printf("%d\t",b[i]);
	}
		printf("\n");
		printf("enter roll no.playing cricket");
		for(i=0;i<nc;i++)
	{
		printf("%d \t",c[i]);
	}
do
 {
	printf("MENU\n");
	printf("1:union\n");
	printf("2:both cric & badm \n");
	printf("3:only badminton\n");
	printf("4:nithernor\n");
	printf("exit \n");
	printf("enter the choise");
	scanf("%d",&ch);
 	switch(ch)
	{
		case 1:uni(b,c,nb,nc);
		break;
		case 2:both(b,c,nb,nc);
		break;
		case 3:onlybadmin(b,c,nb,nc);
		break;
		case 4:niethernor(u,last);
		break;
		case 5:f=5;
		break;

	}
 }while(f==1);

}
int uni(int b[],int c[],int nb,int nc)
{
		int u[60],i,j,k;
	for(i=0;i<nb;i++)
	{
		u[i]=b[i];
	}
	for(j=0;j<nc;j++)
	{
		for(k=0;k<i;k++)
		{
			if(c[j]==u[k])
			{
				j++;
				break;
			}
		}
		u[i]=c[j];i++;
	}
	printf("roll no. playing both cricket and badminton ");
	for(i=0;i<nb+nc;i++)
	{
		printf("%d\t",u[i]);
	}
	return 0;
}
void both(int b[],int c[],int nb,int nc)
 {
	int u[40];
	int i,j,k;
	int sum=0;
	for(i=0;i<nb;i++)
	{
		for(j=0;j<nc;j++)
		{
			if(b[i]==c[j])
			{

				u[i]=b[i];
				sum=sum+1;
			}
		}
	}
	for(i=0;i<sum;i++)
	{
		printf("%d\t",u[i]);
	}

 }
void onlybadmin(int b[],int c[],int nb,int nc)
{
	int i,j,k=0,z;
	int u[40];
	for(i=0;i<nc;i++)
	{
		for(j=0;j<nb;j++)
		{
			if(b[i]==c[j])
			{

				break;
			}

		}
			if(b[i]!=c[j])
			{
			u[k]=b[i];
			k++;
			}

	}
	for(z=0;z<k-1;z++)
	{
		printf("%d\t",u[z]);
	}
}
void niethernor(int u[],int last)
{
	int i,j,k,z;
	int universal[100];
	int niethernor[65];
	for(i=0;i<20;i++)
	{
		universal[i]=i+1;
	}



	for(i=0;i<20;i++)
	{
		for(j=0;j<last;j++)
		{
			if(universal[i]==u[j])
			{

				break;
			}

		}
			if(universal[i]!=u[j])
			{
			niethernor[k]=universal[i];
			k++;
			}

	}
	for(z=0;z<k-1;z++)
	{
	printf("%d\n",niethernor[z]);
	}

}



