#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void push(Node** headRef, int newData)
{
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = (*headRef);
    (*headRef) = newNode;
}


void insertAfter(Node* prevNode, int newData)
{
    if(prevNode == NULL)
    {
        cout << "The previous node it is NULL";
        return;
    }

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void append(Node* headRef, int newData)
{
    Node* newNode = new Node();
    Node* last = headRef;
    newNode->data = newData;
    newNode->next = NULL;
    if(headRef == NULL)
    {
        headRef = newNode;
        return;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    return;
}

void deleteNode(Node** headRef, int key)
{
    Node* temp = *headRef, *prev;

    if(temp != NULL && temp->data == key)
    {
        *headRef = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        return;
    }else{
        prev->next = temp->next;
        free(temp);
    }
}

void delNodeAtPosition(Node** headRef, int posit)
{
    if(*headRef == NULL)
    {
        cout << "The linked list is empty";
    }

    Node* temp = *headRef;

    if(posit == 0)
    {
        *headRef = temp->next;
        free(temp);
        return;
    }

    for(int i = 0; temp != NULL && i < posit-1; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL){
        return;
    }

    Node *next = temp->next->next;

    free(temp->next);

    temp->next = next;

}

int get_count(Node* head)
{
    int count = 0;
    Node* current = head;
    while(current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

void print_list(Node* n)
{
    while(n != NULL) {
        cout << n->data << endl;
        n = n->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 2;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 8;
    third->next = NULL;

    append(head, 6);
    insertAfter(head->next, 1);
    push(&head, 25);
    deleteNode(&head, 2);
    delNodeAtPosition(&head, 3);

    cout << "The length of the linked list is " << get_count(head) << endl;


    print_list(head);
    return 0;
}
