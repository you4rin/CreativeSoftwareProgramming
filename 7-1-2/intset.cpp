#include<algorithm>
#include"intset.h"

IntegerSet::IntegerSet(){}
IntegerSet::~IntegerSet(){}

void IntegerSet::AddNumber(int num){
    if(!std::binary_search(numbers_.begin(),numbers_.end(),num)){
        numbers_.push_back(num);
        std::sort(numbers_.begin(),numbers_.end());
    }
}

void IntegerSet::DeleteNumber(int num){
    for(std::vector<int>::iterator it=numbers_.begin();it!=numbers_.end();++it){
        if(num==*it){
            numbers_.erase(it);
            break;
        }
    }
}

int IntegerSet::GetItem(int pos){
    if(pos>=numbers_.size())return -1;
    else return numbers_[pos];
}

std::vector<int> IntegerSet::GetAll(){return numbers_;}
