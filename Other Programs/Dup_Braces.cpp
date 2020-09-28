#include <cstdlib>
#include<iostream>
#include<string>
#include<cstring>
#include "Stack.h"
int main(int argc, char** argv) {   
std::string input;
int q;
std::cin>>input;
int len=input.size();
int i=0,c=0,rew=0;;
/* while(i<len){ char sy[1]={input.at(i)};int res=strcmp(sy,"(");if(res==0){c++;}i++; }*/
Stack s=Stack();
i=0;
while(i<len){
    
char sy[1]={input.at(i)};
int res1=strcmp(sy,")");

if(res1==0) {
    char sy1[1]={s. peekC()};
    int res=strcmp(sy1,"(");
    if(res==0){
    std::cout<<"Yes";
     return 0;
    }        
    else{
        while(res!=0){
            s.popC();
          char sy2[1]={s.peekC()};
          res=strcmp(sy2,"("); 
                     }  
        s.popC();
    }
    c=s.popC();   
    }
else{
    std::cout<<input[i]<<"  ";
  s.pushC(input.at(i)); 
}
     
 i++;
}
std::cout<<"No";
return 0; 
}
 
    



