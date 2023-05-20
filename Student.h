#pragma once
#include "Empty.h"
#include <string>

class Student : public Empty {
public:
  Student();
  ~Student() = default;
  std::string getName() const;
  void setName(const std::string&);
private:
  std::string student_name;
};