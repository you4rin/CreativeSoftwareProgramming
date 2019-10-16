#include<iostream>
#include<cstdlib>
#include<string>
#include"sorted.h"

int main(){
    SortedArray s;
    while(1){
        std::string task;
        std::cin>>task;
        if(task=="0"||atoi(task.c_str()))s.AddNumber(atoi(task.c_str()));
        else if(task=="ascend"){
            std::vector<int> v=s.GetSortedAscending();
            for(int i=0;i<v.size();++i)std::cout<<v[i]<<" ";
            std::cout<<"\n";
        }
        else if(task=="descend"){
            std::vector<int> v=s.GetSortedDescending();
            for(int i=0;i<v.size();++i)std::cout<<v[i]<<" ";
            std::cout<<"\n";
        }
        else if(task=="max")std::cout<<s.GetMax()<<"\n";
        else if(task=="min")std::cout<<s.GetMin()<<"\n";
        else if(task=="quit")break;
    }
    return 0;
}
