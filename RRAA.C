#include<conio.h>

#include<stdio.h>

int ttime,i,j,temp,pname[100],btime[100],pname2[100],btime2[100];

main()

{

int n,x,z;
 clrscr();
printf("Enter number of processes:");

scanf("%d",&n);

printf("Enter the process name , burst time for the process \n");

for(i=0;i<n;i++)

{

printf("Enter the process name:");

scanf("%d",&pname2[i]);

printf("Enter burst time for the process %d:",pname2[i]);

scanf("%d",&btime2[i]);

}

printf("PROCESS NAME \t\t BURST TIME\n");

for(i=0;i<n;i++)

printf("%d\t\t\t %d\n",pname2[i],btime2[i]);

z=1;

while(z==1)

{

ttime=0;

for(i=0;i<n;i++)

{

pname[i]=pname2[i];

btime[i]=btime2[i];

}


printf ("PRESS 1.ROUND ROBIN 2.EXIT\n");

scanf("%d",&x);

switch(x)

{

case 1:

rrobin(pname,btime,n);

break;

case 2:

exit(0);

break;

default:

printf("Invalid option");

break;

 }
printf("\n\n If you want to continue press 1 else to exit press 2 \n");
scanf("%d",&z);

       }

}



 rrobin(int pname[],int btime[],int n)

 {

int tslice;

j=0;

printf("\n\t ROUND ROBIN SCHEDULING \n\n");

printf("Enter the time slice:\n");

scanf("%d",&tslice);
printf("                 GANTT CHART :           \n\n\n");
printf("PROCESS NAME \t REMAINING TIME \t TOTAL TIME");

while(j<n)

{
  for(i=0;i<n;i++)

{

 if(btime[i]>0)
 {

if(btime[i]>=tslice)
{

ttime+=tslice;

btime[i]=btime[i]-tslice;

printf("\nP[%d]     \t      %d     \t     %d",pname[i],btime[i],ttime);

if(btime[i]==0)

j++;

 }

else

   {

ttime+=btime[i];
btime[i]=0;

printf("\nP[%d]     \t      %d     \t     %d",pname[i],btime[i],ttime);

j++ ;

  }//else

}//bt>0

 }//for

 }//while

}//fn


