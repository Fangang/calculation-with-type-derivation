//整型实现
#include "object.h" 
#include "integer.h" 
#include <string>
#include <iostream> 

Integer::Integer(int a=0):num(a),Object("Integer")
{
} 
int Integer::getValue()
{
    return num; 
} 
void Integer::add(Object *b) 
{
    if(b->getType() == "Integer") 
    {
        Integer *c = (Integer *)b; 
        this->num +=  c->getValue(); 
    } 
    else
    {
        cerr << "Error calculation" << endl; 
    } 
} 

void Integer::sub(Object *b) 
{
    if(b->getType() == "Integer") 
    {
        Integer *c = (Integer *)b; 
        this->num -=  c->getValue(); 
    } 
    else
    {
        cerr << "Error calculation" << endl; 
    } 
} 

void Integer::mul(Object *b) 
{
    if(b->getType() == "Integer") 
    {
        Integer *c = (Integer *)b; 
        this->num *=  c->getValue(); 
    } 
    else
    {
        cerr << "Error calculation" << endl; 
    } 
} 

void Integer::div(Object *b) 
{
    if(b->getType() == "Integer") 
    {
        Integer *c = (Integer *)b; 
        this->num /=  c->getValue(); 
    } 
    else
    {
        cerr << "Error calculation" << endl; 
    } 
} 
