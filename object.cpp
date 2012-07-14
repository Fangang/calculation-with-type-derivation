//基类实现
#include "object.h" 
#include <string> 
using namespace std;

Object::Object(string Otype)
{
    typee = Otype; 
} 
Object::~Object()
{
} 
string Object::getType()
{
    return typee; 
} 
void Object::changeType(string s)
{
    typee = s; 
}  
