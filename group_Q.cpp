// // Create a class Candy with the following attributes:
// //•  string color (stores the color of the candy)
// //•  int points (stores the points awarded)
// // The class should have the following member functions:
// //•  setCandy(string c, int p): Sets the color and points of the candy.
// //•  displayCandy(): Displays the color and points of the candy.
// // In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy().

// #include<iostream>
// using namespace std;
// class Candy{
//     string color;
//     int points;
//     public:
//     Candy();//default constructor
//     Candy(string clr);//parameterized
//     Candy(string clr, int pts);//parameterized
//     void setCandy(string, int);
//     void displayCandy();
//     void loose_Candy();
//     void loose_Candy(int);
//     void gain_Candy();
//     void gain_Candy(int);
// };
// Candy::Candy(){
//     color="Black";points=0;
// }
// Candy::Candy(string clr){
//     color=clr;points=0;
// }
// Candy::Candy(string clr,int pts){
//     color=clr;points=pts;
// }
// void Candy::setCandy(string c,int p){
//     color=c;
//     points=p;
// }
// void Candy::loose_Candy(){
//     points-=2;
// }
// void Candy::loose_Candy(int p){
//     points-=p;
// }
// void Candy::gain_Candy(){
//     points+=2;
// }
// void Candy::gain_Candy(int t){
//     points+=t;
// }
// void Candy::displayCandy(){
//     cout<<"\ncolor : "<<color;
//     cout<<"\nPoints : "<<points;
// }
// int main(){
//     Candy c1,c2;
//     c1.setCandy("Red",35);
//     c2.setCandy("Blue",40);
//     c1.gain_Candy(7);
//     c1.displayCandy();
//     c2.displayCandy();
//     return 0;
// }

// #include<iostream>                       
// using namespace std;
// class SmartLight{
//     string brand="";
//     int brightness;

//     bool isOn;
//     public:
//     SmartLight();
//     SmartLight(string unknown, int bright, bool status);
//     void turnOn();
//     void turnOff();
//     void increaseBrightness();
//     void decreaseBrightness();
//     void displayStatus();
// };
// SmartLight::SmartLight(){
//     isOn=false;
//     brand="unknown";
//     brightness=50;
// }
// SmartLight::SmartLight(string unknown, int bright, bool status){
//     brand=unknown;
//     brightness=bright;
//     isOn=status;
// }

// void SmartLight::turnOn(){
//     isOn=true;
// }
// void SmartLight::turnOff(){
//     isOn=false;
// }
// void SmartLight::increaseBrightness(){
//     brightness+=10;
//     if(brightness>100){
//         brightness=100;
// }
// }
// void SmartLight::decreaseBrightness(){
//     brightness-=10;
//     if(brightness<0){
//         brightness=0;
//     }
// }
// void SmartLight::displayStatus(){
//     cout<<endl<<brand;
//     cout<<endl<<brightness;
//     if(isOn==true){
//         cout<<"\nLight Is On";
//     }
//     else{
//         cout<<"\nLight Is Off";
//     }
// }
// int main(){
//     SmartLight l1;
//     SmartLight l2("chandaniChampa",50,true);
//     l1.increaseBrightness();
//     l1.turnOn();
//     l1.displayStatus();
//     cout<<endl;
//     l2.decreaseBrightness();
//     l2.turnOff();
//     l2.displayStatus();
//     return 0;
// }

#include<iostream>
using namespace std;
class MovieTicket{
    string movieName;
    int seatNumber;
    float ticketPrice;
    public:
    bool isBooked;
    MovieTicket();
    MovieTicket(string unknown,int seat, int price, bool isBooked);
    void bookTicket();
    void cancelTicket();
    void displayTicketDetails();
    int calculateTotalCost(int Numberoftickets);
};
MovieTicket::MovieTicket(){
    movieName="mai hoon lucky  the racer";
    isBooked=false;
    seatNumber=1;
    ticketPrice=100;
}
MovieTicket::MovieTicket(string unknown,int seat, int price, bool isBooked){
    movieName=unknown;
    seatNumber=seat;
    ticketPrice=price;  
    this-> isBooked=isBooked;
}
void MovieTicket:: bookTicket(){
    if(isBooked==false){
        isBooked=true;
    }
}
void MovieTicket::cancelTicket(){
    if(isBooked==true){
        isBooked=false;
    }
}
int MovieTicket::calculateTotalCost(int Numberoftickets){
    return ticketPrice*Numberoftickets;
}
void MovieTicket:: displayTicketDetails(){
    cout<<endl<<movieName;
    cout<<endl<<seatNumber;
    cout<<endl<<ticketPrice;
    cout<<endl<<calculateTotalCost(5);
    if(isBooked==true){
        cout<<"no tickets booked";
    }
    else{
        cout<<"ticket not booked";
        }
}
int main(){
    MovieTicket m1;
    m1.displayTicketDetails();
    MovieTicket m2("the return of rebel",50,400,false);
    cout<<endl;
    m2.bookTicket();
    m2.displayTicketDetails();
    return 0;
}


