#ifndef __INTSET_H__
#define __ITTSET_H__

#include<vector>

class IntegerSet{
    public:
        IntegerSet();
        ~IntegerSet();

        void AddNumber(int num);
        void DeleteNumber(int num);

        int GetItem(int pos);
        std::vector<int> GetAll();

    private:
        std::vector<int> numbers_;
};

#endif
