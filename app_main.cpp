//Ö÷º¯Êı²âÊÔ
#include "object.h"
#include "integer.h" 
#include "rational.h" 
#include "real.h" 
#include "complex.h" 
#include <iostream> 
#include <cstdlib> 
#include <string> 

int main(int argc,char *argv[])
{
    Integer i(2);
    cout << i.getType() << endl; 
    Rational j(1,2);
    Rational k(1,3);
    cout << j.getValue1() << endl; 
    j.add(&k); 
    cout << j.getValue1() << endl; 
    j.add(&i);
    cout << j.getValue1() << endl; 
    Complex m(1,2);
    Real n(3.0);
    m.add(&m);
    cout << m.getValue1() << endl; 
     
    m.div(&j); 
    cout << m.getValue1() << endl; 
    
    m.add(&i); 
    cout << m.getValue1() << endl; 
    
    system("pause"); 
    return 0; 
}  
