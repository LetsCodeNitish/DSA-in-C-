#include<iostream>
using namespace std;
class stackUsingArray{
    int *data;
    int NI;
    int capacity;
    public:
    stackUsingArray(int tsize){
        data=new int[tsize];
        NI=0;
        capacity=tsize;

    }
    bool isEmpty(){
        return NI==0;
    }

    void push(int element){
        if(NI==capacity){
            cout<<"stack full"<<endl;
            return;
        }
        data[NI]=element;
        NI++;
    }

    int top(){
        return data[NI-1];
    }

    int pop(){
        if(isEmpty){
            return -1;
        }
        NI--;
        return data[NI-1];

    }
    int size(){
        return NI;

    }


};
