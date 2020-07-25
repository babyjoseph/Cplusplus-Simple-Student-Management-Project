#include "addStudent.h"

namespace{
  enum menuAdd{
    Pause,
    Yes,
    No
  };
  menuAdd myAdd = Pause;
  char ans;
}

std::vector<Student>myStudent;

Student MyStudent(){
  Student temp;
  std::string fna,lna,mna,subj;
  unsigned int sno,nosubj,year;

  std::cout << "Enter Student No.: ";
  std::cin >> sno;
  std::cin.ignore();
  temp.SetSno(sno);
  std::cout << "Enter Student Year: ";
  std::cin >> year;
  std::cin.ignore();
  temp.SetYear(year);
  std::cout << "Enter First Name: ";
  getline(std::cin,fna);
  temp.SetFname(fna);
  std::cout << "Enter Middle Name: ";
  getline(std::cin,mna);
  temp.SetMname(mna);
  std::cout << "Enter Last Name: ";
  getline(std::cin,lna);
  temp.SetLname(lna);
  std::cout << "Enter Number of Subject/s: ";
  std::cin >> nosubj;
  std::cin.ignore();
  temp.SetNoSubj(nosubj);
  for(unsigned i = 0; i < nosubj;i++){
    std::cout << i+1 << ". Enter Subject Name: ";
    getline(std::cin,subj);
    temp.SetSubj(subj);
  }
  return temp;
}
void AddStudent(){
  Student student = MyStudent();
  myStudent.push_back(student);
}

void AddMenu(){
  AddStudent();
  while(true){
    switch(myAdd){
      case Pause:
        std::cout << "Enter a student?[y/n] ";
        std::cin >> ans;
        std::cin.ignore();
        if(ans == 'y'){
          myAdd = Yes;
        }
        else if(ans == 'n'){
          myAdd = No;
        }
        else {
          std::cout << "Unknown Input!" << std::endl;
          myAdd = Pause;
        }
        break;
      case Yes:
        AddStudent();
        myAdd = Pause;
        break;
      case No:
        myAdd = Pause;
        break;
    }
    if(myAdd == No){
      break;
    }
  }
}
