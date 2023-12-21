#include <stdio.h>
#define SIZE 30
int stack[SIZE];
int top=-1;
void push()
{
    if(top==SIZE-1)
        printf("Stack overflow.");
    else
    {
        top=top+1;
        printf("Enter the element that you would like to insert into the stack ");
        scanf("%d",&stack[top]);
        printf("The element inserted successfully.");
    }
}
void pop()
{
    if(top==-1)
        printf("Stack underflow.");
    else
    {
        printf("The element %d is popped.",stack[top]);
        top=top-1;
    }
}
void display()
{
    int run;
    if(top==-1)
        printf("Stack underflow.");
    else
    {
        for(run=top;run>=0;run--)
            printf("%d\n",stack[run]);
    }
}
void main()
{
    while(1)
    {
        int ch;
        printf("Enter 1 to push, 2 to pop, 3 to display the elements and 4 to exit ");
        scanf("%d",&ch);
        printf("\n");
        if(ch==1)
            push();
        else if(ch==2)
            pop();
        else if(ch==3)
            display();
        else if(ch==4)
            break;
        else
            printf("Invalid input.");
        printf("\n\n");
    }
}
