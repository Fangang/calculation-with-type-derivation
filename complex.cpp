//复数实现 
#include "real.h" 
#include "rational.h" 
#include "integer.h" 
#include "complex.h"
#include <iostream> 
#include <string> 

double square(double x) 
{
    return x*x; 
} 

Complex::Complex(double a=0.0,double b=0.0):Object("Complex"),real(a),imag(b)
{
    cout << square(2) << endl; 
}
double Complex::getValue1()
{
    return real; 
} 
double Complex::getValue2()
{
    return imag; 
} 
void Complex::add(Object *b)
{
     if(b->getType() == "Complex")
     {
         Complex *c = (Complex *)b; 
         this->real += c->getValue1();
         this->imag += c->getValue2(); 
     } 
     else if(b->getType() == "Real") 
     {
          Real *c = (Real *)b;
          this->real += c->getValue(); 
     }
     else if(b->getType() == "Rational")
     {
          //Rational->Real 
          Real *c = (Real *)new Real(0.0);//这种垃圾如何回收？ 
          Rational *d = (Rational *)b; 
          c->changeValue((double)(d->getValue1())/(d->getValue2()));  
          this->add(c); //递归 
          delete c;          //这里回收挖~ 
     }
     else if(b->getType() == "Integer")
     {
          //Integer->Rational
          Rational *c = (Rational *)new Rational(0,1);
          Integer *d = (Integer *)b;
          c->changeValue1(d->getValue());
          this->add(c);  //递归 
          delete c; 
     } 
     else
     {
         cerr << "Error calcution"  << endl; 
     } 
} 
void Complex::sub(Object *b)
{
     if(b->getType() == "Complex")
     {
         Complex *c = (Complex *)b; 
         this->real -= c->getValue1();
         this->imag -= c->getValue2(); 
     } 
     else if(b->getType() == "Real") 
     {
          Real *c = (Real *)b;
          this->real -= c->getValue(); 
     }
     else if(b->getType() == "Rational")
     {
          //Rational->Real 
          Real *c = (Real *)new Real(0.0);//这种垃圾如何回收？ 
          Rational *d = (Rational *)b; 
          c->changeValue((double)(d->getValue1())/(d->getValue2()));  
          this->add(c); //递归 
          delete c;          //这里回收挖~ 
     }
     else if(b->getType() == "Integer")
     {
          //Integer->Rational
          Rational *c = (Rational *)new Rational(0,1);
          Integer *d = (Integer *)b;
          c->changeValue1(d->getValue());
          this->add(c);  //递归 
          delete c; 
     } 
     else
     {
         cerr << "Error calcution"  << endl; 
     } 
}
void Complex::mul(Object *b)
{
     if(b->getType() == "Complex")
     {
         Complex *c = (Complex *)b; 
         this->real = (this->real)*(c->getValue1())-(this->imag)*(c->getValue2());
         this->imag = (this->real)*(c->getValue2())+(this->imag)*(c->getValue1()); 
     } 
     else if(b->getType() == "Real") 
     {
          Real *c = (Real *)b;
          this->real *= c->getValue(); 
          this->imag *= c->getValue(); 
     }
     else if(b->getType() == "Rational")
     {
          //Rational->Real 
          Real *c = (Real *)new Real(0.0);//这种垃圾如何回收？ 
          Rational *d = (Rational *)b; 
          c->changeValue((double)(d->getValue1())/(d->getValue2()));  
          this->mul(c); //递归 
          delete c;          //这里回收挖~ 
     }
     else if(b->getType() == "Integer")
     {
          //Integer->Rational
          Rational *c = (Rational *)new Rational(0,1);
          Integer *d = (Integer *)b;
          c->changeValue1(d->getValue());
          this->mul(c);  //递归 
          delete c; 
     } 
     else
     {
         cerr << "Error calcution"  << endl; 
     } 
}
void Complex::div(Object *b)
{
     if(b->getType() == "Complex")
     {
         Complex *c = (Complex *)b; 
         this->real = ((this->real)*(c->getValue1())+(this->imag)*(c->getValue2()))/(square(c->getValue1())+square(c->getValue2()));
         this->imag = (this->imag)*(c->getValue1())-(this->real)*(c->getValue2()); 
     } 
     else if(b->getType() == "Real") 
     {
          Real *c = (Real *)b;
          this->real /= c->getValue(); 
          this->imag /= c->getValue();
     }
     else if(b->getType() == "Rational")
     {
          //Rational->Real 
          Real *c = (Real *)new Real(0.0);//这种垃圾如何回收？ 
          Rational *d = (Rational *)b; 
          c->changeValue((double)(d->getValue1())/(d->getValue2()));  
          this->div(c); //递归 
          delete c;          //这里回收挖~ 
     }
     else if(b->getType() == "Integer")
     {
          //Integer->Rational
          Rational *c = (Rational *)new Rational(0,1);
          Integer *d = (Integer *)b;
          c->changeValue1(d->getValue());
          this->div(c);  //递归 
          delete c; 
     } 
     else
     {
         cerr << "Error calcution"  << endl; 
     } 
} 
