#include <iostream>
using namespace std;
/*Declaring 3X3 array for positional value*/
char PositionalMatrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
/*This is taken as char b'coz of, 
  'if' condition and the value ie 'X' and 'O' 
  is to be stored in the array variable.
*/

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
void InputKeys(){

}
/*How's the player gonna win? */
void WinLogic(){

}
/*Swiches between Player 1 and Player 2 ie between 'X' and 'O'*/
void TooglePlayer(){

}

int main(void) {
  Console();
return 0;
  
}
