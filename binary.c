//to implement a binary search and find the number of steps
#include<stdio.h>
int main()
{
    int i,j=1,n,arr[50],s,e,mid,key;
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    printf("ENTER THE ARRAY ELEMENTS IN SORTED FORM:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE KEY TO BE SEARCHED:");
    scanf("%d",&key);
    s=0;
    e=n-1;
    mid=(s+(e-s)/2);
    while(s<=e)
    {
        if(key==arr[mid])
        {
            printf("THE ELEMENT IS FOUND AT INDEX %d AND POSITION IS %d\n",mid,mid+1);
            printf("THE NO. OF STEPS ARE %d\n",j);
            break;
        }
        if(key<arr[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+(e-s)/2);
        j++;
    }
    return 0;
}
