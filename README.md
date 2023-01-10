# Digital_Clock

Digital Clock Project in C++ :

This project is the implementation of a digital clock (depending on the user location) using the C++ programming language.

Steps followed to make the digital clock:

1. Determining the current system time:</br>
  Usage of the time library's time() function.</br>
  localtime() is a function used to store the current time in a structure.
 
2. Make a structure (the declarations will be hours, minutes seconds):</br>
  Storing the current system time in variables of a structure timePtr.
  
3. Displaying the current system time:</br>
  Printing the variables of the timePtr structure (the variables are: hours, minutes and seconds).</br>
  Usage of system("cls") in order to clear screen.
  
4. Incrementing the system time:</br>
  The second, minute and hour variables are incremented in the while loop.</br>
  When seconds reach 60, it is updated back to 1.</br>
  When minute reach 60, it is updated back to 1.</br>
  When hour reach 24, it is updated to 00.

Output:
![Capture](https://user-images.githubusercontent.com/93914795/211635520-3af731b6-1a26-482e-8241-774506f89319.JPG)

