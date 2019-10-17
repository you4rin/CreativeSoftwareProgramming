#include "message.h"

MessageBook::MessageBook(){}
MessageBook::~MessageBook(){}
void MessageBook::AddMessage(int number,const std::string& message){messages_[number]=message;}
void MessageBook::DeleteMessage(int number){
    std::map<int,std::string>::iterator it=messages_.find(number);
    if(it!=messages_.end())messages_.erase(it);
}
std::vector<int> MessageBook::GetNumbers(){
    std::vector<int> v;
    for(std::map<int,std::string>::iterator it=messages_.begin();it!=messages_.end();++it)v.push_back(it->first);
    return v;
}
const std::string& MessageBook::GetMessage(int number){
    std::string* ps=new std::string;
    if(messages_.find(number)!=messages_.end())*ps=messages_[number];
    else *ps="";
    return *ps;
}
