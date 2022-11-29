#include<iostream>
#include<iomanip>
using namespace std;

class Teacher
{
  public:
  string teacher_name[8]={"Mr Devendra Kumar","Mr Prince Arora", "Mr Ravi Patni", "Mr Vikas Choudhary", "Mr Ajay Bansal", "Mr Sanskar Gupta", "Mrs Avneet Kaur", "Mrs Sonia Sharma"};
};
class Subject
{
  public:
  string subject_name[2][4]={{"Linux   ","C++ OOPs","Networking","Analytical"},
                             {"Python  ","Big Data","DS & Algo","Java    "}}; 
};

class Student
{
  public:
  string student_name;
  int regisration_no;
};
class Classes
{
  public:
  string class_name[4]={"MCA","BCA","B.Tech","M.Tech"};
  string class_section[2][4]=
    {
          {"A1","A2","A3","A4"},{"B1","B2","B3","B4"}   
    };
};
class Time_table:public Teacher,public Subject,public Student,public Classes
{
  public:
  void display(int a){
  int code = 0;
  int course,year,section;
  int s_time=9;
     int yr=0; 
    if(a==1){
      
      cout<<"Select your Name: \n1) Mr Devendra Kumar\n2) Mr Prince Arora\n3) Mr Ravi Patni\n4) Mr Vikas Choudhary\n5) Mr Ajay Bansal\n6) Mr Sanskar Gupta\n7) Mrs Avneet Kaur\n8) Mrs Sonia Sharma\n";
      cin>>code;
      cout<<"\n     ----------------------------------"<<teacher_name[code-1]<<"-----------------------------------";
      if(code>4){
        yr=1;
        code-=4;
      }
      code--;
           cout<<"\n\tTime"<<"\t| Monday"<<"\tTuesday"<<"\t\tWednesday"<<"\tThrusday"<<"\tFriday";
           cout<<"\n     ------------------------------------------------------------------------------------";
        for (int i = 0; i < 5; i++)
        {
           if (code>3){
            code =0;
           }
           
           if (i==2)
          {
          cout<<"\n\t"<<s_time++<<"-"<<s_time<<"\t"<<"| Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch"; 
    
          }
          else{
          cout<<"\n\t"<<s_time++<<"-"<<s_time<<"\t| "<<class_section[yr][code]<<"\t\t"<<class_section[yr][code]<<"\t\t"<<class_section[yr][code]<<"\t\t"<<class_section[yr][code]<<"\t\t"<<class_section[yr][code];
          code++;
        
         }        
           if(s_time>11){
            s_time=1;
           }

        }
        
    }
    else 
    if(a==2){
      cout<<"Select Your Year: \n 1) 1st Year \n 2) 2nd Year \n)";
      cin>>year;
      if(year==1){
      cout<<"Choose Your Section: \n 1) A1  \n 2) A2 \n 3) A3 \n 4) A4\n";
      cin>>section;
      }  
      else
      if(year==2) {
      cout<<"Choose Your Section: \n 1) B1  \n 2) B2 \n 3) B3 \n 4) B4\n";
      cin>>section;
      }
      else {
        cout<<"Enter valid section";
      }
      
      year--;
      section--;
      cout<<"\n\tTime"<<"\t| Monday"<<"\tTuesday"<<"\t\tWednesday"<<"\tThrusday"<<"\tFriday";
      cout<<"\n     ------------------------------------------------------------------------------------";
      for (int i = 0; i < 5; i++)
      {
        if (section>3)
        {
          section=0;
        }
        
      if (i==2)
      {
        cout<<"\n\t"<<s_time++<<"-"<<s_time<<"\t"<<"| Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch";
      }
      else
      {
        cout<<"\n\t"<<s_time++<<"-"<<s_time<<"\t| "<<subject_name[year][section]<<"\t"<<subject_name[year][section]<<"\t"<<subject_name[year][section]<<"\t"<<subject_name[year][section]<<"\t"<<subject_name[year][section];
        section++;
      }
      if (s_time>11)
      {
        s_time=1;
      }
      
      }
      
    }
  }
};

int main()
{
  int n;
  Time_table tt;
  cout<<"Choose one Option:\n1. Faculty\n2. Student\n";
  cin>>n;
  tt.display(n);   
  return 0;
}