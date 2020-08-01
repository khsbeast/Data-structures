// Linked list deletion

#include "bits/stdc++.h"

using namespace std;

struct Node{
    int x;
    Node* next;
};
Node* head = NULL;
void Insert(int xx,int pos)
{
    Node* temp1 = new Node();
    temp1->x = xx;
    //temp1->next=NULL;
    if(pos == 1)
    {
        temp1->next = head;
        head=temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 0;i < pos-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next=temp1; 
}
void Print(){
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->x;
        temp=temp->next;
    }
}
void Delete(int n){
    Node* temp = head;
    if(n==1)
    {
        head=temp->next;
        delete(temp);
        return;
    }
    for(int i = 0;i < n-2;i++)
    temp=temp->next;
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete(temp2);
}
void Reverse(){
    Node* prev,next,current;
    current=head;
    prev = NULL;
    while(current != NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
}
int main(){
    Insert(5,1);
    Insert(6,2);
    Insert(7,3);
    Insert(8,4);
    int n;
    cin >> n;
    Delete(n);
    Print();
}
