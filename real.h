//ʵ��
#ifndef REAL_H_ 
#define REAL_H_

#include "object.h" 
#include <string> 

using namespace std; 

class Real:public Object
{
      //������Ϣ 
      double num;
      
      public:
          Real(double a); 
          void add(Object *b);
          void sub(Object *b); 
          void mul(Object *b);
          void div(Object *b);
          double getValue(); 
          void changeValue(double c); 
};
 
#endif 
 
