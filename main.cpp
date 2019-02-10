#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

using namespace std;

//Function Initializers

void board();
void checkwin();
void winner();

//End Function Initializers

//Variables

vector <char> spots {'o',  '1', '2', '3', '4', '5', '6', '7', '8', '9'};

bool whoisup {0};
bool badmove {0};
bool gameover {0};

int wincheck {0};
int starttick {1};

char turn {0};

//Variables End

int main(){
    checkwin();
    if(gameover == 1){
     board();
     cout << endl << endl << endl;
     return 0;
    }
    
    system("clear");
    
    if(starttick == 1){
    cout << "Welcome to AvianOS Tic-Tac-Toe" << endl;
    cout << "Enter to continue..." << endl;
    cin.ignore();
    starttick = 0;
    }
    
    
    
    if(badmove == 0){
        board();
    }
    else{
        cout << "Bad Move" << endl;
        board();
        badmove = 0;
    }
    
    if(whoisup == 0 and gameover != 1){
        cout << "Player 1\'s Turn: ";
        cin >> turn; 
    }
    else if(whoisup == 1 and gameover != 1){
        cout << "Player 2\'s Turn: ";
        cin >> turn; 
    }
    
    //Person1
    if(turn == '1' and whoisup == 0 and spots[1] != 'X' and spots[1] != 'O'){
        system("clear");
        spots[1] = 'X';
        whoisup = 1;
        main();
    }
    
    else if(turn == '2' and whoisup == 0 and spots[2] != 'X' and spots[2] != 'O'){
        system("clear");
        spots[2] = 'X';
        whoisup = 1;
        main();
    }
    else if(turn == '3' and whoisup == 0 and spots[3] != 'X' and spots[3] != 'O'){
        system("clear");
        spots[3] = 'X';
        whoisup = 1;
        main();
    }
    else if(turn == '4' and whoisup == 0 and spots[4] != 'X' and spots[4] != 'O'){
        system("clear");
        spots[4] = 'X';
        whoisup = 1;
        main();
    }
    else if(turn == '5' and whoisup == 0 and spots[5] != 'X' and spots[5] != 'O'){
        system("clear");
        spots[5] = 'X';
        whoisup = 1;
        main();
    }
    else if(turn == '6' and whoisup == 0 and spots[6] != 'X' and spots[6] != 'O'){
        system("clear");
        spots[6] = 'X';
        whoisup = 1;
        main();
    }
    else if(turn == '7' and whoisup == 0 and spots[7] != 'X' and spots[7] != 'O'){
        system("clear");
        spots[7] = 'X';
        whoisup = 1;
        main();
    }
    else if(turn == '8' and whoisup == 0 and spots[8] != 'X' and spots[8] != 'O'){
        system("clear");
        spots[8] = 'X';
        whoisup = 1;
        main();
    }
    else if(turn == '9' and whoisup == 0 and spots[9] != 'X' and spots[9] != 'O'){
        system("clear");
        spots[9] = 'X';
        whoisup = 1;
        main();
    }
    
    //Person2
    else if(turn == '1' and whoisup == 1 and spots[1] != 'X' and spots[1] != 'O'){
        system("clear");
        spots[1] = 'O';
        whoisup = 0;
        main();
    }
    
    else if(turn == '2' and whoisup == 1 and spots[2] != 'X' and spots[2] != 'O'){
        system("clear");
        spots[2] = 'O';
        whoisup = 0;
        main();
    }
    else if(turn == '3' and whoisup == 1 and spots[3] != 'X' and spots[3] != 'O'){
        system("clear");
        spots[3] = 'O';
        whoisup = 0;
        main();
    }
    else if(turn == '4' and whoisup == 1 and spots[4] != 'X' and spots[4] != 'O'){
        system("clear");
        spots[4] = 'O';
        whoisup = 0;
        main();
    }
    else if(turn == '5' and whoisup == 1 and spots[5] != 'X' and spots[5] != 'O'){
        system("clear");
        spots[5] = 'O';
        whoisup = 0;
        main();
    }
    else if(turn == '6' and whoisup == 1 and spots[6] != 'X' and spots[6] != 'O'){
        system("clear");
        spots[6] = 'O';
        whoisup = 0;
        main();
    }
    else if(turn == '7' and whoisup == 1 and spots[7] != 'X' and spots[7] != 'O'){
        system("clear");
        spots[7] = 'O';
        whoisup = 0;
        main();
    }
    else if(turn == '8' and whoisup == 1 and spots[8] != 'X' and spots[8] != 'O'){
        system("clear");
        spots[8] = 'O';
        whoisup = 0;
        main();
    }
    else if(turn == '9' and whoisup == 1 and spots[9] != 'X' and spots[9] != 'O'){
        system("clear");
        spots[9] = 'O';
        whoisup = 0;
        main();
    }
    else{
        system("clear");
        badmove = 1;
        return main();
    }


}


