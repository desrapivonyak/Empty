#pragma once
#include "Student.h"
#include <string>

Student::Student() : student_name{""} {};

std::string Student::getName() const {
  return this->student_name;
}

void Student::setName(const std::string &str) {
  this->student_name = str;
}