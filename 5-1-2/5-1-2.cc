#include<iostream>
#include<string>

typedef struct{
    std::string name;
    double score;
}Person;

int main(int argc,char* argv[]){
    Person* arr=new Person[argc/2];
    for(int i=1;i<argc;++i){
        if(i%2)arr[i/2].name=argv[i];
        else arr[i/2-1].score=std::atof(argv[i]);
    }
    for(int i=0;i<argc/2;++i)std::cout<<"Name:"<<arr[i].name<<", Score:"<<arr[i].score<<"\n";
    delete[] arr;
    return 0;
}
