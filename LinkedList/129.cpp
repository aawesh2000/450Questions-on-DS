
//remove looop from LL
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** headrefrence, int NewData){
    struct Node* temp = new Node;
    temp->data = NewData;
    temp->next = (*headrefrence);
    (*headrefrence) = temp;
}

void removeLoop(struct Node* loop_node, struct Node* head)
{
    struct Node* ptr1;
    struct Node* ptr2;
    ptr1 = head;
    while(1){
        ptr2 = loop_node;
        while (ptr2->next != loop_node && ptr2->next != ptr1)
            ptr2 = ptr2->next;
 
        if (ptr2->next == ptr1)
            break;
        ptr1 = ptr1->next;
    }
    ptr2->next = NULL;
}

int Loop(struct Node* h){
    struct Node* slowptr = h;
    struct Node* fastptr = h;
    while(slowptr && fastptr && fastptr->next){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;

        if(slowptr == fastptr){
            removeLoop(slowptr, h);

            return 1;
        }
    }
    return 0;
}

void printList(struct Node* node)
{
    // Print the list after loop removal
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main(){
    struct Node* head = NULL;               //create head
    //make LL
    push(&head, 50);
    push(&head, 20);
    push(&head, 15);
    push(&head, 4);
    push(&head, 10);
    
    //push(&head, 70);

    head->next->next->next->next->next = head->next->next;
 
    Loop(head);
 
    cout << "Linked List after removing loop" << endl;
 
    printList(head);
 
    return 0;
}