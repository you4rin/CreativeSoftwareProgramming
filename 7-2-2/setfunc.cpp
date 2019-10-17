#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include"setfunc.h"

std::set<int>parseSet(const std::string& str){
    std::set<int> s;
    std::vector<int> v;
    int start,end;
    for(int i=0;i<str.length();++i){
        if(str[i]=='{')continue;
        if(str[i]=='}')break;
        if(i<3&&str[i]==' ')start=1;
        else if(str[i]==' '){
            end=i;
            v.push_back(atoi(str.substr(start+1,end-start-1).c_str()));
            start=i;
        }
    }
    std::sort(v.begin(),v.end());
    for(std::vector<int>::iterator it=v.begin();it!=v.end();++it)s.insert(*it);
    return s;
}
void printSet(const std::set<int>& s){
    std::cout<<"{ ";
    for(std::set<int>::iterator it=s.begin();it!=s.end();++it)std::cout<<*it<<" ";
    std::cout<<"}\n";
}
std::set<int> getIntersection(const std::set<int>& set0,const std::set<int>& set1){
    std::set<int> s;
    for(std::set<int>::iterator it=set1.begin();it!=set1.end();++it)if(set0.find(*it)!=set0.end())s.insert(*it);
    return s;
}
std::set<int> getUnion(const std::set<int>& set0,const std::set<int>& set1){
    std::set<int> s;
    std::vector<int> v;
    for(std::set<int>::iterator it=set0.begin();it!=set0.end();++it)v.push_back(*it);
    for(std::set<int>::iterator it=set1.begin();it!=set1.end();++it)v.push_back(*it);
    std::sort(v.begin(),v.end());
    for(std::vector<int>::iterator it=v.begin();it!=v.end();++it)s.insert(*it);
    return s;
}
std::set<int> getDifference(const std::set<int>& set0,const std::set<int>& set1){
    std::set<int> s;
    for(std::set<int>::iterator it=set0.begin();it!=set0.end();++it)if(set1.find(*it)==set1.end())s.insert(*it);
    return s;
}
