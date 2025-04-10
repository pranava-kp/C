#include <iostream>
#include<vector>
class Stack
{
    private:
       std::vector<int>stack;
       int capacity;
    public:
       Stack(int size):capacity(size){}
       bool isEmpty() const
       {
           return stack.empty();
       }
       bool isFull() const
       {
           return stack.size()==capacity;
       }
       void push(int value)
       {
           if(isFull())
           {
               std::cout<<"stack overflow"<<value<<"full"<<std::endl;
               return;
           }
           stack.push_back(value);
           std::cout<<value<<"pushed to stack"<<std::endl;
       }
}int pop(){
           if(isEmpty()){
               std::cout<<"underflow"<<std::endl;
               return -1;
           }
           int topValue=stack.back();
           stack.pop_back();
           return topValue;
       }       int peek()const{
           if(isEmpty()){
               std::cout<<"empty"<<std::endl;
               return -1;
           }
           return stack.back();
       }
       int size() const{
           return stack.size();
       }
       void display() const{
           if(isEmpty()){
               std::cout<<"empty"<<std::endl;
               return -1;
           }
           std::cout<<"stack";
           for(int i=stack.size()-1;i>=0;--i){
           std::cout<<stack[i]<<" ";
       }
       std:cout<<std::endl;
    }
};