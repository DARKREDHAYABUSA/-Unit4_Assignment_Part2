#include <iostream>
#include <string>
using namespace std;
int main() 

{
       int stop = 0;

      //Ask user for the stopping point value "stop"
       cout << "\nPlease enter a stopping point: ";
       cin >> stop;

       for(int i = 1; i <= stop; i++)
       {
          if( (i % 10) == 1) //number ends in 1
          {
            cout << i << "st" << endl;
          }
          if( (i % 10) == 2) //number ends in 2
          {
            cout << i << "nd" << endl;
          }

          if( (i % 10) == 3) //number ends in 3
          {
            cout << i << "rd" << endl; 
          }
          else if ( i % 10 == 4 || i % 10 == 5 || i % 10 == 6 || i % 10 == 7 || i % 10 == 8 || i % 10 == 9 || i % 10 == 0) //numbers end in 4-0
          {
            cout << i << "th" << endl; 
          }
       } 
 return 0;
 }
