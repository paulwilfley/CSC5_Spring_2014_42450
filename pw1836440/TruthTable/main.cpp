/* 
 * File:   main.cpp
 * Author: Paul Wilfley
 * Created on March 17, 2014, 9:32 AM
 * Purpose: Confirm the Truth
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Program begins here
int main(int argc, char** argv) 
{
    //Declare Variables
    bool x=true;
    bool y=true;
    
    //Output the headings
    cout << "X Y !X !Y X||Y X&&Y" ;
    cout << "X^Y X^Y^x X^Y^Y  !(X&&Y) ";
    cout << "!X||Y !(X||Y) !X&&!Y " <<endl;
    
    //Output the first row of the truth table
    
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << " ";
    cout << (!y?'T':'F') << " ";
    cout << (x||y?'T':'F')<< "  ";
    cout << (y&&y?'T':'F')<< "  ";
    
    //Output the second row
    y=false;
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << " ";
    cout << (!y?'T':'F') << " ";
    cout << (x||y?'T':'F')<< "  ";
    cout << (x&&y?'T':'F')<< "  ";
    cout << endl;
    
    //Output the third row
    x=true;
    y=false;
    
    //Output the fourth
    y=false;
            
    //Program ends here
    return 0;
}

