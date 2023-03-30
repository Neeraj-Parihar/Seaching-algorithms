//implement a jump search and count the number of steps involved
#include<stdio.h>
#include<math.h>
int jump(int [],int ,int);
int main()
{
    int i,n,key,arr[50],loc;
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS IN SORTED FORM:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE KEY TO BE SEARCHED:");
    scanf("%d",&key);
    if((loc = jump(arr, n, key)) >= 0)
        printf( "Item found at location: %d",loc);
   else
        printf("Item is not found in the list.");
    return 0;    
}
int jump(int arr[],int n,int key) {
   int start = 0;
   int end = sqrt(n); //the square root of length of array

   while(arr[end] <= key && end < n) {
      start = end;  //it it is not correct block then shift block
      end += sqrt(n);
      if(end > n - 1)
         end = n;  //if right exceeds then bound the range
   }

   for(int i = start; i<end; i++) { //perform linear search in selected block
      if(arr[i] == key)
         return i; //the correct position of the key
   }
}
