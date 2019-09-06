//QUICK SORT//
#include<stdio.h>
void quicksort(int [10],int,int);
int main()
{
int x[20],size,i;
printf("Enter size of array:");
scanf("%d", &size);
for(i=0;i<size;i++)
scanf("%d",&x[i]);
quicksort(x,0,size-1);
printf("Sorted element:");
for(i=0;i<size;i++)
printf("%d\t",x[i]);
return 0;
}
void quicksort(int x[10],int first,int last)
{
int pivot,j,temp,i;
if (first<last)
{
pivot=first;
i=first;
j=last;
while(i<j)
{
while(x[i]<=x[pivot]&&i<last)
i++;
while (x[j]>x[pivot])
j--;
if(i<j)
{
temp=x[j];
x[i]=x[j];
}
}
temp=x[pivot];
x[pivot]=x[j];
x[j]=temp;
quicksort(x,first,j-1);
quicksort(x,j+1,last);
}
}
