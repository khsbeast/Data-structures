#include<bits/stdc++.h>
using namespace std;

struct Node{
    int x;
    Node* next;
    Node* prev;
};
Node* head = NULL;
Node* GetNewNode(int y){
    Node* temp = new Node();
    temp->x = y;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}

void Insertathead(int y){
    Node* temp = GetNewNode(y);
    if(head == NULL){
        head=temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

int main()
{

}