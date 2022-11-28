#include<iostream>
#include<iomanip>
using namespace std;

class Teacher
{
  public:
  string teacher_name[4]={"Devendra Kumar", "Navneet Kaur", "Prince Arora", "Ravi Patni"};
  int teacher_code[4]={1,2,3,4};
};
class Subject
{
  public:
  string subject_name[4]={"English ","Maths   ","Computer","Hindi   "};
  int subject_code[4]={1,2,3,4};   
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
  string class_section[4]={"DOC10","DOC11","DOC12","DOC13"};
};

class Time_table:public Teacher,public Subject,public Student,public Classes
{
  public:
  void display(int a){
  int code;
  int s_time=9;
  // int e_time=10;
    if(a==1){
      cout<<"Enter the Teacher code: ";
      cin>>code;
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
          cout<<"\n\t"<<s_time++<<"-"<<s_time<<"\t| "<<class_section[code]<<"\t\t"<<class_section[code]<<"\t\t"<<class_section[code]<<"\t\t"<<class_section[code]<<"\t\t"<<class_section[code];
          code++;
        
         }        
           if(s_time>11){
            s_time=1;
           }

        }
        
    }
    else 
    if(a==2){
      cout<<"Enter your section: ";
      cin>>code;
      code--;
      cout<<"\n\tTime"<<"\t| Monday"<<"\tTuesday"<<"\t\tWednesday"<<"\tThrusday"<<"\tFriday";
      cout<<"\n     ------------------------------------------------------------------------------------";
      for (int i = 0; i < 5; i++)
      {
        if (code>3)
        {
          code=0;
        }
        
      if (i==2)
      {
        cout<<"\n\t"<<s_time++<<"-"<<s_time<<"\t"<<"| Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch"<<"\t\t"<<"Lunch";
      }
      else
      {
        cout<<"\n\t"<<s_time++<<"-"<<s_time<<"\t| "<<subject_name[code]<<"\t"<<subject_name[code]<<"\t"<<subject_name[code]<<"\t"<<subject_name[code]<<"\t"<<subject_name[code];
        code++;
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
  Teacher t;
  Subject s;
  Time_table tt;
  // int s_time=9;
  // int code=2;
  cout<<"Choose one Option:\n1. Faculty\n2. Student\n";
  cin>>n;
  tt.display(n);
  // cout<<"\nTime\t|\tMonday\t  |\tTuesday\t  |\tWednesday\t|\tThrusday\t |\tFriday"<<endl;
  // cout<<"\n"<<s_time++<<"-"<<s_time<<"\t|\tLunch\t  |\tLunch\t  |\tLunch\t  |\tLunch\t  |\tLunch"<<endl;
  // cout<<"\n"<<s_time++<<"-"<<s_time<<"\t|\t"<<s.subject_name[code]<<"\t |\t"<<s.subject_name[code]<<"\t |\t"<<s.subject_name[code]<<"\t |\t"<<s.subject_name[code]<<"\t |\t"<<s.subject_name[code]<<endl;
  //       code++;
  // cout<<"\n\t ********** Displaying Student's Details ********** \n"<<" ";
  //      cout<<"\n\tTime"<<"\tMonday"<<"\t\tTuesday"<<"\t\tWednesday"<<"\tThrusday"<<"\tFriday";
  //     //  cout<<"\n\n\t\t\t\t\tEnglish  Maths  Science";
       
  //             cout<<"\n\t----------------------------------------------------------";
  //             cout<<"\n\t "<<s_time++<<"-"<<s_time<<"\t"<<s.subject_name[code]<<"\t"<<s.subject_name[code]<<"\t"<<s.subject_name[code]<<"\t"<<s.subject_name[code]<<"\t"<<s.subject_name[code];
  //             code--;
  //             cout<<"\n\t "<<s_time++<<"-"<<s_time<<"\t"<<s.subject_name[code]<<"\t"<<s.subject_name[code]<<"\t"<<s.subject_name[code]<<"\t"<<s.subject_name[code]<<"\t"<<s.subject_name[code];
      
  return 0;

}