#include <iostream>

using namespace std;

class StackObj{
    private:
        int stk[100], n = 100, top = -1;
    public:
        void push(int val){
            if(top >= n-1){
                cout << "Stack overflow" << endl;
            }else{
                top++;
                stk[top] = val;
            }
        }

        void pop() {
            if(top <= -1){
                cout << "Stack underflow" << endl;
            }else{

                cout << "The delete element is " << stk[top] << endl;
                stk[top] = 0;
                top--;
            }
        }

        void display(){
            if(top >= 0){
                int i = top;
                while(i >= 0){
                    cout << stk[i] << endl;
                    i--;
                }
            }else{
                cout << "The stack is empty";
            }
        }

        string isEmpty(){
          return top < 0 ? "true" : "false";
        }
};

int main()
{
    StackObj test;
    test.push(10);
    test.push(20);
    test.push(50);
    test.pop();
    cout << test.isEmpty() << endl;
    test.display();
    return 0;
}
