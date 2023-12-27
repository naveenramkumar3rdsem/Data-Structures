#include <stdio.h>
int binary_search(int arr[],int l,int ele)
{
    int low=0, high=l-1, mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ele<arr[mid])
            high=mid-1;
        else if(ele>arr[mid])
            low=mid+1;
        else
            return(mid);
    }
    return(-1);
}
void main()
{
    int l,run,ele,n;
    printf("Enter the number of elements in the array ");
    scanf("%d",&l);
    int arr[l];
    printf("Enter the elements of the array in a sorted manner\n");
    for(run=0;run<l;run++)
        scanf("%d",&arr[run]);
    printf("Enter the element which you would like to search for ");
    scanf("%d",&ele);
    n=binary_search(arr,l,ele);
    if(n==-1)
        printf("The element does not exist in the array.");
    else
        printf("The element is found in index location %d.",n);


}
