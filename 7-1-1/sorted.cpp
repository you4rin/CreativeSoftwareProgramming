#include<algorithm>
#include"sorted.h"

SortedArray::SortedArray(){}
SortedArray::~SortedArray(){}

void SortedArray::AddNumber(int num){
    numbers_.push_back(num);
    std::sort(numbers_.begin(),numbers_.end());
}

std::vector<int> SortedArray::GetSortedAscending(){return numbers_;}
std::vector<int> SortedArray::GetSortedDescending(){
    std::vector<int> v;
    int i=numbers_.size();
    while(i--)v.push_back(numbers_[i]);
    return v;
}
int SortedArray::GetMax(){
    std::vector<int>::iterator it=std::max_element(numbers_.begin(),numbers_.end());
    return *it;
}
int SortedArray::GetMin(){
    std::vector<int>::iterator it=std::min_element(numbers_.begin(),numbers_.end());
    return *it;
}
