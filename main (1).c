/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
# include<stdio.h>
# include<stdlib.h>
# define SIZE 5
int top;
int item;
int s[SIZE];
int push()
{
    if(top==SIZE-1)
    {
        printf("Stack overflow\n");
        return 0;
    }
    s[++top]=item;
}
int pop()
{
    if(top==-1)
    {
        printf("stack is empty");
        return 0;
    }
    int item_delete=s[top];
    
    top--;
}
void display()
{
    int i;
     printf("The elements of the stack are:");
     for(i=0;i<=top;i++)
     {
         printf("%d\n",s[i]);
     }
}
int main()
{   
    top=-1;
    printf("Select option\n 1 : push\n2 : pop\n3 : display\n4 : exit");
    int choice ;
    scanf("%d",&choice);
    do{
    
    switch(choice)
    {
        case 1 :
                printf("Enter the item to enter\n");
                scanf("%d",&item);
                push();
                break;
        case 2 :
                pop();
                break;
        case 3 :
                display();
                break;
        default:
                exit(0);
            
    }
    }
    while(choice!=4);
    return 0;
}