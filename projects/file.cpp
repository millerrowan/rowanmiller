#include <iostream>

using namespace std;

int main ()
{
  char input = 0; //always initialize your variables 
  //char input = 'a'; you can assign a starting value to the input
  //int input; you can change the input type
  cout << "You entered" << input << endl; //endl is end line. put it at the end of any cout
  cin >> input; //takes whatever is typed into console andputs it into input variable
  input = input + 5; //arithmetic
  input += 5; //shortcut 
  
  cout << input; //prints " "
  return 0;

  //C-x C-s to save work
}


