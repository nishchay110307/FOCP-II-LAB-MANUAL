// Create a class Account with account number and balance. Add a function
// displayAccount(). Derive a class SavingsAccount that includes interest rate and a
// function calculateInterest(). Demonstrate usage of both classes.
// (AccountSavingsAccount). 

// #include<iostream>

// using namespace std;

// class Account{
//     int accountNumber;
//     int balance;
//     public:
//     void displayAccount(){
//         accountNumber = 7;
//         balance = 281;
//         cout<<"\nAccount number: "<<accountNumber<<"\nBalance: "<<balance;
//     }
// };

// class savingsAccount: public Account{
//     int interestRate = 45;
//     public:
//     void CalculateInterest(){
//         displayAccount();
//         cout<<"\nInterest rate: "<<interestRate;
//     }
// };
// int main(){
//     savingsAccount s1;
//     s1.CalculateInterest();

// }

#include<iostream>
using namespace std;
class A{
    public:
    int a;
    A(){
        a=150;
    }
    void display(){
        cout<<"A is : "<<a<<endl;
    }
    ~A(){
        cout<<"A IS DESTROYED \n";
    }
};
class B : public A{
    private:
    int b;
    public:
    B(){
        b=219;
    }
    void display(){
        cout<<"B is : "<<b<<endl;
    }
    ~B(){
        cout<<" B is destroyed \n ";
    }
};
class C : public A{
    private:
    int c;
    public:
    C(){
        c=350;
    }
    void display(){
        cout<<"C is : "<<c<<endl;
    }
    ~C(){
        cout<<" C is destroyed \n ";
    }
};
class D : public B, public C{
    public:
    int d;
    D(){
        d=500;
    }
    void display(){
        cout<<" D is : "<<d<<endl;
    }
    ~D(){
        cout<<" D is destroyed \n";
    }
};
int main(){ 
    D dobj;
    //D *dptr=new D();
    dobj.display_D();
    return 0;
}