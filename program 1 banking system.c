#include <stdio.h>
#include <string.h>
struct customer
{
    char acc_no[20];
    char name[30];
    int balance;
};
void create_account(struct customer cust[],int n)
{
    printf("ENTER THE CUSTOMER NAME ");
    scanf(" %[^\n]",cust[n-1].name);
    printf("ENTER THE ACCOUNT NUMBER ");
    scanf("%s",cust[n-1].acc_no);
    printf("YOU MUST DEPOSIT A MINIMUM BALANCE OF 500 RUPEES ");
    cust[n-1].balance=500;
}
void withdraw(struct customer cust[],int n)
{
    char acc_no[20];
    int run,amount;
    printf("ENTER THE ACCOUNT NUMBER OF THE ACCOUNT TO WITHDRAW FROM ");
    scanf("%s",acc_no);
    printf("ENTER THE AMOUNT TO WITHDRAW ");
    scanf("%d",&amount);
    for(run=0;run<n;run++)
    {
        if(strcmp(cust[run].acc_no,acc_no)==0)
        {
            if(cust[run].balance<amount)
                printf("BALANCE IS TOO LESS. CANNOT WITHDRAW");
            else
            {
                cust[run].balance-=amount;
                printf("AMOUNT %d WITHDRAWN SUCCESSFULLY FROM ACCOUNT NUMBER %s",amount,acc_no);
            }
            break;
        }
    }
    if(run==n)
        printf("THE ACCOUNT WITH ACCOUNT NUMBER %s DOES NOT EXIST",acc_no);
}
void deposit(struct customer cust[],int n)
{
    char acc_no[20];
    int run,amount;
    printf("ENTER THE ACCOUNT NUMBER OF THE ACCOUNT TO DEPOSIT TO ");
    scanf("%s",acc_no);
    printf("ENTER THE AMOUNT TO DEPOSIT ");
    scanf("%d",&amount);
    for(run=0;run<n;run++)
    {
        if(strcmp(cust[run].acc_no,acc_no)==0)
        {
            cust[run].balance+=amount;
            printf("AMOUNT %d DEPOSITED SUCCESSFULLY TO ACCOUNT NUMBER %s",amount,acc_no);
            break;
        }
    }
    if(run==n)
        printf("THE ACCOUNT WITH ACCOUNT NUMBER %s DOES NOT EXIST",acc_no);
}
void view_balance(struct customer cust[],int n)
{
    char acc_no[20];
    int run;
    printf("ENTER THE ACCOUNT NUMBER OF THE ACCOUNT TO VIEW THE BALANCE ");
    scanf("%s",acc_no);
    for(run=0;run<n;run++)
    {
        if(strcmp(cust[run].acc_no,acc_no)==0)
        {
            printf("\n\nACCOUNT NUMBER : %s\n",cust[run].acc_no);
            printf("NAME : %s\n",cust[run].name);
            printf("BALANCE : %d\n",cust[run].balance);
            break;
        }
    }
    if(run==n)
        printf("THE ACCOUNT WITH ACCOUNT NUMBER %s DOES NOT EXIST",acc_no);
}
void main()
{
    int custno=0;
    while(1)
    {
        int ch;
        struct customer cust[50];
        printf("ENTER 1 TO CREATE ACCOUNT, 2 TO WITHDRAW, 3 TO DEPOSIT, 4 FOR BALANCE ENQUIRY AND 5 TO EXIT\n");
        scanf("%d",&ch);
        printf("\n....................................................................\n");
        if(ch==1)
        {
            custno+=1;
            create_account(cust,custno);
        }
        else if(ch==2)
            withdraw(cust,custno);
        else if(ch==3)
            deposit(cust,custno);
        else if(ch==4)
            view_balance(cust,custno);
        else if(ch==5)
        {
            printf("THANK YOU\n");
            break;
        }
        else
            printf("INVALID CHARACTER\n");
        printf("\n....................................................................\n\n");
    }
}
