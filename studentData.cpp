#include "studentData.h"

std::string Student::GetFname() {return f_name;}
std::string Student::GetMname() {return m_name;}
std::string Student::GetLname() {return l_name;}
int Student::GetSno() {return s_no;}
int Student::GetYear() {return _year;}
int Student::GetNoSubj() {return no_subj;}
void Student::GetSubj() {
  for(unsigned i = 0; i < _subj.size(); i++){
    std::cout <<"\t" << i+1<<"."<< _subj[i] << std::endl;
  }
}

void Student::SetYear(int year){_year = year;}
void Student::SetFname(std::string fname){f_name = fname;}
void Student::SetMname(std::string mname){m_name = mname;}
void Student::SetLname(std::string lname){l_name = lname;}
void Student::SetSubj(std::string subj){
    _subj.push_back(subj);
}
void Student::SetSno(int sno){s_no = sno;}
void Student::SetNoSubj(int nosubj){no_subj = nosubj;}
