#include "displayStudent.h"

extern std::vector<Student>myStudent;

void studentDisplay(){
  for(unsigned i = 0; i < myStudent.size(); i++){
    std::cout << "===============================================" << std::endl;
    std::cout << "Student Name: " << myStudent[i].GetLname() << ", " << myStudent[i].GetFname() << " " << myStudent[i].GetMname() << std::endl;
    std::cout << "Student Year: " << myStudent[i].GetYear() << std::endl;
    std::cout << "Subjects:"<<std::endl;
    myStudent[i].GetSubj();
    std::cout << "\n" << std::endl;
  }
}
