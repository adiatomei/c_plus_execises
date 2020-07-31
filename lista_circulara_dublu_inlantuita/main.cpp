#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node * next;
    Node * prev;
};

void insert_end(Node** start, int val)
{
    if(*start = NULL)
    {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = newNode->prev = newNode;
        *start = newNode;
        return;
    }

    Node *last = (*start)->prev;

    Node* newNode = new Node;
    newNode->data = val;

    newNode->next = *start;
    (*start)->prev = newNode;
    newNode->prev = last;
    last->next = newNode;
}

void insert_begin(Node** start, int val)
{
    Node *last = (*start)->prev;
    Node *newNode = new Node;
    newNode->data = val;

    newNode->next = *start;
    newNode->prev = last;

    last->next = (*start)->prev = newNode;

}

void insert_after(Node** start, int val1, int val2)
{
    Node* newNode = new Node;
    newNode->data = val1;

    Node *temp = *start;
    while(temp->data != val2)
    {
        temp = temp->next;
    }
    Node *next = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = next;
    next->prev = newNode;
}

void delete_node(Node** start, int key)
{
    if(*start = NULL)
    {
        return;
    }

    Node *curr = *start;
    Node *prev1 = NULL;
    while(curr->data != key)
    {
        if(curr->next == *start)
        {
            cout << "The node it is don t found";
            return;
        }
        prev1 = curr;
        curr = curr->next;
    }

    if(curr->next == *start && prev1 == NULL)
    {
        (*start) == NULL;
         free(curr);
         return;
    }

    if(curr == *start)
    {
        prev1 = (*start)->prev;
        *start = (*start)->next;
        prev1->next = *start;
        (*start)->prev = prev1;
        free(curr);
    }
    else if(curr->next == *start)
    {
        prev1->next = *start;
        (*start)->prev = prev1;
        free(curr);
    }
    else
    {
        Node* temp = curr->next;
        prev1->next = temp;
        temp->prev = prev1;
        free(curr);
    }
}

void print(Node* start)
{
    Node *temp = start;
    while(temp->next != start)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}



int main()
{
    Node *head = NULL;
    insert_end(&head, 50);
    insert_begin(&head, 25);
    insert_after(&head, 2, 25);
    delete_node(&head, 50);
    print(head);
    return 0;
}
