#pragma once
#include "Empty.h"

class Airplane : public Empty {
public:
  Airplane();
  ~Airplane() = default;
  int getAirplaneNum() const;
  void setAirplaneNum(const int&);
private:
  int airplane_num;
};