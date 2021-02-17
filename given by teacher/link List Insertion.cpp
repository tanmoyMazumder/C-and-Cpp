#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    int position,newData,i;
    /// Creating First Node
    Node* Firstnode = new Node;
    Node* newNode= new Node;

    Firstnode->data = 30;
    Firstnode->next = NULL;

    Node* head;
    head = Firstnode;

    Node* temp = head;

    int number_of_data;
    scanf("%d",&number_of_data);
    cin>>Firstnode->data;
    for(int i=1; i<=number_of_data-1; i++)
    {
        int value;
        scanf("%d",&value);

        Node* node_add = new Node;

        node_add->data = value;
        node_add->next = NULL;

        temp->next = node_add;
        temp = temp->next;
    }
    temp = head;

    cout<<"new value and position: ";
    cin>>newData>>position;

    for(i=0; i<position-2; i++) temp=temp->next;

    Node* link=temp->next;
    newNode->data=newData;
    newNode->next=link;
    temp->next=newNode;

    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }


}

