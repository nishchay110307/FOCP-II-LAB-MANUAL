// #include<iostream>
// using namespace std;
// class student{
// public:
// int rollNo;
// string name;
// int marks1;
// int marks2;
// int marks3;

// void inputDetails(){
//     cout<<"\n Enter Rollno., Name, marks1, marks2, marks3 : ";
//     cin>>rollNo>>name>>marks1>>marks2>>marks3;
// }
// int calculateTotal(){
//     return(marks1+marks2+marks3);
// }
// void displayDetails(){
//     cout<<"\nName= :"<<name<<"\nRoll no. : "<<rollNo;
//     cout<<"\nMarks1 :"<<marks1<<"\nMarks2 :"<<marks2<<"\nMarks3 :"<<marks3;
//     cout<<"\ntotal : "<<calculateTotal();
// }
// };
// int main(){
//     student s1;
//     s1.inputDetails();
//     s1.displayDetails();
//     return 0;
// }

// Rectangle Calculator
// Scenario:
// Calculate area and perimeter of a rectangle.
// Class Name:
// Rectangle
// Attributes:
// •	float length
// •	float width
// Methods:
// •	void inputDimensions()
// •	float calculateArea()

// •	float calculatePerimeter()

// #include<iostream>
// using namespace std;
// class Rectangle{
//     public:
//     float length;
//     float width;

//     void inputDimensions(){
//         cout<<"\nenter the length of the rectangle :";
//         cin>>length;
//         cout<<"\nenter the width of the rectangle :";
//         cin>>width;
//     }
//     float calculateArea(){
//         return(length*width);
//     }
//     float calculatePerimeter(){
//         return(2*(length+width));
//     }
//     void displayResult(){
//         cout<<"\nthe area of the rectangle is :"<<calculateArea();
//         cout<<"\nthe perimeter of the rectangle is :"<<calculatePerimeter();
//     }
// };
// int main(){
//     Rectangle r1;
//     r1.inputDimensions();
//     r1.displayResult();
//     return 0;
// }

// Bank Account Summary
// Scenario:
// Store account details and display balance.
// Class Name:
// BankAccount
// Attributes:
// •	string accountHolderName
// •	int accountNumber
// •	double balance
// Methods:
// •	void inputDetails()
// •	void displayDetails()
// •	void deposit(double amount)
// •	void withdraw(double amount)

// #include<iostream>
// using namespace std;
// class BankAccount{
//     public:
//     string accountHolderName;
//     int accountNumber;
//     double balance;
    
//     void inputDetails(){
//         cout<<"\nenter the account holder's Name :";
//         cin>>accountHolderName;
//         cout<<"\nenter the acc. number";
//         cin>>accountNumber;
//         cout<<"\nenter the balance :";
//         cin>>balance;
//     }
//     void displayDetails(){
//         cout<<"\nname :"<<accountHolderName;
//         cout<<"\nacc. Number is :"<<accountNumber;
//         cout<<"\nbalance :"<<balance;
//     }
//     void deposit(double amount){
//         cout<<"\nbalance after deposit : "<<balance+amount;
//     }
//     void withdrawl(double amount){
//     if(amount>balance){
//         cout<<"nlow balance";
//     }
//     else if(balance==amount){
//         cout<<"\nzero balance";
//     }
//     else{
//         cout<<"\nbalance after withdrawl is :"<<balance-amount;
//     }
// }
// };
// int main(){
//     BankAccount x1;
//     x1.inputDetails();
//     x1.displayDetails();
//     x1.deposit(10000);
//     x1.withdrawl(5000);
//     return 0;
// }


// Employee Information System
// Scenario:
// Store employee details and calculate annual salary.
// Class Name:
// Employee
// Attributes:
// •	int empId
// •	string name
// •	double monthlySalary
// Methods:
// •	void inputDetails()
// •	double calculateAnnualSalary()
// •	void displayDetails()

// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//     int empId;
//     string name;
//     double monthlySalary;
//     void inputDetails();
//     double calculateAnnualSalary();
//     void displayDetails();
// };
// void Employee::inputDetails(){
//     cout<<"\nenter the employee id :";
//     cin>>empId;
//     cout<<"enter the name of the employee :";
//     cin>>name;
//     cout<<"enter the monthly salary :";
//     cin>>monthlySalary;
// }
// double Employee::calculateAnnualSalary(){
//     return(monthlySalary*12);
// }
// void Employee::displayDetails(){
//     cout<<"\nemployee id: "<<empId;
//     cout<<"\n employee name: "<<name;
//     cout<<"\n monthly salary: "<<monthlySalary;
//     cout<<"\n annual salary: "<<calculateAnnualSalary();
// }
// int main(){
//     Employee e1;
//     e1.inputDetails();
//     e1.displayDetails();
//     return 0;
// }

// Book Library Entry
// Scenario:
// Store and display book details.
// Class Name:
// Book
// Attributes:
// •	string title
// •	string author
// •	double price
// Methods:
// •	void inputDetails()
// •	void displayDetails()

// #include<iostream>
// using namespace std;
// class Book{
//     string title;
//     string author;
//     double price;
//     public :
//     Book(string t, string a, double p){
//         title=t;
//         author=a;
//         price=p;
//     }
//     void inputDetails();
//     void displayDetails();
// };
// void Book::inputDetails(){
    
//     cout<<"\nenter the name of the author: ";
//     cin>>author;
//     cout<<"\nenter the title of the book : ";
//     cin.ignore();
//     getline(cin,title);
//     cout<<"\nenter the price of the book: ";
//     cin>>price;
// }
// void Book::displayDetails(){
//     cout<<"\ntitle : "<<title;
//     cout<<"\nauthor name : "<<author;
//     cout<<"\nprice : "<<price;
// }
// int main(){
//     Book b1("coding", "focp", 100);
//     b1.inputDetails();
//     b1.displayDetails();
//     return 0;
// }

// Temperature Converter
// Scenario:
// Convert Celsius to Fahrenheit.
// Class Name:
// Temperature
// Attributes:
// •	float celsius
// Methods:
// •	void inputTemperature()
// •	float convertToFahrenheit()
// •	void displayResult()09=

// #include<iostream>
// using namespace std;
// class Temperature{
//     float celsius;
//     public:
//     void inputTemperature();
//     float convertToFahrenheit();
//     void displayResult();
// };
// void Temperature::inputTemperature(){
//     cout<<"enter the temperature (celsius): ";
//     cin>>celsius;
// }
// float Temperature::convertToFahrenheit(){
//     return (celsius*(9.0/5.0))+32;
// }
// void Temperature::displayResult(){
//     cout<<"\nThe converted temp(Fahrenheit) is : "<<convertToFahrenheit();
// }
// int main(){
//     Temperature s1;
//     s1.inputTemperature();
//     s1.displayResult();
//     return 0;
// }

// Movie Ticket Booking System 
// Create a class MovieTicket with:
// Data Members:
// movieName
// seatNumber
// ticketPrice
// isBooked
// Constructors:
// Default constructor (not booked, price = 200)
// Parameterized constructor (initialize movie name, seat number, price)
// Methods:
// bookTicket() → Book the ticket if not already booked
// cancelTicket() → Cancel if already booked
// displayTicketDetails()
// calculateTotalCost(int numberOfTickets)
// Create at least 2 ticket objects and simulate booking & cancellation.


 