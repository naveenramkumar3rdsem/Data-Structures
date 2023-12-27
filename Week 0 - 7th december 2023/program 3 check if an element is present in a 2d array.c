#include <stdio.h>
int check_element(int arr[][10],int r,int c,int ele)
{
    int run,run2;
    for(run=0;run<r;run++)
    {
        for(run2=0;run2<c;run2++)
        {
            if(arr[run][run2]==ele)
                return(1);
        }
    }
    return(0);
}
void main()
{
    int r,c,run,run2,ele;
    printf("Enter the number of rows in the two dimensional array ");
    scanf("%d",&r);
    printf("Enter the number of columns in the two dimensional array ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the two dimensional array\n");
    for(run=0;run<r;run++)
    {
        for(run2=0;run2<c;run2++)
            scanf("%d",&arr[run][run2]);
    }
    printf("Enter the element to search in the array ");
    scanf("%d",&ele);
    if(check_element(arr,r,c,ele))
        printf("The element %d is present in the array",ele);
    else
        printf("The element %d is not present in the array",ele);
}

