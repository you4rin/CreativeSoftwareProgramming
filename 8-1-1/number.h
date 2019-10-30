#ifndef __NUMBER_H__
#define __NUMBER_H__

class Number{
    protected:
        int _num;
    public:
        void setNumber(int num){
            _num=num;
        }
        int getNumber(){
            return _num;
        }
};

class Square:public Number{
    public:
        int getSquare();
};

class Cube:public Square{
    public:
        int getCube();
};

#endif
