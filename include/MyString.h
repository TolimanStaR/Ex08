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
  explicit MyString(std::string);

  MyString(const MyString &);

  explicit MyString(const char * = nullptr);

  MyString(MyString &&) noexcept;

  ~MyString() { delete[]this->string; }

  int length() const;

  char *get();

  MyString operator+(const MyString &);

  MyString operator-(const MyString &);

  MyString operator*(int);

  MyString &operator=(const MyString &);

  MyString &operator=(MyString &&) noexcept;

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

#endif  // INCLUDE_MYSTRING_H_
