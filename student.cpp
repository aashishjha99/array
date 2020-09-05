#include<iostream>
using namespace std;
class student
{
    private:
     int rollno;
     string name;
     int  m1,m2,m3;
     
     public:
      student(string n,int r,int p,int m,int c)
      {
         rollno=r;
         name=n;
         m1=p;
         m2=m;
         m3=c;
      }
      int total()
      {
          return m1+m2+m3;
      }
      char grades()
      {
          float average=total()/3;
          if(average>80 && average<100)
          return 'A' ;
          
          else if( average>60 && average<=80)
          return 'B';
           
           else
           {
               return 'C';
           }
           
     }


};
int main()
{
     string name;
     int rollno;
    int m1,m2,m3;
    cout<<"give the name and rollno";
    cin>>name>>rollno;
    cout<<"give the marks in 3 subject";
    cin>>m1>>m2>>m3;
    student s(name,rollno,m1,m2,m3);
    cout<<"total marks"<<s.total()<<endl;
    cout<<"grade is"<<s.grades()<<endl;
     


}