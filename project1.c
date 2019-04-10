#include<stdio.h>
#include<conio.h>
 

void sorting(int pr[],int bt[],int pn[],int n)
{
	 int temp,i;
    for(i=0;i<n-1;i++)
   {
     for(int j=i+1;j<n;j++)
     {
       if(pr[i]>pr[j])
       {
         temp=pr[i];
         pr[i]=pr[j];
         pr[j]=temp;
         
         temp=pn[i];
         pn[i]=pn[j];
         pn[j]=temp;
         temp=bt[i];
         bt[i]=bt[j];
         bt[j]=temp;
      }
   }
}
    
}



main()
 {

   int x,p[10],pp[10],pt[10],w[10],t[10],awt,atat,i;
   
   
   int n;
    printf("Number of Process are five--");
    n=5;
 int bt[n],pr[n],pn[n],wt[n];
 wt[0]=0; 
 
    printf("*******************************************\n");
	printf("Enter Priority and Burst time of the process--\n");
    for(i=0;i<n;i++)
    {
    	pn[i]=i+1;
        printf("process-- %d \n",i+1);
        printf("Burst Time:----- \n");
        scanf("%d",&bt[i]);
        printf("Priority:----- \n");
        scanf("%d",&pr[i]);
    
    }

    //soring on the basis of priority
   sorting(pr,bt,pn,n);
    wt[0]=0;
    
    
 int tr[n];
 int j;

int average=0;
tr[0]=bt[0];
int count=0;
for(j=1;j<5;j++)
 {
   wt[j]=tr[j-1];
   tr[j]=wt[j]+bt[j];
   count+=wt[j];
   
   
 }
average=count/n;
 clrscr();
 
printf("\n\n Process-id \t Priority  \t  Burst Time  \t Waiting Time \t Turn Around-Time\n");
for(j=0;j<n;j++)
{
printf("\n %d \t    \t %d  \t       \t %d \t      \t %d \t      \t %d \n",pn[j],pr[j],bt[j],wt[j],tr[j]);
}
printf("\n*******************************************************************************\n");
printf("\n Average Waiting Time :------- %d \n",average);


}
