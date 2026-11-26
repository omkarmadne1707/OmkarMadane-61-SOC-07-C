#include<iostream>
using namespace std;

   class Person
   {
   private:
   string name;
   public:

       void read()
       {
         cout<<"The person is reaing"<<endl;
       }
   };

   class Student:public Person
   {
     private:
     int roll_no;
     public:

        void read()
        {
          cout<<"The student is reading "<<endl;
        }
     };

    int main()
    {
    Person p;
    Student s;
    p.read();
    s.read();


    return 0;
};
