#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

Node* newNode(int data){
    Node* p = new Node();
    p->data = data;
    p->next = NULL;
    p->prev = NULL;
}

Node * searchNode(Node * head, int pos){
    int i = 0;

    while(head != NULL && i < pos){
        head = head->next;
        i++;
    }
    if(i == pos){
        return head;
    }else{
        return NULL;
    }
}

void insertEnd(Node* &head, int data){
    Node* r = newNode(data);
    if(head == NULL){
        head = r;
    }else{
       Node * c = head;
       while(c->next != NULL){
            c = c->next;
       }
       r->prev = c;
       c->next = r;
    }
}

void deleteNode(Node* &head, int pos){
    Node * elem = searchNode(head, pos);
    if(pos == 0){
        Node * victima = head;
        head->next->prev = NULL;
        head = head->next;
        delete victima;
    }else if(elem->next ==  NULL){
        elem->prev->next = NULL;
        delete elem;
    }else{

        elem->prev->next = elem->next;
        elem->next->prev = elem->prev;
        delete elem;
    }

}

void display(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

}

int main()
{
    Node * head = NULL;
    insertEnd(head, 12);
    insertEnd(head, 11);
    insertEnd(head, 20);
    deleteNode(head, 2);
    display(head);
    return 0;
}
