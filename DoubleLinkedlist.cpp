#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*prev;
    Node*next;
};
int main(){
    node*head=Null;
    Node*n1=New Node();
    n2->data=20;
    n2->prev=n1;
    n2->next=Null;
    n1->next=n2;
    Node*n3=New Node();
    n3->data=30;
    n3->prev=n2;
    n3->next=Null;
    n2->next=n3;
    cout<<"forward";
    Node*temp=head;
    while(temp!=Null){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
