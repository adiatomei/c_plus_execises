#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node* prev;
};

Node* newNode(int data){
    Node* nodNou = new Node();
    nodNou->data = data;
    nodNou->prev = NULL;
    return nodNou;
};

void push(Node* &top, int data){
    if(top == NULL){
        top = newNode(data);
    }else{
        Node* p = newNode(data);
        p->prev = top;
        top = p;
    }
}

void pop(Node* &top){
    Node* stersNode = top;
    top = top->prev;
    delete stersNode;
}

void display(Node* top){
    while(top != NULL){
        cout << top->data << " ";
        top = top->prev;
    }
}

int main()
{
    Node* top = NULL;
    push(top, 21);
    push(top, 20);
    pop(top);
    display(top);
    return 0;
}
