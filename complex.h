//复数
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include "object.h"  
using namespace std; 

class Complex:public Object
{
      //类型信息 
      double real,imag;
      
      public:
          Complex(double a,double b); 
          void add(Object *b);
          void sub(Object *b); 
          void mul(Object *b);
          void div(Object *b);
          double getValue1();
          double getValue2(); 
};

#endif 
