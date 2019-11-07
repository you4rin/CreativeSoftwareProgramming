#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include<string>

class Animal{
    protected:
    std::string name;
    int age;
    public:
    Animal(std::string name,int age);
    virtual ~Animal();
    virtual void printInfo();
};
class Zebra:public Animal{
    protected:
    int numStripes;
    public:
    Zebra(std::string name,int age,int numStripes);
    void printInfo();
};
class Cat:public Animal{
    protected:
    std::string favoriteToy;
    public:
    Cat(std::string name,int age,std::string favoriteToy);
    void printInfo();
};

#endif
