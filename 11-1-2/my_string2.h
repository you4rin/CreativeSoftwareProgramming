#ifndef __STRING_H__
#define __STRING_H__

// my_string2.h - DO NOT modify this class definition
class MyString2{
public:
    // Add constructors yout need, including copy constructior
    MyString2();
    MyString2(std::string s);
    MyString2(const MyString2& other);
    // Incoorect implementation of assignment operator.
    // Do not use the assignment operator.
    //  Do not correct this because the goal is to prevent using the assignment operator.
    MyString2& operator=(const MyString2& b){return *this;}

    //Just use the same Implement implementations for these operators
    MyString2 operator+(const MyString2& b);
    MyString2 operator*(const int b);
    friend std::ostream& operator<<(std::ostream& out, MyString2& my_string);
    friend std::istream& operator>>(std::istream& in, MyString2& my_string);

private:
    std::string str;
};

#endif //__STRING_H__
