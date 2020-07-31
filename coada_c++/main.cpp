#include <iostream>

using namespace std;

const int MAX = 20;

void push(int arr[], int &n, int data){
    arr[n] = data;
    n++;
}

void pop(int arr[], int &n){
    if(n == 0){
        cout << "The list is empty" << endl;
    }else{
        for(int i = 0; i < n; i++){
            arr[i] = arr[i+1];
        }
        n--;
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

class Node{
public:
    int data;
    Node* next;
};

Node* newNode(int data){
    Node* nodNou = new Node();
    nodNou->data = data;
    nodNou->next = NULL;
    return nodNou;
}

void pushNode(Node* &front, Node* &gear, int data){
    Node* p = newNode(data);
    if(front == NULL){
        front = p;
    }
    if(gear != NULL){
        gear->next = p;
    }
    gear = p;

}

void popNode(Node* &front, Node* &gear){
    if(front == NULL){
        cout << "The list is empty\n";
    }else{
        Node *elemSters = front;
        front = front->next;
        delete elemSters;
    }
}

void display(Node* front){
    while(front != NULL){
        cout << front->data << " ";
        front = front->next;
    }
}

int main()
{
    /*int arr[MAX], n = 0;
    push(arr, n, 25);
    push(arr, n, 40);
    push(arr, n, 41);
    pop(arr, n);
    display(arr, n);*/
    Node* front = NULL;
    Node* gear = NULL;
    pushNode(front, gear, 40);
    pushNode(front, gear, 10);
    pushNode(front, gear, 12);
    popNode(front, gear);
    display(front);
    return 0;
}
