#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

//Push function

void push(Node **headRef, int data)
{
    Node *ptr1 = new Node();
    Node *temp = *headRef;
    ptr1->data = data;
    ptr1->next = *headRef;

    if(*headRef != NULL)
    {
        while(temp->next != *headRef)
        {
            temp = temp->next;

        }
        temp->next = ptr1;
    }
    else
    {
        ptr1->next = ptr1;

    }
    *headRef = ptr1;
}

//Delete function

void deleteNode(Node** head, int key)
{
    if(*head == NULL)
    {
        return;
    }
    if((*head)->data == key && (*head)->next == *head)
    {
        free(*head);
        *head = NULL;
    }

    Node *last = *head, *d;

    if((*head)->data == key) {
        while(last->next != *head)
        {
            last = last->next;
        }
        last->next = (*head)->next;
        free(*head);
        *head = last->next;
    }

    while(last->next != (*head) && last->next->data != key)
    {
        last = last->next;
    }

    if(last->next->data == key)
    {
        d = last->next;
        last->next = d->next;
        free(d);
    }
    else
    {
        cout << "The key is not found in the list." << endl;
    }


}

//Print function

void print(Node *head)
{
    Node *temp = head;
    if(head != NULL)
    {
        do
        {
            cout << temp->data << endl;
            temp = temp->next;
        }while(temp != head);
    }
}

int main()
{
    Node *head = NULL;

    push(&head, 12);
    push(&head, 25);
    deleteNode(&head, 12);


    print(head);
    return 0;
}
