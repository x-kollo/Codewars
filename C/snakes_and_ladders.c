//www.codewars.com/kata/587136ba2eefcb92a9000027/train/c

#include <stdio.h>

char* snakes_ladders(int die1, int die2)
{
    static int move = 1;
    static int player1;
    static int player2;
    if(player1 == 100 || player2 == 100)
      return "Game over!";
    int this_move = 0;
    if(move == 1)
        this_move = player1;
    else 
        this_move = player2;
    this_move += die1+die2;
    if(this_move > 100)
        this_move = 100-(this_move%100);
    switch(this_move)
    {
        case 2: this_move = 38; break;
        case 7: this_move = 14; break;
        case 8: this_move = 31; break;
        case 15: this_move = 26; break;
        case 16: this_move = 6; break;
        case 21: this_move = 42; break;
        case 28: this_move = 84; break;
        case 36: this_move = 44; break;
        case 46: this_move = 25; break;
        case 49: this_move = 11; break;
        case 51: this_move = 67; break;
        case 62: this_move = 19; break;
        case 64: this_move = 60; break;
        case 71: this_move = 91; break;
        case 74: this_move = 53; break;
        case 78: this_move = 98; break;
        case 87: this_move = 94; break;
        case 89: this_move = 68; break;
        case 92: this_move = 88; break;
        case 95: this_move = 75; break;
        case 99: this_move = 80; break;
        default: break;
    }
    if(move == 1)
        player1 = this_move;
    else 
        player2 = this_move;
    char *text = (char*)malloc(32);
    if(this_move == 100) 
        sprintf(text, "Player %d Wins!",move);
    else sprintf(text, "Player %d is on square %d",move,this_move);
  
    if(die1 != die2)
    {
        if(move+1 == 3)
            move--;
        else ++move;
    }  
    return text;
}