#pragma once

#include<iostream>

using namespace std;

template<class T>
class Node{
public:
    Node():next(NULL){}
    T data;
    Node<T>* next;
};

template<class T>
class List{
private:
    Node<T>* head;
public:
    List():head(NULL){}
    ~List(){delete head;head=NULL;}
    List(T* arr,int n_nodes){
        head=new Node<T>;
        Node<T>* pNode=head;
        for(int i=0;i<n_nodes;++i){
            pNode->data=arr[i];
            if(i!=n_nodes-1)pNode->next=new Node<T>;
            pNode=pNode->next;
        }
    }
    void insert_at(int idx,const T& data){
        Node<T>* newNode=new Node<T>;
        newNode->data=data;
        Node<T>* pos=head;
        for(int i=1;i<idx;++i)pos=pos->next;
        newNode->next=pos->next;
        pos->next=newNode;
    }
    void remove_at(int idx){
        Node<T>* pos=head;
        for(int i=1;i<idx;++i)pos=pos->next;
        Node<T>* nextNode=pos->next->next;
        delete pos->next;
        pos->next=NULL;
        pos->next=nextNode;
    }
    void pop_back(){
        Node<T>* pos=head;
        while(pos->next)pos=pos->next;
        Node<T>* before=head;
        while(before->next!=pos)before=before->next;
        delete pos;
        before->next=NULL;
    }
    void push_back(const T& val){
        Node<T>* pos=head;
        while(pos->next)pos=pos->next;
        pos->next=new Node<T>;
        pos->next->data=val;
    }
    void pop_front(){
        Node<T>* pos=head;
        head=pos->next;
        delete pos;
    }
    void push_front(const T& val){
        Node<T>* newNode=new Node<T>;
        newNode->data=val;
        newNode->next=head;
        head=newNode;
    }
    friend ostream& operator<<(ostream& out,List& rhs){
        Node<T>* pos=rhs.head;
        while(pos){
            out<<pos->data<<" ";
            pos=pos->next;
        }
        return out;
    }
};
