//有理数
#ifndef RATIONAL_H_
#define RATIONAL_H_
#include <string> 
#include "object.h" 
using namespace std; 

class Rational:public Object 
{
      //类型信息 
      int numerator; 
      int denominator;
      
      public:
          Rational(int a,int b);
          ~Rational(); 
          void add(Object *b);
          void sub(Object *b); 
          void mul(Object *b);
          void div(Object *b); 
          int getValue1();
          int getValue2();
          void changeValue1(int a);
          void changeValue2(int a); 
};

#endif
