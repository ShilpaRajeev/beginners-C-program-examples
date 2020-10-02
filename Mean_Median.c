//Program for Mean and median of an unsorted array

#include<stdio.h>
void main()
{
int arr[20],n,i,j,sum=0,temp=0;
float mean=0,median=0;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements\n");
for (i=0;i<n;i++)
{
  scanf(" %d",&arr[i]);
}

//Loop for sorting the array
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(arr[i]>arr[j])
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }
}
printf("\nThe sorted array is:");
for(i=0;i<n;i++)
{
  printf(" %d",arr[i]);
  sum+=arr[i];
}
 mean=(float)sum/n;
printf("\nThe mean of the entered values is:  %f",mean);

if(n%2!=0)  
{
  median=arr[n/2];
}
else
{
  median = (float)(arr[n/2] + arr[n/2 + 1])/2;
}
