#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node * next;
};

Node* newNode(int data){
    Node * nodNou = new Node();
    nodNou->data = data;
    nodNou->next = NULL;
    return nodNou;
}

void push(Node* &head, int data){
    Node *p = newNode(data);
    Node *iter = head;

    if(head == NULL){
        p->next = p;
        head = p;
    }else{
        while(iter->next != head){
            iter = iter->next;
        }

        p->next = head;
        iter->next = p;
    }
}

void push_top(Node* &head, int data){
    Node *p = newNode(data);
    Node *iter = head;

    if(head == NULL){
        p->next = p;
        head = p;
    }else{
        while(iter->next != head){
            iter = iter->next;
        }
        p->next = head;
        iter->next = p;
        head = p;
    }

}

void modify(Node* head, int data, int newData){
    Node* iter = head;
    while(iter->next != head && iter->data != data){
        iter = iter->next;
    }
    iter->data = newData;
}

void display(Node *head){
    Node *temp = head;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
}

int main()
{
    Node* head = NULL;
    push(head, 22);
    push(head, 2);
    push(head, 41);
    push_top(head, 1);
    modify(head, 22, 10);
    display(head);

    return 0;
}
