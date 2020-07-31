#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>

using namespace std;
template <class T>

class Song{
  public:
    Song(T newMoney);
    T get_money();
  private:

    T money;
};

template <>
class Song<string> {
  public:
    Song(string newMoney)
: money(newMoney)
{
    cout << "You inserted a numerical string: ";
};
string get_money(){
    return money;
};
  private:
    string money;
};





template <class T>
Song<T>::Song(T newMoney)
: money(newMoney)
{

};

template <class T>
T Song<T>::get_money() {
  return money;
}


#endif // HEAD_H_INCLUDED
