#include<cstdlib>
#include"my_vector2.h"

int main(){
    std::string task;
    MyVector2 *pa,*pb;
    while(1){
        std::cin>>task;
        if(task=="new"){
            int len;
            std::cin>>len;
            pa=new MyVector2(len);
            pb=new MyVector2(len);
            std::cout<<"enter a\n";
            std::cin>>*pa;
            std::cout<<"enter b\n";
            std::cin>>*pb;
            
        }
        else if(task=="a"){
            std::cin>>task;
            if(task=="+"){
                std::cin>>task;
                if(task=="a"){
                    MyVector2 c(*pa+*pa);
                    std::cout<<c<<std::endl;
                }
                else if(task=="b"){
                    MyVector2 c(*pa+*pb);
                    std::cout<<c<<std::endl;
                }
                else{
                    int k=atoi(task.c_str());
                    MyVector2 c(*pa+k);
                    std::cout<<c<<std::endl;
                }
            }
            else if(task=="-"){
                std::cin>>task;
                if(task=="a"){
                    MyVector2 c(*pa-*pa);
                    std::cout<<c<<std::endl;
                }
                else if(task=="b"){
                    MyVector2 c(*pa-*pb);
                    std::cout<<c<<std::endl;
                }
                else{
                    int k=atoi(task.c_str());
                    MyVector2 c(*pa-k);
                    std::cout<<c<<std::endl;
                }
            }
        }
        else if(task=="b"){
            std::cin>>task;
            if(task=="+"){
                std::cin>>task;
                if(task=="a"){
                    MyVector2 c(*pb+*pa);
                    std::cout<<c<<std::endl;
                }
                else if(task=="b"){
                    MyVector2 c(*pb+*pb);
                    std::cout<<c<<std::endl;
                }
                else{
                    int k=atoi(task.c_str());
                    MyVector2 c(*pb+k);
                    std::cout<<c<<std::endl;
                }
            }
            else if(task=="-"){
                std::cin>>task;
                if(task=="a"){
                    MyVector2 c(*pb-*pa);
                    std::cout<<c<<std::endl;
                }
                else if(task=="b"){
                    MyVector2 c(*pb-*pb);
                    std::cout<<c<<std::endl;
                }
                else{
                    int k=atoi(task.c_str());
                    MyVector2 c(*pb-k);
                    std::cout<<c<<std::endl;
                }
            }
        }
        else if(task=="quit")break;
    }
    delete pa;
    delete pb;
    return 0;
}
