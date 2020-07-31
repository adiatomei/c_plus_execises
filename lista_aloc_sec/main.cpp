#include <iostream>

using namespace std;
const int MAX = 10;

/*bool isEmpty(int b){
    if(b == 0){
        return true;
    }else{
        return false;
    }
}

void push(int t[], int &i, int data)
{
    if(i == MAX-1){
        cout << "The list it is full";
    }else{
        t[i] = data;
        i++;
    }
}

void pop(int t[], int &i)
{
    if(i == 0){
        cout << "The is empty";
    }else{
        i--;

    }
}

int peek(int t[], int i){
    return t[i];
}

void display(int t[], int j){
    for(int i = 0; i < j; i++){
        cout << t[i] << ", ";
    }
}*/

class Node
{
public:
    int data;
    Node * prev;
};

Node * create_node(int data)
{
    Node * r = new Node();
    r->data = data;
    r->prev = NULL;
    return r;
}

void push(Node* &top, int data)
{
    Node * newNode = create_node(data);

    if(top == NULL){
        top = newNode;
    }else{
        newNode->prev = top;
        top = newNode;
    }
}

void pop(Node* &top){
    if(top == NULL){
        cout << "The top it is NULL";
    }else if(top->prev == NULL){
        top == NULL;
    }else{
        Node * deleteNode = top;
        cout << "The delete node value: " << deleteNode->data << endl;
        top = top->prev;
        delete deleteNode;
    }
}

void display(Node * top)
{
    while(top != NULL)
    {
        cout << top->data << endl;
        top = top->prev;
    }
}

int main()
{
    Node * top = NULL;
    push(top, 25);
    push(top, 2);
    push(top, 22);
    pop(top);
    display(top);

   /* int a[MAX];
    int n = 0;
    push(a, n, 4);
    push(a, n, 25);
    push(a, n, 3);
    push(a, n, 2);
    pop(a, n);
    display(a, n);*/

    return 0;
}
