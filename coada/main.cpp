#include <iostream>

using namespace std;

class Queue {
    private:
        int myQueue[100];
        int head;
        int tail;
    public:
        Queue()
        {
            head = -1;
            tail = -1;
        }

        bool isFull(){
            if(head == 0 && tail == sizeof(myQueue) / sizeof(myQueue[0]) - 1){
                return true;
            }else{
                return false;
            }
        }

        bool isEmpty(){
            if(head == -1 && tail == -1){
                return true;
            }else{
                return false;
            }
        }

        void enQueue(int val){
            if(isFull()){
                cout << "Coada este plina!\n";
            }else{
                if(head == -1){
                    head = 0;
                }
                tail++;
                myQueue[tail] = val;
            }

        }

        void deQueue(){
            if(isEmpty()){
                cout << "Coada este goala!\n";
            }else{
                if(head >= tail){

                    head = -1;
                    tail = -1;
                }else{
                    head++;
                }
            }
        }

        void displayQueue(){
            if(isEmpty()){
                cout << "Coada este goala!\n";
            }else{
                for(int i = head; i <= tail; i++){
                    cout << myQueue[i] << endl;
                }
            }
        }
};

int main()
{
    Queue note;
    note.enQueue(10);
    note.enQueue(8);
    note.enQueue(5);
    note.deQueue();

    if(note.isEmpty()){
        cout << "Coada este goala\n";
    }else{
        cout << "Coada nu este goala\n";
    }

    if(note.isFull()){
        cout << "Coada este plina\n";
    }else{
        cout << "Coada nu este plina\n";
    }
    cout << "Notele sunt:\n";
    note.displayQueue();
    return 0;
}
