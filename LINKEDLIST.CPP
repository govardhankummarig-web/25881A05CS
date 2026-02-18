#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
int main(){
    Node*head=null
    Node*n1=New Node();
    n1->data=10;
    n1->next=null
    head=n1;
    Node*n2=New Node();
    n2->data=20;
    n2->next=Null;
    n1->next=n2;
    Node*n3=New Node();
    n3->data=30;
    n3->next=Null;
    n2->next=n3;
    node*temp=head;
    while(temp!=Null){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}