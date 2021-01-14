/*
Project: Ultimate TicTacToe
Contributer: Sudeep Swain
Date of Completion: 15-01-2021
Don't forget to FORK the repo and hit a STAR.
*/

#include <iostream>

using namespace std;

/*Declaring 3X3 array for positional value*/

char PositionalMatrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

/*This is taken as char b'coz of, 
  'if' condition and the value ie 'X' and 'O' 
  is to be stored in the array variable.
*/

char PlayerChoise = 'X'; // Chooses between X and O.

int CurrentPlayer = 1; // Chooses between Player1 and Player2.



/*Console Designing Style. */

void Console(){
    system("cls");

    cout << "\n======================================================= ULTIMATE TIC-TAC-TOE =======================================================";
    
    cout << "\n\n\t\t\t Rules:- \t\t\t\t\t\t\t\t\t Author: Sudeep Swain\n";
    
    cout << "\n\t  Enter the position to input your symbol. \n";
    
    cout << "\n\t   Try to form a triplet to win the game. ";
    
    int i = 0, j = 0; /*initializing counter variables*/
    
    cout << "\n\n\n\t\t\t\t\t\t\t |----|-----|-----|";
    
    for(i = 0; i < 3; i++){ 
      
      cout << "\n\t\t\t\t\t\t\t | ";

        for (j = 0; j < 3; j++){

          cout << PositionalMatrix[i][j] << "  |  ";

        }

        cout << "\n\t\t\t\t\t\t\t |----|-----|-----|";

    }

    cout << "\n\n\n\n";    

}



/*Swiches between Player 1 and Player 2 ie between 'X' and 'O' */

void SwitchPlayer(){

  /*If player choise is 'X' then it will switch to 'O'. */
  if (PlayerChoise == 'X'){

    PlayerChoise = 'O';

    CurrentPlayer = 2; //Current Player switches from 1 to 2 .
  }
  /*If player choise is 'O' then it will switch to 'X'. */
  else{

    PlayerChoise = 'X';

    CurrentPlayer = 1; //Current Player switches from 2 to 1.
  }      

}




/*The position where the required symbols are to be inputed. */

