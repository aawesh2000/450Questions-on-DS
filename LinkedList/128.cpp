#include <bits/stdc++.h>
using namespace std;
/*
struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** headref, int new_data){
        //struct Node* head = NULL;

        struct Node* temp = new Node;                               //made a new node
        temp->data = new_data;
        temp->next = (*headref);
        (*headref) = temp;
    }

bool loop(struct Node* h){
    unordered_set<Node*>s;
    while(h!=NULL){
        if(s.find(h) != s.end()){
            return true;
        }
        s.insert(h);
        h = h->next;
    }
    return false;
}

int main(){
    struct Node* head = NULL;
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);
    push(&head, 60);
    push(&head, 70);
    
    head->next->next->next->next = head;
    if (loop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
 
    return 0;
}
*/


struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** headreference, int newData){
    struct Node* temp = new Node;
    temp->data = newData;
    temp->next  = (*headreference);
    *headreference = temp;
}

bool loop(struct Node* h){
    unordered_set<Node*>s;
    while(h != NULL){
        if(s.find(h) != s.end()){
            return true;
        }
        s.insert(h);
    }
    return false;
}

int main(){
    struct Node* head = NULL;                   //empty LL
    //now push elements
    push(&head,20);
    push(&head,30);
    push(&head,40);
    push(&head,50);
    push(&head,60);
    push(&head,70);

    head->next->next->next->next = head;
 
    if (loop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
 
    return 0;
}