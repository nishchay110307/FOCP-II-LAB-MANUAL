// #include<iostream>
// using namespace std;
// void welcome(void);
// void welcome(string name);
// int main(){
//     welcome();
//     welcome("section C");
//     return 0;
// }
// void welcome(){
//     cout<<"\nwelcome agent";
// }
// void welcome(string name){
//     cout<<("\nwelcome ")<<name;
// }

// #include<iostream>
// using namespace std;
// int sum(int x,int y){
//     cout<<"for int ";
//     return x+y;
// }
// float sum(float x,float y){
//     cout<<"\nfor float ";
//     return x+y;
// }
// double sum(double x,double y){
//     cout<<"\nfor double ";
//     return x+y;
// }
// int main(){
//     cout<<sum(5,10);
//     cout<<sum(5.28f,10.28f);
//     cout<<sum(5.34567890,8.1092384756);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int result(int n1, int n2){
//     return n1+n2;
// }
// int result(int n1, int n2, int n3){
//     return n1+n2+n3;
// }
// int result(int n1, int n2,int n3,int n4){
//     return n1+n2+n3+n4;
// }
// int result(int n1, int n2,int n3,int n4,int n5){
//     return n1+n2+n3+n4+n5;
// }
// int main(){
//     cout<<"sum for 2 subject is "<<result(19,93);
//     cout<<"\nsum for 3 subject is "<<result(19,93,54);
//     cout<<"\nsum for 4 subject is "<<result(19,93,76,32);
//     cout<<"\nsum for 5 subject is "<<result(19,93,65,54,65);
//     return 0;
// }

// the above code has many function so the shorter version is :

// #include<iostream>
// using namespace std;

// int result(int n1, int n2,int n3=0,int n4=0,int n5=0){
//     return n1+n2+n3+n4+n5;
// }
// int main(){
//     cout<<"sum for 2 subject is "<<result(19,93);
//     cout<<"\nsum for 3 subject is "<<result(19,93,54);
//     cout<<"\nsum for 4 subject is "<<result(19,93,76,32);
//     cout<<"\nsum for 5 subject is "<<result(19,93,65,54,65);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void welcome(string fname = " agent", string lname =""){
//     cout<<"\n Welcome" <<fname<<lname;
// }
// int main(){
//     welcome();
//     welcome(" Nishchay ");
//     welcome(" Nishchay ","Gehlaut");
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void computeperformance(int*marks,int n){
//   int min=mmarks[0];
//   int max=marks[0];
//   int avg=marks[0];
//      for(int i=0;i<n;i++){
//         if(marks[i]>marks[0]){
//             max=marks[i];
//         }
//         else if(marks[i]<marks[0]){
//             min=marks[i];
//             avg+=marks[i];
//         }
//     }
    
//     cout<<"\n max="<<max<<"\n min="<<min<<"\n avg="<<float(avg)/n;
// }

// int main(){
//     int marks[15]={10,20,30,40,50,60,70,80,90,10,20}
//     computeperformance(Marks,10);
  //  return 0;
//}

//wrong solution have to try at home 

