#include <stdio.h>
int last_occurrence(int l[],int num,int length)
{
    int run;
    for(run=length-1;run>=0;run--)
    {
        if(l[run]==num)
            return(run);
    }
    return(-1);
}
void main()
{
    int length,run,num,a;
    printf("Enter the number of elements in the array ");
    scanf("%d",&length);
    int l[20];
    printf("Enter the elements of the array\n");
    for(run=0;run<length;run++)
        scanf("%d",&l[run]);
    printf("Enter the number to search for in the array ");
    scanf("%d",&num);
    a=last_occurrence(l,num,length);
    if(a==-1)
        printf("The number %d is not present in the array",num);
    else
        printf("The number %d occurs last in the index %d",num,a);
}
