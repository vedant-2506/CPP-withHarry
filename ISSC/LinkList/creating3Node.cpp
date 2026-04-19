#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

int main(){


    //creating 3 node 
    node *head = new node();
    node *first = new node();
    node *tail = new node();

    //stode addres of ech node and ctratte LL 
    head->next=first;
    first->next=tail;
    tail->next=NULL;

    //give value to node 
    head->data=10;
    first->data=20;
    tail->data=30;

    //with out using whicle loop 
    cout<<"Head node data :"<<head->data<<endl;
    cout<<"First node data :"<<first->data<<endl;
    cout<<"Tail node data :"<<tail->data<<endl;

    cout<<endl;

    //using while loop
    node*curr=head;
    cout<<"Data is :";
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }

    cout<<endl;



    return 0;
}