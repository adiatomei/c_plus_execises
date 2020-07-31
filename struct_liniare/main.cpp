#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node * next;
};

void display(Node * p)
{

    while(p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }

}

Node * create_node(int data)
{
    Node * p = new Node();
    p->data = data;
    p->next = NULL;
    return p;
}

void insert_first(Node* &head, int data)
{
    Node * r = create_node(data);
    if(head == NULL){
       head = r;
    }else{
        r->next = head;
        head = r;
    }

}

void insert_after(Node* &head, int data, int afterNode)
{
    Node * g = create_node(data);
    if(head == NULL){
        head = g;
    }else{
        Node *iter = head;
        while(iter->next != NULL && iter->data != data)
        {
            iter = iter->next;
        }
        if(iter->next == NULL){
            iter->next = g;

        }else{
            g->next = iter->next;
            iter->next = g;

        }


    }
}

void insert_end(Node* &head, int data)
{
    Node * i = create_node(data);
    if(head == NULL){
        head = i;
    }else{
        Node * iter = head;
        while(iter->next != NULL){
            iter = iter->next;
        }
        iter->next = i;
    }
}

void update(Node* head, int pos, int newData)
{
    if(head == NULL){
        cout << "The list it is NULL";
    }else{
        int iter = 0;
        while(head->next != NULL && iter < pos){
            head = head->next;
            iter++;
        }
        if(iter == pos){
            head->data = newData;
        }else{
            cout << "The position not found.\n";
        }
    }
}

void delet(Node* &head, int pos)
{
    if(head == NULL){
        cout << "The list it is NULL";
    }else{
        Node * prevNode = head;
        int iter = 0;
        while(prevNode->next != NULL && iter < pos-1){
            prevNode = prevNode->next;
            iter++;
        }
        if(iter == pos-1){
            if(pos == 0){
                delete head;
            }else if(prevNode->next == NULL){
                cout << "No such node found.\n";
            }else if(prevNode->next->next == NULL){
                Node * deleteNode = prevNode->next;
                cout << "The node delete value " << deleteNode->data << endl;
                prevNode->next = NULL;
                delete deleteNode;
            }else{
                Node * deleteNode = prevNode->next;
                cout << "The node delete value " << deleteNode->data << endl;
                prevNode->next = prevNode->next->next;
                delete deleteNode;
            }
        }else{
            cout << "The position not found.\n";
        }

    }
}


int main()
{
    Node * head = NULL;
    insert_first(head, 32);
    insert_first(head, 42);
    insert_after(head, 10, 1);
    insert_end(head, 100);
    update(head, 1, 50);
    delet(head, 2);
    display(head);


    return 0;
}
