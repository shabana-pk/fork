#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
pid_t fork(void);
pid_t wait(int *stat_loc);

int add(int arrary[],int i,int n);


int main()
{


int add(int array[],int i,int n)
{
	int m=0;
	int sum=0;
	for(m=i; m<n; m++)
	{
	  sum+=array[m];
	}
return sum;
}


int cpid=0, i=0, j=0, totalsum=0;
int sum1=0;
int sum2=0;
int length=0;
int array[]={1,1,1,1,1,
 	     1,1,1,1,1,
	     1,1,1,1,1,
	      1,1,1,1,1,
	     1,1,1,1,1};


for(int i=0; i<4; i++)
{
	int cpid=fork();
	if (cpid==0)
	   {
		sum1+=add(array,i+25,i+25);
	   }
	else
	  {
		sum2+=add(array,0,25);
		totalsum=sum1+sum2;
		printf("Total Sum %d time= %d\n",i,totalsum);

	  }

}

wait(NULL);

}
