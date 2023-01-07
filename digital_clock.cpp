#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
  time_t t = time(NULL);  //time() method in c++ is used. object type: current time as a value
  tm *timePtr = localtime(&t); //localtime() method is used to convert current time to identifier
  
//   storing the local time in variables from the timePtr structure
  int seconds = (timePtr->tm_sec);
  int minutes = (timePtr->tm_min);
  int hours = (timePtr->hour);
  
//  displaying the digital clock:
  while(true){
//     system cls is used to clear the output console screen
   system("cls");
   
   cout<<"The digital time is: ";
   cout<<"  "<<hours<<"  :  "<<minutes<<"  :  "<<seconds<<endl;
  }
  
  
  return 0;
}
