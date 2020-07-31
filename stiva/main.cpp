#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node();
    head->data = 25;
    head->next = NULL;

    //Alocare secventiala si stergere
    /*int n = 5, elemNou = 23, elemSters;
    int x[10] = {25, 13, 41, 25, 21};
    int sizeX = sizeof(x) / sizeof(x[0]);
    if(n == sizeX){
        cout << "Lista este plina";
    }else{
        n++;
        x[n-1] = elemNou;
    }

    if(n == 0){
        cout << "Stiva este goala";
    }else{
        elemSters = x[n-1];
        n--;
    }

    for(int i = 0; i < n; i++){
        cout << x[i] << " ";
    }*/

    //Alocare inlantuita si stergere
    Node *p = new Node();
    int infoNou = 32;
    int elemSters = 0;
    Node *iter = head;

    if(p != NULL){
        p->next = head;
        p->data = infoNou;
        head = p;
    }else{
        cout << "Ponterul ponteaza spre NULL";
    }

    if(head == NULL){
        cout << "Lista este goala";
    }else{
        elemSters = head->data;
        head = head->next;
    }


    while(iter != NULL){
        cout << iter->data << " ";
        iter = iter->next;
    }

    cout << "\nElementul sters este " << elemSters;


    return 0;
}
