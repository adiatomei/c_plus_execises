#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node * next;
};

Node * create_node(int data)
{
    Node * r = new Node();
    r->data = data;
    r->next = NULL;
    return r;
}

void include_first(Node* &head, int data)
{
    Node *newNode = create_node(data);
    Node *ire = head;
    if(head == NULL){
        newNode->next = newNode;
    }else{
        while(ire->next != head){
            ire = ire->next;
        }
        ire->next = newNode;
        newNode->next = head;

    }
    head = newNode;
}

void include_end(Node* &head, int data)
{
    Node *newNode = create_node(data);
    Node *ire = head;
    if(head == NULL){
        newNode->next = head;
        head = newNode;
    }else{
        while(ire->next != head){
            ire = ire->next;
        }
        ire->next = newNode;
        newNode->next = head;
    }
}

void delete_pos(Node* &head, int pos)
{
    if(head == NULL){
        cout << "The list it is empty";
    }else if(pos == 0){
        Node * deleteNod = head;
        head = NULL;
        delete deleteNod;
    }else{
        int i = 0;
        Node * prevNo = head;
        while(prevNo->next != head && i < pos-1){
            prevNo = prevNo->next;
            i++;
        }
        Node * deleNode = prevNo->next;
        prevNo->next = deleNode->next;
        delete deleNode;

    }
}

void display(Node * head)
{
    Node *ire = head;

    do{
        cout << ire->data << endl;
        ire = ire->next;
    }while(ire != head);

}
int main()
{
    Node * head = NULL;
    include_first(head, 25);
    include_first(head, 28);
    include_end(head, 40);
    include_end(head, 55);
    delete_pos(head, 1);
    display(head);
    return 0;
}
