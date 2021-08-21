//Reverse LL itrartive only

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

struct linkedlist{
    Node* head;
    linkedlist(){
        head = NULL;
    }

    void reverse(){
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void printList(){
        struct Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void push(int data){
        struct Node* temp = new Node(data);             //made a new node 
        temp->next = head;
        head = temp;
    }

};

int main(){

    linkedlist ll;
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    ll.push(5);

    ll.printList();
    ll.reverse();
    cout<<endl;
    ll.printList();


}