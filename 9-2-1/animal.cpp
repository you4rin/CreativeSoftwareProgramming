#include<iostream>
#include"animal.h"

Animal::Animal(std::string name,int age):name(name),age(age){}
Animal::~Animal(){}
void Animal::printInfo(){}

Zebra::Zebra(std::string name,int age,int numStripes):Animal(name,age),numStripes(numStripes){}
void Zebra::printInfo(){std::cout<<"Zebra, Name: "<<name<<", Age: "<<age<<", Number of stripes: "<<numStripes<<std::endl;}

Cat::Cat(std::string name,int age,std::string favoriteToy):Animal(name,age),favoriteToy(favoriteToy){}
void Cat::printInfo(){std::cout<<"Cat, Name: "<<name<<", Age: "<<age<<", Favorite toy: "<<favoriteToy<<std::endl;}
