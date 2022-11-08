#include<stdio.h>
#define maxsize 10

int stack[maxsize],top=-1;

voidpush();
voidpop();
voiddisplay();

void main()
{
    int A;
    do
    {
        printf("\n------------stack------------");
        printf("\npress 1 for push:");
        printf("\npress 2 for pop:");
        printf("\npress 3 for display");
        printf("\npress 4 for exit");

        printf("\nEnter your choice :");
        scanf("%d",&A);

        switch(A)
        {
        case 1: push();break;
        case 2: pop();break;
        case 3: display();break;
        case 4: break;
        default:printf("\nInvalid choice :[");
        }
    } while (A=!4);

    voidpush()
    {
        int n;
        if(top==maxsize-1)
        printf("\nstack overflow :[");
        else
        {
            printf("\nEnter a value :");
            secnf("%d",&n);
            top++;
            stack[top]=n;
        }
    }
    voidpop()
    {
        if(top==1)
        printf("\nstack underflow");
        else
        {
            printf("\nDeleted data =%d",stack[top]);
            top--;
        }
    }
    voiddisplay()
    {
        int i;
        if(top==1)
        printf("\nstack underflow");
        else
        {
            printf("\n");
            for(i=0;i<=top;i++)
            {
                printf("%d",stack[i]);
            }
            printf("\n");
        }
    }
    return 0;
}