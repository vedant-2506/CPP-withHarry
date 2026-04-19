#include<iostream>
using namespace std;



//creating LL struct
struct node
{
    int data;
    node* next;
};


int main(){
    node *head = new node();  //creating head node 
    
    cout<<"head ="<<head<<endl;

    head->data = 10;          //assine value tod head 
    head->next=NULL;          //assine next value as null 


    cout<<"head->data = "<<head->data<<endl;

    cout<<"head->next = "<<head->next<<endl;
                                                           

    return 0;
}