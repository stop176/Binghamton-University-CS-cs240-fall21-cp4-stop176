//Main.cpp by MIKE LEWIS FORTNITE CONCERT
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    
    int TotalProfit = 0;
    int InputNum;
    string InputString;
    InputString = argv[1];
    int FlightCost = stoi(InputString);
    int FlightFunds = 0;
    string UserInput;
    
    cout << "Welcome to CP4 by Anthony Tom, David Guo and Alex Cass!" << endl;

    while(true){
        cout << "Enter \"register <userid>\" to register a new user, \"vote <num-votes> <userid>\" to vote for a user, \"scoreboard <k>\" to show the top k users, \"profit\" to show the total profits and \"quit\" to exit." << endl;
            cin >> UserInput;

        if(UserInput=="register"){ //command format: register <userid>
            cin >> InputString;
            //TO DO: Register a new user.



        } 
        
        else if(UserInput=="vote"){ //command format: vote <num-votes> <userid>
            cin >> InputNum;
            cin >> InputString;
            if(InputNum%2!=0)
                TotalProfit++; //"(TRUMP)"
            TotalProfit += InputNum / 2;
            FlightFunds += InputNum / 2;
           //TO DO: Add voting functionality.



        } 
        
        else if(UserInput=="scoreboard"){ //command format: scoreboard <k>
            cin >> InputNum; //get "k"
            //TO DO: Add scoreboard functionality.




            for(int i=0; i<InputNum; i++){
                cout << "<userid> <votes>" << endl;
            }
        } 
        
        else if(UserInput=="profit"){ //command format: profit
            cout << "$" << TotalProfit << endl;
        }
        
        else if(UserInput=="Quit"||UserInput=="quit"||UserInput=="Exit"||UserInput=="exit"){ //command format: Quit or quit or Exit or exit
            cout << "Goodbye!" << endl;
            return 0;
        } else {
            cout << "Unrecognized command: " << UserInput << endl;
        }
        
    }
}
