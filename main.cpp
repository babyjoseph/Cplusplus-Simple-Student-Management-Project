#include <iostream>
#include "addStudent.h"
#include "displayStudent.h"
namespace{
  enum DisplayMenu{
    MainMenu,
    Add,
    Display,
    Exit
  };
  DisplayMenu myMain = MainMenu;
  std::string ans;
}
void clrsc(){
  for(unsigned i = 0; i < 100; i++){
    std::cout << "\n";
  }
}

int main(){
  while(true){
    clrsc();
    switch(myMain){
      case MainMenu:
        std::cout << "[add] a student" << std::endl;
        std::cout << "[diplay] student/s" << std::endl;
        std::cout << "[exit]" << std::endl;
        std::cout << "Input: ";
        getline(std::cin, ans);
        if(ans == "add"){
          myMain = Add;
        }
        else if(ans == "display"){
          myMain = Display;
        }
        else if (ans == "exit"){
          myMain = Exit;
        }
        else{
          std::cout << "Unknown Input!" << std::endl;
          myMain = MainMenu;
        }
        break;
      case Add:
        AddMenu();
        myMain = MainMenu;
        break;
      case Display:
        studentDisplay();
        std::cin.get();
        myMain = MainMenu;
      case Exit:
        myMain = MainMenu;
        break;
    }
    if(myMain == Exit)
      break;
  }
  return 0;
}
