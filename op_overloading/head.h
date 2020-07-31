#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>

using namespace std;

class Roman{
  public:
    string name;
    Roman();
    Roman(string newName);
    Roman operator+(Roman &obj){
      Roman res;
      res.name=this->name+obj.name;
      return res;
    }
};



#endif // HEAD_H_INCLUDED
