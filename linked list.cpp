#include<bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    Node *next;
};

///PRINT
void printList(Node* head)
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
///DELETE
void deleteList(Node* head)
{
    Node* temp, *temp2;
    temp=head;
    temp2=temp;
    while(temp!=NULL)
    {
        temp=temp->next;
         temp2=temp;
    }
    temp2->next=NULL;
}


int main()
{
    int x;
    cin>>x;
    Node *head, *t, *newNode;
    newNode= new Node;
    newNode->data=x;
    t=newNode;
    t->next=NULL;
    head=newNode;
    cin>>x;
    while(x!=666)
    {
        newNode= new Node;
        newNode->data=x;
        t->next=newNode;
        t=newNode;
        t->next=NULL;
        cin>>x;
    }

    printList(head);
    deleteList(head);
    printList(head);





    return 0;
}












