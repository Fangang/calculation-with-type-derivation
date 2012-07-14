//有理数实现
#include "rational.h" 
#include "integer.h" 
#include <iostream> 
#include <string> 
 
Rational::Rational(int a=0,int b=1):Object("Rational"),numerator(a),denominator(b) 
{
} 
Rational::~Rational()
{
} 
int Rational::getValue1()
{
    return numerator; 
} 
int Rational::getValue2()
{
    return denominator; 
} 
void Rational::changeValue1(int a)
{
     numerator = a; 
} 
void Rational::changeValue2(int a)
{
     denominator = a; 
}
void Rational::add(Object *b)
{
    if(b->getType() == "Rational") 
    {
        Rational *c = (Rational *)b; 
        //注意计算的先后顺序  
        this->numerator = (this->numerator)*(c->getValue2())+(this->denominator)*(c->getValue1()); 
        this->denominator *= c->getValue2();
    }
    else if(b->getType() == "Integer") 
    {
        Integer *c = (Integer *)b;
        this->numerator  += (c->getValue())*(this->denominator); 
    }
    else
    {
        cerr << "Error calcution"  << endl; 
    } 
} 
void Rational::sub(Object *b)
{
    if(b->getType() == "Rational") 
    {
        Rational *c = (Rational *)b; 
        //注意计算的先后顺序  
        this->numerator = (this->numerator)*(c->getValue2())-(this->denominator)*(c->getValue1()); 
        this->denominator *= c->getValue2();
    }
    else if(b->getType() == "Integer") 
    {
        Integer *c = (Integer *)b;
        this->numerator  -= (c->getValue())*(this->denominator); 
    }
    else
    {
        cerr << "Error calcution"  << endl; 
    } 
} 
void Rational::mul(Object *b)
{
    if(b->getType() == "Rational") 
    {
        Rational *c = (Rational *)b; 
        this->numerator *= c->getValue1(); 
        this->denominator *= c->getValue2();
    }
    else if(b->getType() == "Integer") 
    {
        Integer *c = (Integer *)b;
        this->numerator  *= c->getValue();  
    }
    else
    {
        cerr << "Error calcution"  << endl; 
    } 
} 
void Rational::div(Object *b)
{
    if(b->getType() == "Rational") 
    {
        Rational *c = (Rational *)b; 
        this->numerator *= c->getValue2(); 
        this->denominator *= c->getValue1();
    }
    else if(b->getType() == "Integer") 
    {
        Integer *c = (Integer *)b;
        this->denominator *= c->getValue(); 
    }
    else
    {
        cerr << "Error calcution"  << endl; 
    } 
} 
