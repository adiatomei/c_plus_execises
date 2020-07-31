#include <iostream>

using namespace std;
class Node
{
    public:
      int data;
      Node* next;
      Node* prev;
};

//Insert functions

void push(Node** headRef, int newData)
{
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = (*headRef);
    newNode->prev = NULL;

    if((*headRef) != NULL)
    {
        (*headRef)->prev = newNode;
    }

    *headRef = newNode;
}

void insertAfter(Node* prevNode, int newData)
{
    if(prevNode == NULL)
    {
        cout << "The node you gived it is NULL";
    }

    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    newNode->prev = prevNode;
    if(newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
}

void append(Node** headRef, int newData)
{
    Node* newNode = new Node;
    Node* last = *headRef;
    newNode->data = newData;
    newNode->next = NULL;

    if(*headRef == NULL)
    {
        newNode->prev = NULL;
        *headRef = newNode;
        return;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }

    last->next = newNode;
    newNode->prev = last;

    return;
}
void insertBefore(Node** headRef, Node* nextNode, int newData)
{
    if(nextNode == NULL)
    {
        cout << "The node it is null";
    }

    Node* newNode = new Node;
    newNode->data = newData;
    newNode->prev = nextNode->prev;
    nextNode->prev = newNode;
    newNode->next = nextNode;

    if(newNode->prev != NULL)
    {
        newNode->prev->next = newNode;
    }else
    {
        *headRef = newNode;
    }


}

// Delete function

void deleteNode(Node** headRef, Node* del)
{
    if(*headRef == NULL || del ==NULL){
        return;
    }
    if(*headRef == del){
        *headRef = del->next;
    }
    if(del->next != NULL){
        del->next->prev = del->prev;
    }
    if(del->prev != NULL){
        del->prev->next = del->next;
    }
    free(del);
    return;
}

//Size function

int sizeNode(Node* node)
{
    int num = 0;
    while(node != NULL)
    {
        num++;
        node = node->next;
    }
    return num;
}

//Print function


void print(Node* node)
{
    Node* last = NULL;
    while(node != NULL)
    {
        cout << node->data << endl;
        last = node;
        node = node->next;
    }
}


int main()
{
    Node* head = new Node;
    Node* second = new Node;

    head->data = 40;
    head->next = second;
    head->prev = NULL;

    second->data = 50;
    second->next = NULL;
    second->prev = head;

    insertAfter(head->next, 10);
    push(&head, 25);
    append(&head, 13);
    deleteNode(&head, head->next->next);


    cout << "The size of the linked list is " << sizeNode(head) << endl;
    print(head);
    return 0;
}
