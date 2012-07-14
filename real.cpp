//สตสýสตฯึ
#include "real.h" 
#include "rational.h" 
#include "integer.h" 
#include <string> 
#include <iostream> 

Real::Real(double a=0.0):Object("Real"),num(a) 
{
} 
double Real::getValue()
{
    return num; 
} 
void Real::changeValue(double c)
{
     num = c; 
} 
void Real::add(Object *b)
{
     if(b->getType() == "Real")
     {
         Real *c = (Real *)b; 
         this->num +=  c->getValue(); 
     } 
     else if(b->getType() == "Rational")
     {
         Rational *c = (Rational *)b; 
         this->num += (double)(c->getValue1())/(c->getValue2()); 
     } 
     else if(b->getType() == "Integer")
     {
          //Integer->Rational
          Rational *c = (Rational *)new Rational(0,1);
          Integer *d = (Integer *)b;
          c->changeValue1(d->getValue());
          this->add(c);  //ตÝน้ 
          delete c; 
     } 
     else
     {
         cerr << "Error calcution"  << endl; 
     } 
} 
void Real::sub(Object *b)
{
     if(b->getType() == "Real")
     {
         Real *c = (Real *)b; 
         this->num -=  c->getValue(); 
     } 
     else if(b->getType() == "Rational")
     {
         Rational *c = (Rational *)b; 
         this->num -= (double)(c->getValue1())/(c->getValue2()); 
     } 
     else if(b->getType() == "Integer")
     {
          //Integer->Rational
          Rational *c = (Rational *)new Rational(0,1);
          Integer *d = (Integer *)b;
          c->changeValue1(d->getValue());
          this->sub(c);  //ตÝน้ 
          delete c; 
     } 
     else
     {
         cerr << "Error calcution"  << endl; 
     } 
}
void Real::mul(Object *b)
{
     if(b->getType() == "Real")
     {
         Real *c = (Real *)b; 
         this->num *=  c->getValue(); 
     } 
     else if(b->getType() == "Rational")
     {
         Rational *c = (Rational *)b; 
         this->num *= (double)(c->getValue1())/(c->getValue2()); 
     } 
     else if(b->getType() == "Integer")
     {
          //Integer->Rational
          Rational *c = (Rational *)new Rational(0,1);
          Integer *d = (Integer *)b;
          c->changeValue1(d->getValue());
          this->mul(c);  //ตÝน้ 
          delete c; 
     } 
     else
     {
         cerr << "Error calcution"  << endl; 
     } 
}
void Real::div(Object *b)
{
     if(b->getType() == "Real")
     {
         Real *c = (Real *)b; 
         this->num /=  c->getValue(); 
     } 
     else if(b->getType() == "Rational")
     {
         Rational *c = (Rational *)b; 
         this->num /= (double)(c->getValue1())/(c->getValue2()); 
     } 
     else if(b->getType() == "Integer")
     {
          //Integer->Rational
          Rational *c = (Rational *)new Rational(0,1);
          Integer *d = (Integer *)b;
          c->changeValue1(d->getValue());
          this->div(c);  //ตÝน้ 
          delete c; 
     } 
     else
     {
         cerr << "Error calcution"  << endl; 
     } 
} 
