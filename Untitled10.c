#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* ptr1=NULL;
struct node* head1=NULL;
struct node* head2=NULL;
struct node* ptr2=NULL;
struct node* ptr3=NULL;
int main()
{
    int i,n,j;
    printf("enter no. of values");
    scanf("%d",&n);
    head1=(struct node*)malloc(sizeof(struct node));
    ptr1=head1;
    for(i=0;i<n;i++)
    {
        printf("enter a value");
        scanf("%d",&j);
        ptr1->data=j;
        if(i==n-1)
        {
            ptr1->next=NULL;
        }
        else
        {
            ptr1->next=(struct node*)malloc(sizeof(struct node));
            ptr1=ptr1->next;
        }
    }
    ptr3=head1;
    i=1,j=1;
    while(ptr3!=NULL)
    {
        if(ptr3->data%2==0)
        {

           if(i==1)
           {
               i--;
                ptr1=ptr3;
                head1=ptr3;
           }
           else{ptr1->next=ptr3;
           ptr1=ptr1->next;
           }
        }
        else
        {
           if(j==1)
           {
               j--;
                ptr2=ptr3;
                head2=ptr3;
           }
           else
           {
               ptr2->next=ptr3;
           ptr2=ptr2->next;
           }

        }

    ptr3=ptr3->next;
    }
ptr1->next=head2;
ptr2->next=NULL;
ptr3=head1;
while(ptr3!=NULL)
{
    printf("%d",ptr3->data);
    ptr3=ptr3->next;
}


    return 0;
}
