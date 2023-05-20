#include <iostream>
#include "Airplane.h"
#include "Student.h"
#include "Empty.h"
#include <vector>

int main() {
  std::vector<Empty*> v;
  
  Student student1;
  student1.setName("Joe");
  Airplane airplane;
  airplane.setAirplaneNum(505364);
  
  v.push_back(&student1);
  v.push_back(&airplane);

  for (Empty* item : v) {
    if (Airplane* airplane = dynamic_cast<Airplane*>(item)) {
      std::cout << "Airplane found!" << std::endl;
    }
    else if (Student* student = dynamic_cast<Student*>(item))
    {
      std::cout << "Student found!" << std::endl;
    }
  }
}