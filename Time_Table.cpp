#include<iostream>
#include<iomanip>
using namespace std;

class Teacher
{
  public:
  // string teacher_name[4]={"Devendra Kumar", "Navneet Kaur", "Prince Arora", "Ravi Patni"};
  // int teacher_code[4]={1,2,3,4};
};
class Subject
{
  public:
  string subject_name[2][4]={{"Linux   ","C++ OOPs","Networking","Analytical"},
                             {"Python  ","Big Data","DS & Algo","Java    "}};
  // int subject_code[4]={1,2,3,4};   
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
  string class_sec[2][4]=
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
      
      cout<<"Select your Name: \n1) Mr Devendra Kumar\n2) Mr Prince Arora\n3) Mr Ravi Patni\n4) Mr Vikas Choudhary\n5) Mr Ajay Bansal\n6) Mr Sanskar Gupta\n7) Mrs Avneet Kaur\n8)Mrs Sonia Sharma\n";
      cin>>code;
      if(code>4){
        yr=1;
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
      // cout<<"Select Your Course: \n 1) MCA \n 2) BCA \n)";
      // cin>>course;
      // if (course==1)
      // {
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
      
      // if (course==2){
      //   cout<<"Select Your Year: \n 1) 1st Year \n 2) 2nd Year \n 3) 3rd Year)";
      // cin>>year;
      // if(year==1){
      // cout<<"Choose Your Section: \n 1)A1  \n 2) A2 \n 3) A3 \n 4) A4)";
      // cin>>section;
      // }  
      // else
      // if(year==2) {
      // cout<<"Choose Your Section: \n 1)B1  \n 2) B2 \n 3) B3 \n 4) B4)";
      // cin>>section;
      // }
      // else if(year==3){
      // cout<<"Choose Your Section: \n 1)C1  \n 2) C2 \n 3) C3 \n 4) C4)";
      // cin>>section;
      // }
      // else {
      //   cout<<"Enter valid section";
      // }
      // }

      year--;
      section--;
      cout<<"\n\tTime"<<"\t| Monday"<<"\tTuesday"<<"\t\tWednesday"<<"\tThrusday"<<"\tFriday";
      cout<<"\n     ------------------------------------------------------------------------------------";
        // code=0;
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
        cout<<"\n\t"<<s_time++<<"-"<<s_time<<"\t| "<<subject_name[year][section]<<"\t"<<subject_name[year][section]<<"\t"<<subject_name[year][section]<<"\t"<<subject_name[year][code]<<"\t"<<subject_name[year][section];
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