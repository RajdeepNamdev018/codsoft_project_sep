#include <iostream>
#include <stdlib.h>

using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row,column;
char Chance = 'X';
bool draw = false;
void display_board(){
    cout<<"PLAYER - 1 [X]\t PLAYER - 2 [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"   |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"   |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"   |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}
void player_Chance(){
    if(Chance == 'X'){
        cout<<"\n\tPlayer - 1 [X] for Chance : ";
    } else if(Chance == 'O'){
        cout<<"\n\tPlayer - 2 [O] for Chance : ";
    }
    cin>> choice;
    switch(choice){
        case 1: row=0; column=0; 
            break;
        case 2: row=0; column=1; 
            break;
        case 3: row=0; column=2; 
            break;
        case 4: row=1; column=0; 
            break;
        case 5: row=1; column=1; 
            break;
        case 6: row=1; column=2; 
            break;
        case 7: row=2; column=0; 
            break;
        case 8: row=2; column=1; 
            break;
        case 9: row=2; column=2; 
            break;
        default:
            cout<<"Invalid Move";
    }
    if(Chance == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'X';
        Chance = 'O';
    }else if(Chance == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'O';
        Chance = 'X';
    }else {
        cout<<"Box already filled!!! \n Please choose another!!!\n\n";
        player_Chance();
    }
    display_board();
}

bool gameover(){
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;
    draw = true;
    return false;
    
}

int main(){
    system("Color 13"); 
    int mood;
    cout<<"\n\t*********** This Game created by  RAJDEEP NAMDEV ***********\n\t "<<endl;
    cout<<"\n\t*********** Welcome to the TIC - TAC - TOE Game!!! ***********\n\t"<<endl;
    cout<<"\t\t\t T I C  -- T A C -- T O E -- G A M E \t\t\t"<<endl;
    cout<<"\n\t\t\t\t This Game is for  2 PLAYERS \n\t\t\t"<<endl;
    cout<<"\n\t******* Press 0 to quit the Game ********\n\t"<<endl;
    cin>>mood;
    if (mood == 0 ){
        exit(0);
    }
    while(gameover()) {
        display_board();
        player_Chance();
        gameover();
    } if(Chance == 'X' && draw == false){
        cout<<"\n\nCongratulations! Player with 'O' (PLAYER - 2) has won the game"<<endl;
    } else if(Chance == 'O' && draw == false){
        cout<<"\n\nCongratulations! Player with 'X' (PLAYER - 1) has won the game"<<endl;
    } else
    cout<<"\n\nGAME DRAW!!!\n\n";
    
    return 0;
} 