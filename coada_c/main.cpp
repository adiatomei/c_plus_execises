#include <iostream>

using namespace std;

/*const int MAX = 10;

void push(int r[], int &i, int data)
{
    if(i == MAX-1){
        cout << "The queue is full\n";
    }else{
        r[i] = data;
        i++;

    }


}

void pop(int r[], int &i)
{
    for(int j = 0; j < i-1; j++){
        r[j] = r[j+1];
    }
    i--;
}

void display(int r[], int i)
{
    for(int j = 0; j < i; j++){
        cout << r[j] << endl;

    }
}*/

class Node
{
public:
    int data;
    Node * next;
};

Node * create_node(int newData)
{
    Node * r = new Node();
    r->data = newData;
    r->next = NULL;
    return r;
}

void push(Node* &fr, Node* &rear, int data)
{
    Node * newNode = create_node(data);
    if(fr == NULL){
        fr = newNode;
    }
    if(rear == NULL){
        rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }

}

void pop(Node* &fr, Node* &rear)
{
    Node * deleteNod = fr;
    if(fr == NULL){
        cout << "The queue is NULL.\n";
    }else if(fr->next == NULL){
        fr = NULL;
        rear = NULL;
    }else{
        fr = fr->next;
    }
    delete deleteNod;
}

void display(Node * fr)
{
    while(fr != NULL){
        cout << fr->data << endl;
        fr = fr->next;
    }
}



int main()
{

    // Alocare inlantuita

    Node * f = NULL;
    Node * r = NULL;
    push(f, r, 25);
    push(f, r, 2);
    push(f, r, 22);
    pop(f, r);
    pop(f, r);
    pop(f, r);
    pop(f, r);
    display(f);

    // Alocare secventiala coada
   /* int num = 0;
    int n[MAX];
    push(n, num, 12);
    push(n, num, 15);
    push(n, num, 18);
    pop(n, num);
    display(n, num);*/

    return 0;
}
