#include<iostream>
#include<string>
#include"setfunc.h"

int main(){
    while(1){
        std::string s;
        std::getline(std::cin,s);
        if(s=="0")break;
        int i;
        if((i=s.find("+"))!=std::string::npos){
            std::set<int> set0=parseSet(s.substr(0,i-1)),set1=parseSet(s.substr(i+2));
            std::set<int> us=getUnion(set0,set1);
            printSet(us);
        }
        else if((i=s.find("*"))!=std::string::npos){
            std::set<int> set0=parseSet(s.substr(0,i-1)),set1=parseSet(s.substr(i+2));
            std::set<int> ds=getIntersection(set0,set1);
            printSet(ds);
        }
        else{
            int j=0;
            for(i=0;i<s.length();++i){
                if(j&&s[i]=='-')break;
                if(s[i]=='}')j=1;
            }
            std::set<int> set0=parseSet(s.substr(0,i-1)),set1=parseSet(s.substr(i+2));
            std::set<int> is=getDifference(set0,set1);
            printSet(is);
        }
    }
    return 0;
}
