#include <iostream>

const int MAX = 25;

using namespace std;
class Node{
public:
    int data;
    Node* next;
};

void insertFirst(Node* &head, int val){
    Node *p = new Node();
    p->data = val;
    if(head == NULL){
        p->next = NULL;
        head = p;
    }
    p->next = head;
    head = p;
}

void insertLast(Node* &head, int val){
    Node *r = new Node();
    Node *iter = head;
    r->data = val;
    r->next = NULL;
    if(head == NULL){
        head = r;
    }else{
        while(iter->next != NULL){
            iter = iter->next;
        }
        iter->next = r;
    }

}

void insertAfter(Node* &head, int pos, int val){
    Node *t = new Node();
    t->data = val;
    Node* after = head;
    int i = 0;
    while(after->next != NULL && i < pos){
            after = after->next;
            i++;
    }
    if(head == NULL){
        t->next = NULL;
        head = t;
    }else if(after->next != NULL){
        t->next = after->next;
        after->next = t;
    }else if(after->next == NULL){
        t->next = NULL;
        after->next = t;
    }

}

void display(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

void stergereElem(Node* &head, int pos){
    Node *pred = head;

    if(head == NULL){
        cout << "The list is empty";
    }else{
        int i = 0;
        while(pred->next != NULL && i < pos-1){
            pred = pred->next;
            i++;
        }
        Node *elemSters = pred->next;
        pred->next = pred->next->next;
        delete elemSters;

    }
}

void push(int arr[], int &top, int val){
    if(0 == MAX-1){
        cout << "The list it is full";
    }else{
       arr[top] = val;
       top++;
    }

}

void pop(int &top){
    top -= 1;
}



void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}



int main()
{
    //Lista simplu inlantuita
    /*Node *head = NULL;
    insertLast(head, 40);
    insertAfter(head, 2, 25);
    insertAfter(head, 0, 20);
    insertAfter(head, 1, 2);
    insertAfter(head, 1, 22);
    stergereElem(head, 1);
    display(head);*/
    //Lista cu alocare secventiala;
    int arr[25];
    int top = 0;
    push(arr, top, 12);
    push(arr, top, 10);
    push(arr, top, 9);
    pop(top);
    display(arr, top);
    return 0;
}
