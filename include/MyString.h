// Copyright 2020 Dyryaev Daniil

#ifndef INCLUDE_MYSTRING_H_
#define INCLUDE_MYSTRING_H_

#include <cstring>
#include <string>
#include <iostream>

class MyString {
    private:
        char *string;

    public:
        MyString();

        MyString(std::string);

        MyString(const MyString &);

        MyString(const char *);

        MyString(MyString &&);

        ~MyString() { delete[]this->string; }

        int length() { return strlen(this->string); }

        char *get() const;

        MyString operator+(MyString &);

        MyString operator-(MyString &);

        MyString operator*(int);

        MyString &operator=(MyString);

        MyString &operator=(MyString &&);

        bool operator>(const MyString &);

        bool operator<(const MyString &);

        bool operator==(const MyString &);

        bool operator!=(const MyString &);

        bool operator>=(const MyString &);

        bool operator<=(const MyString &);

        MyString operator!();

        char operator[](int);

        int operator()(const char *);

        friend std::istream &operator>>(std::istream &, MyString &);

        friend std::ostream &operator<<(std::ostream &, MyString &);
};

#endif // INCLUDE_MYSTRING_H_