#include <iostream>
#include <cstring> 
#include <string.h>

using namespace std;

/* 
Palindrome is a program that checks if the user entered a palindrome or not
Author: Rowan Miller 
09/15/2023
 */ 


int main() {
  char str[80];
  char str2[strlen(str)];
  
  cout << "enter a word or phrase" << endl;
  cin.get(str,80);
  cin.get();
  
  int count = 0;
  int length = strlen(str2); 
  bool pal = false; 

  for(int i = 0; i < strlen(str); i++) {
    //sets everything to lowercase
    str[i] = tolower(str[i]);
    //gets rid of spaces and non letters or numbers credit: https://www.geeksforgeeks.org/iswalnum-function-in-c-stl/#
    if (iswalnum(str[i])) {
      str2[count++]=str[i];
    }
  } str2[count] = '\0'; 

  char str3[count];

  //gets rid of extra memory 
  for (int x = 0; x < count; x++) {
    str3[x] = str2[x];
    
  }

  char str4[strlen(str3)];  
  count =0;

  //reverses the input
  for (int j = (strlen(str3)) - 1; j >= 0; j--) {
    str4[count]=str3[j];
    count ++;
  }
  
    str4[strlen(str4)] = '\0';

    //compares the reversed str4 with str3   
  if (strcmp(str3, str4) == 0) {
    pal = true; 
  } 

  //if the two strings are equal
  if (pal == true) {
   cout << "input is a palindrome!!" << endl;
  }
  //if the two strings are not equal
  else {
  cout << "input is not a palindrome" << endl; 
  }
  
    return 0;

}


