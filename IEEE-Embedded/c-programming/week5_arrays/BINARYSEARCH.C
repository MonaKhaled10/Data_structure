//youssef shawky lec searching
#include<stdio.h>

void main()
{


   float key;
   int n,pos,lower,upper,mid;
 printf("enter n of arr:");
 scanf("%d",&n);
 float data[n];
 for(int i=0;i<n;i++)
{
    printf("value %d :",i);
    scanf("%f",&data[i]);
}
   printf("please key to be loacted:");
   scanf("%f",&key);
   //algorithm for binary search
   pos=-1;
   lower=0;
   upper=n-1;
   do{

    mid =(lower +upper)/2;
    if(key==data[mid])
    {
        pos=mid;
        break;
    }else if(key>data[mid])
    { lower=mid+1;

    }
    else
    {
      upper=mid-1;
    }
   }
   while(lower<=upper);

    if(pos==-1)
    printf("%f is not loacted",key);
    else printf("pos=%d",pos);
    }
