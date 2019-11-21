#include<cstdlib>
#include"my_vector.h"

int main(){
    std::string task;
    MyVector a,b;
    while(1){
        std::cin>>task;
        if(task=="new"){
            int len;
            std::cin>>len;
            MyVector temp(len);
            std::cout<<"enter a\n";
            std::cin>>temp;
            a=temp;
            std::cout<<"enter b\n";
            std::cin>>temp;
            b=temp;
        }
        else if(task=="a"){
            std::cin>>task;
            if(task=="+"){
                std::cin>>task;
                if(task=="a"){
                    MyVector c=a+a;
                    std::cout<<c<<std::endl;
                }
                else if(task=="b"){
                    MyVector c=a+b;
                    std::cout<<c<<std::endl;
                }
                else{
                    int k=atoi(task.c_str());
                    MyVector c=a+k;
                    std::cout<<c<<std::endl;
                }
            }
            else if(task=="-"){
                std::cin>>task;
                if(task=="a"){
                    MyVector c=a-a;
                    std::cout<<c<<std::endl;
                }
                else if(task=="b"){
                    MyVector c=a-b;
                    std::cout<<c<<std::endl;
                }
                else{
                    int k=atoi(task.c_str());
                    MyVector c=a-k;
                    std::cout<<c<<std::endl;
                }
            }
        }
        else if(task=="b"){
            std::cin>>task;
            if(task=="+"){
                std::cin>>task;
                if(task=="a"){
                    MyVector c=b+a;
                    std::cout<<c<<std::endl;
                }
                else if(task=="b"){
                    MyVector c=b+b;
                    std::cout<<c<<std::endl;
                }
                else{
                    int k=atoi(task.c_str());
                    MyVector c=b+k;
                    std::cout<<c<<std::endl;
                }
            }
            else if(task=="-"){
                std::cin>>task;
                if(task=="a"){
                    MyVector c=b-a;
                    std::cout<<c<<std::endl;
                }
                else if(task=="b"){
                    MyVector c=b-b;
                    std::cout<<c<<std::endl;
                }
                else{
                    int k=atoi(task.c_str());
                    MyVector c=b-k;
                    std::cout<<c<<std::endl;
                }
            }
        }
        else if(task=="quit")break;
    }
    return 0;
}
