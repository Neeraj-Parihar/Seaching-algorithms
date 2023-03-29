//to implement a linear search and count the no. of steps
#include<stdio.h>
int main()
{
    int i,n,arr[50],key;
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    printf("ENTER THE ARRAY ELEMENTS:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE KEY TO BE SEARCHED:");
    scanf("%d",&key);
    for(i=0;i<=n-1;i++)
    {
        if(key==arr[i])
        {
            printf("THE KEY IS FOUND AT INDEX %d AND POSITION IS %d\n",i,i+1);
            printf("THE NUMBER OF STEPS ARE %d\n",i+1);
            break;
        }
        else
        {
            printf("THE ELEMENT IS NOT FOUND:\n");
            printf("THE NUMBER OF STEPS ARE %d\n",i+1);
        }
    }
    return 0;
}
