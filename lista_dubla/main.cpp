#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node * next;
    Node * prev;
};

Node * create_node(int data)
{
    Node * r = new Node();
    r->next = NULL;
    r->prev = NULL;
    r->data = data;
    return r;
}

Node * check(Node * head, int pos)
{
    int i = 0;
    if(head == NULL){
        return NULL;
    }else{
        while(head->next != NULL && i < pos){
            head = head->next;
            i++
        }
        if(i == pos){
            return head;
        }else{
            return NULL;
        }
    }
}

void push_first(Node* &head, int data)
{
    Node newNode = create_node(data);
    if(head != NULL){
        newNode->next = head;
        head->prev = newNode;

    }
     head  = newNode;

}

void push_end(Node* &head, int data)
{
    Node newNode = create_node(data);
    if(head == NULL){
        head == newNode;
    }else{
        Node * i = head;
        while(i->next != NULL){
            i = i->next;
        }
        newNode->prev = i;
        i->next = newNode;
    }
}

void del(Node* &head, int pos)
{
    Node * delNode = check(head, pos);
    if(delNode == NULL){
        cout << "The list is empty or the pos is not found\n";
    }else{
        delNode->next->next = delNode->next;
        delNode->next->prev = delNode->prev;
        delete delNode;

    }
}
int main()
{

    return 0;
}
