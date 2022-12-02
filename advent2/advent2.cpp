/*    ADVENT 2022 DAY 2
Rock Paper Scissors
If rock wins 1 point, 2 for paper, 3 for scissors
PLUS

0 for a loss, 3 for a draw, 6 for a win

given a strategy guide, what would be the total score?
          OPPONENT       PLAYER        WIN
Rock         A            X             1
Paper        B            Y             2
Scissors     C            Z             3

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    fstream strat;
    strat.open("advent2input.txt", ios::in);
    int score = 0;
    if (strat.is_open()){
        string round;

        while (getline(strat, round )){
            switch (round[0]){

            case 'A': //opponent throws rock
                switch (round[2]){
                case 'X':
                    score = score + 4;
                    break;
                case 'Y':
                    score = score + 8;
                    break;
                case 'Z':
                    score = score + 3;
                    break;
                default:
                    break;
                }
                break;

            case 'B': //opponent throws paper
                switch (round[2]){
                case 'X':
                    score = score + 1;
                    break;
                case 'Y':
                    score = score + 5;
                    break;
                case 'Z':
                    score = score + 9;
                    break;
                default:
                    break;
                }
                
                break;
             case 'C': //opponent scissors
                switch (round[2]){
                case 'X':
                    score = score + 7;
                    break;
                case 'Y':
                    score = score + 2;
                    break;
                case 'Z':
                    score = score + 6;
                    break;
                default:
                    break;
                }
                
                break;
            
            default:
                break;
            }
            cout << score;
            cout << "\n";
        }
    }  


}