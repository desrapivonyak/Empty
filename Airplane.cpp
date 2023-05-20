#pragma once
#include "Airplane.h"

Airplane::Airplane(): airplane_num {0} {};

int Airplane::getAirplaneNum() const {
  return this->airplane_num;
}

void Airplane::setAirplaneNum(const int &num) {
  this->airplane_num = num;
}