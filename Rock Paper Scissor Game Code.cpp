#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to get the current date and time
string getCurrentDateTime() {
    time_t now = time(0);
    struct tm localTime;
    if (localtime_s(&localTime, &now) != 0) {
        return"Unknown Time";  // Error handling
    }
    char buffer[80];
    if (strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &localTime)) {
        return string(buffer);
    }
    else{
        return"Unknown Time";  // Error handling
    }}
// Function to determine the result of the game
string getResult(string userChoice, string computerChoice) {
    if(userChoice == computerChoice) {
        return"Draw";
    }
    else if((userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "paper" && computerChoice == "rock") ||
        (userChoice == "scissors" && computerChoice == "paper")) {
        return"Win";
    }
    else{
        return"Lose";
    }}

// Function to save game history to a file
void saveHistory( string name,  string userChoice,  string computerChoice,  string result, int gameNumber) {
    ofstream historyFile("game_history.txt", ios::app);
    if(historyFile.is_open()) {
        historyFile<<"| Game #" <<gameNumber<<" | " << getCurrentDateTime()<<" | "<<name<<" | "<< userChoice<<" | "<<computerChoice<<" | "<<result<<" |\n";
        historyFile.close();
    }
    else{
        cout<<"Error: Unable to open history file." << endl;
    }}

// Function to display game history
void viewResults(){
    ifstream historyFile("game_history.txt");
    if(historyFile.is_open()) {
        string line;
        cout<<"\nGame History:\n";
        cout<<"| Game #  | Date & Time         | Username  | User Choice | Computer Choice | Result |\n";
        cout<<"|---------|---------------------|-----------|-------------|-----------------|--------|\n";
        while(getline(historyFile, line)){
            cout<<line<<endl;
        }
        historyFile.close();
    }
    else {
        cout<<"Error: Unable to read history file."<<endl;
    }}

// Main function
int main(){
    string name;
    
    cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
        <<"            -                         -"<<endl
        <<"            -   Enter your username   -"<<endl
        <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl<<endl<<"\t      ";
    cin>>name;
    system("cls");

    string choices[] = { "rock", "paper", "scissors" };
    srand(time(0)); // Seed random number generator

    int gameNumber = 1; // Initialize game number

    while (true){
        cout<<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
            <<"            -                                   -"<<endl
            <<"            -  WELLCOME TO ROCK-PAPER-SCISSORS  -"<<endl
            <<"            -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl
            <<"            -                                   -"<<endl
            <<"            -         1. Play Game              -"<<endl
            <<"            -         2. View History           -"<<endl
            <<"            -         3. Exit                   -"<<endl
            <<"            -------------------------------------"<<endl
            <<"            -        ENTER YOUR CHOICE          -"<<endl
            <<"            -------------------------------------"<<endl<<endl<<"\t                     ";
        int option;
        cin>>option;
        system("cls");

        if(option == 1) {
            string userChoice;
            cout<<"\nChoose rock, paper, or scissors : ";
            cin>>userChoice;

            // Validate user input
            if(userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
                cout<<"Invalid choice. Please try again."<<endl;
                continue;
            }

            // Generate computer choice
            string computerChoice = choices[rand() % 3];

            // Determine the result
            string result = getResult(userChoice, computerChoice);

            // Display the result
            cout<<"Computer chose: "<<computerChoice<<endl;
            cout<<"You "<<result<<"!"<<endl;

            // Save the game history
            saveHistory(name, userChoice, computerChoice, result, gameNumber);

            // Increment the game number for the next round
            gameNumber++;
        }
        else if(option == 2) {
            viewResults();
        }
        else if(option == 3) {
            cout<<"Exiting the game. Goodbye!"<<endl;
            break;
        }
        else{
            cout<<"Invalid option. Please try again."<<endl;
        }}
    return 0;
}