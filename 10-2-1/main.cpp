#include<iostream>
#include<vector>
#include"clocks.h"

int main(){
    int seconds;
    std::cin>>seconds;
    std::vector<Clock*> v;
    v.push_back(new SundialClock(0,0,0));
    v.push_back(new CuckooClock(0,0,0));
    v.push_back(new GrandFatherClock(0,0,0));
    v.push_back(new WristClock(0,0,0));
    v.push_back(new AtomicClock(0,0,0));
    for(auto i:v)i->reset();
    std::cout<<"Reported clock times after resetting:\n";
    for(auto i:v)i->displayTime();
    std::cout<<"\nRunning The clocks...\n\n";
    for(int i=0;i<seconds;++i)for(auto j:v)j->tick();
    std::cout<<"Reported clock times after running:\n";
    for(auto i:v)i->displayTime();
    return 0;
}
