//����
#ifndef INTEGER_H_
#define INTEGER_H_

#include "object.h" 
#include <string> 

using namespace std; 

class Integer: public Object 
{
      //������Ϣ 
      int num;
      
      public:
          Integer(int a); 
          void add(Object *b);
          void sub(Object *b); 
          void mul(Object *b);
          void div(Object *b); 
          int getValue(); 
}; 
#endif 
