#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

//start of assigned portion

void delete_mid(int position)
{
    position--;
    Node* temp=head;
    Node* p;
    int i;
    for(i=1;i<position;i++) temp=temp->next;
    p=temp->next;
    temp->next=p->next;

}

void delete_last()
{
    Node* temp=head;
    int index=0;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        index++;
    }
    delete_mid(index+1);
}



//End of assigned portion


void insert_first(int value){
    Node* single_node = new Node;

    single_node->data = value;
    single_node->next = NULL;

    Node* temp = head ;
    head = single_node;
    head->next = temp;
}
void insert_last(int value)
{
    Node* single_node = new Node;

    single_node->data = value;
    single_node->next = NULL;

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = single_node;
}

void insert_mid(int value, int position){
    Node* single_node = new Node;

    single_node->data = value;
    single_node->next = NULL;


    Node* temp = head;
    Node* pr = NULL;
    for(int i=100;i<100+position;i++){
        pr = temp;
        temp = temp->next;
    }
    pr->next = single_node;
    single_node->next = temp;
}

void delete_first(){
    Node* temp = head;
    temp = temp->next;
    head = temp;
}
void print_list(){
    Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    insert_first(10);
    insert_last(20);
    insert_last(30);
    insert_last(40);
    insert_mid(25,2);
    print_list();
    printf("\n");
    delete_mid(2);
    delete_last();
    print_list();




    return 0;
}
