// #include<iostream>
// using namespace std;
// class Person{
//     string name; int age;
//     public:
//     Person(){
//         cout<<"\n Person default constructor ";name="default";age=18;
//     }
//     Person(string nm, int ag){
//         cout<<"\n Person parametarized constructor";
//         name=nm;age=ag;
//     }
//     void display(){
//     cout<<"\n name = "<<name<<"\n age = "<<age; 
//     }
// };
// class Student:public Person{
//     string rollno;
//     public:
//     Student(){
//         cout<<"\n STUDENT DEFAULT CONSTRUCTOR";rollno="25CSU000";
//     }
//     Student(string nm,int ag, string rno):Person(nm,ag){//INITIALIZATION LIST
//     cout<<"\n student parameterized";
//     rollno=rno;
// }
// void display_student(){
//     display();
//     cout<<"\n Roll no= "<<rollno;
// }
// };
// int main(){
//     Student p1,p2("abcd",23,"25CSU111");
//     p1.display();
//     p1.display_student();
//     p2.display_student();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     shape(){
//         cout<<"\n shape default const called";
//     }   
//     virtual void area(){         //vitual islie used kiya taki parent class ko childs c
//         cout<<"\n no dimension no area";
//     }
//     void display(){
//         cout<<"\n we are 2D shapes";
//     }
// };
// class rectangle: public shape{
//     int length; 
//     int width;
//     public:
//     rectangle(int l=5, int w=10):length(l),width(w){
//         cout<<"\n Rectangle object created";
//     }
//     void area(){
//         cout<<"\n area="<<length*width;
//     }
// };
// int main(){
//     shape*s1,s2;
//     rectangle r2(50,45);
//     s1=&s2;
//     s1->area();
//     s1=&r2;
//     s1->area();
//     s2.area();
// return 0;
// }


// //pure virtual method
// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     shape(){
//         cout<<"\n shape default const called";
//     }   
//     virtual void area()=0;
//     virtual void display (){ //ghar jaa kar dekhna h kya hota h(to restrict function overriding)
//         cout<<"\n we are 2D shapes";
//     }
// };
// class rectangle: public shape{
//     int length; 
//     int width;
//     private:
//     rectangle(int l=0, int w=0):length(l),width(w){
//         cout<<"\n Rectangle object created";
//     }
//     void area(){
//         cout<<"\n area="<<length*width;
//     }
// };
// int main(){
//     //shape*s1,s2;
//     rectangle r2(50,45);
//     r2.area();
// return 0;
// }


//operator 
//overloading
#include<iostream>
using namespace std;
class rectangle{
	float length;
	float width;
    public:
       rectangle(){
        length=0;width=0;
       }
       rectangle(int l , int w){
        length=l;width=w;
       }
    void display(){
        cout<<"\nlength is : "<<length;
        cout<<"\nwidth is : "<<width;
    }
   friend rectangle operator*(rectangle obj1,rectangle obj2);//friend is used so it can get both advantages of public as well as protected and still be used in the other class 
};

rectangle operator*(rectangle obj1,rectangle obj2){
    rectangle temp;
    temp.width=obj1.width*obj2.width;
    temp.length=obj1.length*obj2.length;
    return temp;
}

int main(){
    rectangle r1(20,30),r2(30,30);
    r1.display();
    r2.display();
    rectangle r3=r1*r2;   //or we can do r3=operator*(r1,r2);
    r3.display();
    return 0;
}