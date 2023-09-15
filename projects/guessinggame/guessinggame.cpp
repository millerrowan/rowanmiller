#include <iostream>

using namespace std; 

/*Guessing Game is a game where a random number is generated and the user tries to guess it. The program will tell the user if the guess is too high or too low
Author: Rowan Miller 
09/07/2023*/ 

int main ()
{ 
  bool stillPlaying = true; 

  while (stillPlaying == true) //game will go on when still playing is true
    {
      srand(time(0));
      int randomNumber = 0 + (rand() % 100); //variable that holds random number
      int playerInput = 0;
      int guesses = 0;
      char restartInput = 'a';
      
      while (playerInput != randomNumber) //code will execute when the guess does not equal the answer 
      {
	cout << "Enter a number between 0 and 100" << endl;
	cin >> playerInput; //puts the player input into cin
	guesses++; //number of guess goes up by 1

	if (playerInput < randomNumber) //when the guess is less than the random number
	  {
	    cout << "Guess is too low" << endl;
	    
	  }
	else if (playerInput > randomNumber) //when the guess is higher than the random number
	  {
	    cout << "Guess is too high" << endl;
	  }
	
      }
      //when guess is correct 
      cout << "Guess is correct!" << endl;
      cout << "Number of guesses:" << guesses << endl; 
      cout << "Would you like to play again y/n?" << endl; 
      cin >> restartInput;
      if (restartInput == 'y') //when player selects yes to restart game
          {
	    stillPlaying = true; 
	  }
      else if (restartInput == 'n') // when player selects no to restart game
	  {
	    stillPlaying = false; //ends game
	    cout << "Thanks for playing!!" << endl;  
	  }
	else
	  {
	    cout << "enter a valid input y/n" << endl; 
	  }
 
    }
  return 0; 
}
