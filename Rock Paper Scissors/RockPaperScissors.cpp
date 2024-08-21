#include<iostream>
#include<ctime>
using namespace std;

void banner();
char getUserInput();
char getComputerInput();
void showChoice(char);
void showWinner(char, char);

int main()
{
    banner();
    char user, computer;

    user = getUserInput();
    cout << "Your choice is : ";
    showChoice(user);
    
    computer = getComputerInput();
    cout << "Computer choice is : ";
    showChoice(computer);

    showWinner(user, computer);

    return 0;
}

void banner(){
    cout << "\t|------------------------|" << endl;
    cout << "\t|  Rock, Paper, Scissors |" << endl;
    cout << "\t|------------------------|" << endl;
}
char getUserInput(){
    char choice;
    cout << "Choose your option : " << endl;
    cout << "(r) for Rock" << endl << "(p) for Paper" << endl << "(s) for Scissors" << endl << "-> ";
    cin >> choice;

    if(choice != 'r' && choice != 'p' && choice != 's')
        cout << "Invalid choice!" << endl;
    
    return choice;
}
char getComputerInput(){
    srand(time(0));
    int choice = rand() % 3 + 1;
    
    if(choice == 1)
        return 'r';
    else if(choice == 2)
        return 'p';
    else
        return 's';
}
void showChoice(char input){
    if(input == 'r')
        cout << "Rock" << endl;
    else if(input == 'p')
        cout << "Paper" << endl;
    else if(input == 's')
        cout << "Scissors" << endl;
}
void showWinner(char user, char computer){
    if(user == 'r' && computer == 's')
        cout << "YOU WIN! Rock smashes the Scissiors." << endl;
    else if(user == 's' && computer == 'p')
        cout << "YOU WIN! Scissors cuts the Paper." << endl;
    else if(user == 'p' && computer == 'r')
        cout << "YOU WIN! Paper wraps the Rock." << endl;
    else if(computer == 's' && user == 'p')
        cout << "COMPUTER WINS! Scissors cuts the Paper." << endl;
    else if(computer == 'p' && user == 'r')
        cout << "COMPUTER WINS! Paper wraps the Rock." << endl;
    else if(computer == 'r' && user == 's')
        cout << "COMPUTER WINS! Rock smashes the Scissiors." << endl;
    else
        cout << "TIE! Play again and win the game." << endl;
}