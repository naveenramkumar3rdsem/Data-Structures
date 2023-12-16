#include <stdio.h>
int linear_search(int arr[],int l,int ele)
{
    int run;
    for(run=0;run<l;run++)
    {
        if(arr[run]==ele)
            return(run);
    }
    return(-1);
}
void main()
{
    int l,run,ele,n;
    printf("Enter the number of elements in the array ");
    scanf("%d",&l);
    int arr[l];
    printf("Enter the elements of the array\n");
    for(run=0;run<l;run++)
        scanf("%d",&arr[run]);
    printf("Enter the element which you would like to search for ");
    scanf("%d",&ele);
    n=linear_search(arr,l,ele);
    if(n==-1)
        printf("The element does not exist in the array.");
    else
        printf("The element is found in index location %d",n);

}
