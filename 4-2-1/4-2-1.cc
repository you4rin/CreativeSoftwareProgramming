#include<iostream>
#include<string>

typedef struct{
    std::string name;
    int age;
}Person;

int main(){
    int N;
    std::cin>>N;
    Person* arr=new Person[N];
    for(int i=0;i<N;++i)std::cin>>arr[i].name>>arr[i].age;
    for(int i=0;i<N;++i)std::cout<<"Name:"<<arr[i].name<<", Age:"<<arr[i].age<<"\n";
    delete[] arr;
    return 0;
}
