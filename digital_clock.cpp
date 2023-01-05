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
  
  
  return 0;
}
