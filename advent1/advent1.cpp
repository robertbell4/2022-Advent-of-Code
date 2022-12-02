#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

    fstream data;
    data.open("advent1data.txt", ios::in);
    int newcal = 0;
    int mostcal = 0;
   
        if(data.is_open()){
            string word;

            while(getline(data, word)){

                if ( word.empty()){
                  
                    if ( newcal > mostcal){
                        mostcal = newcal;
                    } 
                    newcal = 0;
                    continue;
                }

                newcal = newcal + stoi(word);
                cout << mostcal;
                cout << "\n";
                

                
                
                
            }
        }
   cout << "END"; 
   return 0;
}