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
    for(i = 0; i < 3; i++)
    { cout << "\n\t\t\t\t\t\t\t | ";
        for (j = 0; j < 3; j++)
        {
            cout << PositionalMatrix[i][j] << "  |  ";
        }
        cout << "\n\t\t\t\t\t\t\t |----|-----|-----|";
    }
    cout << "\n\n\n\n";
}




/*The position where the required symbols are to be inputed. */
void InputFields(){
  int InputField; /*Accepts the numeric position of the Element. */

  if(PlayerChoise == 'X')
  cout << "Player" << CurrentPlayer << "'s turn. \nEnter the block number: ";

  else if(PlayerChoise == 'O')
  cout << "Player" << CurrentPlayer << "'s turn. \nEnter the block number: ";

  cin >> InputField;

  if(InputField == 1)
    {
      if (PositionalMatrix[0][0] == '1') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If TRUE, the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 2)
    {
      if (PositionalMatrix[0][0] == '2') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 3)
    {
      if (PositionalMatrix[0][0] == '3') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 4)
    {
      if (PositionalMatrix[0][0] == '4') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 5)
    {
      if (PositionalMatrix[0][0] == '5') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 6)
    {
      if (PositionalMatrix[0][0] == '6') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 7)
    {
      if (PositionalMatrix[0][0] == '7') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 8)
    {
      if (PositionalMatrix[0][0] == '8') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

    else if(InputField == 9)
    {
      if (PositionalMatrix[0][0] == '9') /*Compairing the matrix positional content with the numeric character value. */
          PositionalMatrix[0][0] = PlayerChoise; /*If similar the value is replaced with that of 'X' or 'O'. */
      else{
        cout << "Matrix field already in use. Try again!!" << endl;
        InputFields(); //Recursive method to recall the method to input the fields.
      }
    }

}



/*How's the player gonna win? */
void WinLogic(){

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



int main(void) {
  Console();
return 0;
  
}
