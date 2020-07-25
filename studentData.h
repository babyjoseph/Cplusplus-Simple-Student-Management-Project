#ifndef STUDENT_DATA_H
#define STUDENT_DATA_H

#include <string>
#include <iostream>
#include <vector>
class Student{
  std::string f_name,m_name,l_name;
  std::vector<std::string>_subj;
  unsigned int s_no,no_subj,_year;
  double f_grade,m_grade,_grade;
public:
  std::string GetFname();
  std::string GetMname();
  std::string GetLname();
  void GetSubj();
  int GetSno();
  int GetNoSubj();
  int GetYear();
  void SetFname(std::string fname);
  void SetMname(std::string mname);
  void SetLname(std::string lname);
  void SetSubj(std::string temp);
  void SetSno(int sno);
  void SetNoSubj(int nosubj);
  void SetYear(int year);
};

#endif
