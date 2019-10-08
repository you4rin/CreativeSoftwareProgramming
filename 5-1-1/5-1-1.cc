#include<iostream>
#include<cstdlib>

int main(int argc, char* argv[]){
    for(int i=0;i<atoi(argv[2]);++i)std::cout<<argv[1]<<"\n";
    return 0;
}
