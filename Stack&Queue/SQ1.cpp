//stack from LL
//from scratch

#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
node* top = NULL;

bool isEmpty(){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}

void push(int value){
    struct node* temp = new node();
    temp->data = value;
    temp->next = top;
    top = temp;
}

void pop(){
    if(isEmpty()){
        cout<<"Stack Empty";
    }
    node* ptr = top;
    top = top->next;
    delete(ptr);
}

void showTop(){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Element at top is : "<<top->data<<endl ;
    }
}

void display(){
    struct node* ptr;               //ptr le liya node* type ka
    if(isEmpty()){
        cout<<"Stack Empty";
    } 
    else{
        ptr = top;
        cout<<"Stack elements are : ";
        while(ptr != NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
}

int main(){
    push(1);
    push(2);
    push(4);
    push(5);
    push(6);
    display();
    showTop();
    pop();
    pop();
    display();
    showTop();
}