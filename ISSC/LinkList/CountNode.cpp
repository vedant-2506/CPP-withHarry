#include<iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode*next;

    ListNode() : val(0) , next(nullptr) {}
    ListNode(int x): val(x) ,next(nullptr){}
    ListNode(int x, ListNode*next): val(x) , next(next) {}
};

ListNode* CreateList(){
    ListNode*head = new ListNode(1);
    ListNode*curr = head;

    for(int i=2;i<=10;i++){
        curr->next= new ListNode(i);
        curr = curr->next;
    }
    return head;
}

void PrintNode(ListNode*head){
    ListNode*curr=head;

    while(curr){

        cout<<curr->val<<" ";
        curr=curr->next;
    }

}


int CountNode(ListNode*head){
    ListNode*curr=head;
    int cnt=0;
    while(curr){
        cnt++;
        curr=curr->next;
    }
    return cnt;
}


int main(){
    ListNode*head =CreateList();
    PrintNode(head);

    cout<<"\n";
    //int n = CountNode(head);
    cout<<"Number of node in list is "<<CountNode(head)<<endl;

    return 0;
}