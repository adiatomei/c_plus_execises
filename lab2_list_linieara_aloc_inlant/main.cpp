#include <iostream>

using namespace std;

class Node{
public:
    int info;
    Node* next;
};

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->info = 25;
    head->next = second;

    second->info = 35;
    second->next = third;

    third->info = 22;
    third->next = NULL;



    //Accesare/modificare

   /* bool gasit = false;
    Node *iter = head;
    int k = 25;

    while(gasit == false && iter != NULL){
        if(iter->info == k){
            gasit = true;
        }else{
            iter = iter->next;
        }
    }

    if(gasit){
        cout << iter->info << " este prezent in lista";
    }else{
        cout << "Nu exista nici un nod cu informatia pontata";
    }*/

    //Inserare la inceputul listei
   /* int newData = 45;
    Node *newFirst = NULL;
    newFirst = new Node();

    if(newFirst != NULL){
        newFirst->info = newData;
        newFirst->next = head;
        head = newFirst;
    }else{
        cout << "The node it is NULL";
    }*/

    //Inserare la sfarsitul listei
   /* Node *iter = head;
    Node *lastNode = new Node();
    int newData = 30;



    if(lastNode != NULL){

        lastNode->next = NULL;
        lastNode->info = newData;
        while(iter->next != NULL){
            iter = iter->next;
        }
        if(iter == NULL){
            head = lastNode;
        }else{
            iter->next = lastNode;
        }

    }*/



    //Inserarea dupa un nod data;
   /* Node *inainte = head->next;
    Node *pNou = new Node();
    if(head != NULL){
        pNou->info = 33;
        pNou->next = inainte->next;
        inainte->next = pNou;
    }else if(head == NULL){
        cout << "The array it is NULL";
    }*/

    //Eliminarea unui nod data
    int sterge = 35;
    Node *iter = head;
    int infoSters = 0;
    while(iter != NULL && iter->next->info != sterge){
        iter = iter->next;
    }

    if(iter == NULL){
        cout << "Lista este vida" << endl;
    }else{
       infoSters = iter->next->info;
       iter->next = iter->next->next;
    }

   Node *it = head;
    while(it != NULL){
        cout << it->info << " ";
        it = it->next;
    }

    return 0;
}