void InputFields(){

  int InputField; /*Accepts the numeric position of the Element. */

  if(PlayerChoise == 'X')
  cout << "\n\n\n\t Player" << CurrentPlayer << "'s turn!! \n\n\t Enter the block number: ";

  else if(PlayerChoise == 'O')
  cout << "\n\n\n\t Player" << CurrentPlayer << "'s turn!! \n\n\t Enter the block number: ";

  cin >> InputField;

  if(InputField == 1)
    {
      if(PositionalMatrix[0][0] == '1') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If TRUE, the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "\n\n\t Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 2)
    {
      if(PositionalMatrix[0][1] == '2') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][1] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "\n\n\t Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 3)
    {
      if(PositionalMatrix[0][2] == '3') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][2] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "\n\n\t Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 4)
    {
      if(PositionalMatrix[1][0] == '4') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[1][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 5)
    {
      if(PositionalMatrix[1][1] == '5') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[1][1] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "\n\n\t Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 6)
    {
      if(PositionalMatrix[1][2] == '6') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[1][2] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "\n\n\t Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 7)
    {
      if(PositionalMatrix[2][0] == '7') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[2][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "\n\n\t Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 8)
    {
      if(PositionalMatrix[2][1] == '8') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[2][1] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "\n\n\t Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 9)
    {
      if(PositionalMatrix[2][2] == '9') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[2][2] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "\n\n\t Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

}



/*How's the player gonna win? */
char WinLogic(){
  // For Player1 with symbol 'X' to win

  /*If same ROW*/
  if(PositionalMatrix[0][0] == 'X' && PositionalMatrix[0][1] == 'X' && PositionalMatrix[0][2] == 'X')
    return 'X';
    if(PositionalMatrix[1][0] == 'X' && PositionalMatrix[1][1] == 'X' && PositionalMatrix[1][2] == 'X')
      return 'X';
      if(PositionalMatrix[2][0] == 'X' && PositionalMatrix[2][1] == 'X' && PositionalMatrix[2][2] == 'X')
        return 'X';

        /*If same COLUMN*/
        if(PositionalMatrix[0][0] == 'X' && PositionalMatrix[1][0] == 'X' && PositionalMatrix[2][0] == 'X')
          return 'X';
          if(PositionalMatrix[0][1] == 'X' && PositionalMatrix[1][1] == 'X' && PositionalMatrix[2][1] == 'X')
            return 'X';
            if(PositionalMatrix[0][2] == 'X' && PositionalMatrix[1][2] == 'X' && PositionalMatrix[2][2] == 'X')
              return 'X';

              /*If same DIAGONAL*/
              if(PositionalMatrix[0][0] == 'X' && PositionalMatrix[1][1] == 'X' && PositionalMatrix[2][2] == 'X')
                return 'X';
                if(PositionalMatrix[2][0] == 'X' && PositionalMatrix[1][1] == 'X' && PositionalMatrix[0][2] == 'X')
                  return 'X';
 
    // For Player2 with symbol 'O' to win

    /*If same ROW*/
    if(PositionalMatrix[0][0] == 'O' && PositionalMatrix[0][1] == 'O' && PositionalMatrix[0][2] == 'O')
      return 'O';
      if(PositionalMatrix[1][0] == 'O' && PositionalMatrix[1][1] == 'O' && PositionalMatrix[1][2] == 'O')
        return 'O';
        if(PositionalMatrix[2][0] == 'O' && PositionalMatrix[2][1] == 'O' && PositionalMatrix[2][2] == 'O')
          return 'O';

          /*If same COLUMN*/
          if(PositionalMatrix[0][0] == 'O' && PositionalMatrix[1][0] == 'O' && PositionalMatrix[2][0] == 'O')
            return 'O';
            if(PositionalMatrix[0][1] == 'O' && PositionalMatrix[1][1] == 'O' && PositionalMatrix[2][1] == 'O')
              return 'O';
              if(PositionalMatrix[0][2] == 'O' && PositionalMatrix[1][2] == 'O' && PositionalMatrix[2][2] == 'O')
                return 'O';

                /*If same DIAGONAL*/
                if(PositionalMatrix[0][0] == 'O' && PositionalMatrix[1][1] == 'O' && PositionalMatrix[2][2] == 'O')
                  return 'O';
                  if(PositionalMatrix[2][0] == 'O' && PositionalMatrix[1][1] == 'O' && PositionalMatrix[0][2] == 'O')
                    return 'O';
  
  return 'N'; // If above condition fails this returns NULL
}




int main() {

  int NosOfTrials = 0; // Calculate the nos of trial
  
  Console(); // Calls the Console() before performing any operation
  
  while(1){
    
    NosOfTrials ++; // Counts the nos the trials 0-8 in each ieration
    
    Console(); // Calls the Console() in each iteration
    
    InputFields(); // Let you input the numeric place value in each iteration
    
    // Condition to check which player wins the match in each iteration
    if(WinLogic() == 'X'){
      Console();
      cout << "\n\n\t\t\t\t\t\t\t   Player1 wins!" << "\n\n\n"; // X == PLAYER1
      break;
    }

    else if(WinLogic() == 'O'){
      Console();
      cout << "\n\n\t\t\t\t\t\t\t   Player2 wins!" << "\n\n\n"; // O = PLAYER2
      break;
    }
    
    else if(NosOfTrials == 9 && WinLogic() == 'N'){ //Either if the condition returns NULL or the NosOfTrial exceeds 9 it displays as the game is draw.
      cout << "\n\n\t\t\t\t\t\t\t   Match draw!!!" << "\n\n\n";
      break;
    }
    
    SwitchPlayer(); //Switch the player in each iteration
  }
  
  system("pause"); //Doesn't directly terminate the program, rather waits for user input for the termination.
  return 0;  
}
