//»ùÀà
#ifndef OBJECT_H_ 
#define OBJECT_H_
#include <string> 

using namespace std; 
class  Object
{
    string typee;
    
    public:
        Object(string Otype);
        ~Object(); 
        string getType(); 
        void changeType(string s); 
};

#endif 
 