void board(){
    cout << spots[1] << "   |   " << spots[2] << "   |   " << spots[3] << endl
                                << "------------------" << endl <<
                  spots[4] << "   |   " << spots[5] << "   |   " << spots[6] << endl
                                << "------------------" << endl <<
                  spots[7] << "   |   " << spots[8] << "   |   " << spots[9] << endl;
}

void checkwin(){
    if(spots[1] == spots[2] and spots[2] == spots[3]){
        wincheck = 1;
        winner();
    }
    else if(spots[4] == spots[5] and spots[5] == spots[6]){
        wincheck = 2;
        winner();
    }
    else if(spots[7] == spots[8] and spots[8] == spots[9]){
        wincheck = 3;
        winner();
    }
    else if(spots[3] == spots[5] and spots[5] == spots[7]){
        wincheck = 4;
        winner();
    }
    else if(spots[1] == spots[5] and spots[5] == spots[9]){
        wincheck = 5;
        winner();
    }
    else if(spots[1] == spots[4] and spots[4] == spots[7]){
        wincheck = 6;
        winner();
    }
    else if(spots[2] == spots[5] and spots[5] == spots[8]){
        wincheck = 7;
        winner();
    }
    else if(spots[3] == spots[6] and spots[6] == spots[9]){
        wincheck = 8;
        winner();
    }

}
void winner(){
    if(wincheck == 1 and spots[1] == 'X'){
        system("clear");
        cout << "Player One Wins!" << endl << endl;
        
        gameover = 1;
    }
    else if(wincheck == 1 and spots[1] == 'O'){
        system("clear");
        cout << "Player Two Wins!" << endl << endl;
        
        gameover = 1;
    }
    if(wincheck == 2 and spots[4] == 'X'){
        system("clear");
        cout << "Player One Wins!" << endl << endl;
        
        gameover = 1;
    }
    else if(wincheck == 2 and spots[4] == 'O'){
        system("clear");
        cout << "Player Two Wins!" << endl << endl;
        
        gameover = 1;
    }
    if(wincheck == 3 and spots[7] == 'X'){
        system("clear");
        cout << "Player One Wins!" << endl << endl;
        
        gameover = 1;
    }
    else if(wincheck == 3 and spots[7] == 'O'){
        system("clear");
        cout << "Player Two Wins!" << endl << endl;
        
        gameover = 1;
    }
    if(wincheck == 4 and spots[3] == 'X'){
        system("clear");
        cout << "Player One Wins!" << endl << endl;
        
        gameover = 1;
    }
    else if(wincheck == 4 and spots[3] == 'O'){
        system("clear");
        cout << "Player Two Wins!" << endl << endl;
        
        gameover = 1;
    }
    if(wincheck == 5 and spots[1] == 'X'){
        system("clear");
        cout << "Player One Wins!" << endl << endl;
        
        gameover = 1;
    }
    else if(wincheck == 5 and spots[1] == 'O'){
        system("clear");
        cout << "Player Two Wins!" << endl << endl;
        
        gameover = 1;
    }
    if(wincheck == 6 and spots[1] == 'X'){
        system("clear");
        cout << "Player One Wins!" << endl << endl;
        
        gameover = 1;
    }
    else if(wincheck == 6 and spots[1] == 'O'){
        system("clear");
        cout << "Player Two Wins!" << endl << endl;
        
        gameover = 1;
    }
    if(wincheck == 7 and spots[2] == 'X'){
        system("clear");
        cout << "Player One Wins!" << endl << endl;
        
        gameover = 1;
    }
    else if(wincheck == 7 and spots[2] == 'O'){
        system("clear");
        cout << "Player Two Wins!" << endl << endl;
        
        gameover = 1;
    }
    if(wincheck == 8 and spots[3] == 'X'){
        system("clear");
        cout << "Player One Wins!" << endl << endl;
    
        gameover = 1;
    }
    else if(wincheck == 8 and spots[6] == 'O'){
        system("clear");
        cout << "Player Two Wins!" << endl << endl;
    
        gameover = 1;
    }
}