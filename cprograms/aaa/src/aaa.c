#include<stdio.h>
int main()
{
int temp,i=0,j,f,g,os=0,ns,n,key,arr1[50];
printf("enter no of array element");
scanf("%d",&n);
printf("\nenter array element\n");
for(i=0;i<n;i++)
scanf("%d",&arr1[i]);
printf("\nenter no\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr1[i]>arr1[j])
{
temp=arr1[i];
arr1[i]=arr1[j];
arr1[j]=temp;
}
}
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
ns=arr1[i]+arr1[j];
if(os<=ns && ns<key)
{
os=ns;
f=i;
g=j;
}
}
}

printf("\n sum %d num1 %d num2 %d",os,arr1[f],arr1[g]);
return 0;
}
