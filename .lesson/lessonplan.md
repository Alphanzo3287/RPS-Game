# Lesson plan
#include<iostream>
#include<string>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
string computerChoice();
string userChoice();
void whoWins(string compInpt, string userInpt);
int runAgain();
int main()
{
string compInpt;
string userInpt;
int again;
cout << "Welcome to the Rock Paper Scissors game! " << endl;
do
{
compInpt = computerChoice();
userInpt = userChoice();
whoWins(compInpt, userInpt);
again = runAgain();
} while ( again!= 2);
cout << "Have a nice day!" << endl;
system("pause");
return 0;
}
string computerChoice()
{
int compInpt1;
string input2;
int min = 1;
int max = 3;
int seed = time(0);
srand(seed);
compInpt1 = (rand() % (max - min + 1)) + min;
if (compInpt1 == 1)
{
input2 = "Paper";
return input2;
}
else if(compInpt1 == 2)
{
input2 = "Rock";
return input2;
}
else if (compInpt1 == 3)
{
input2 = "Scissors";
return input2;
}
}
string userChoice()
{
int userInput;
string material;
cout << "Please select a choice:" << endl;
cout << "1. Paper" << endl
<< "2. Rock" << endl
<< "3. Scissors" << endl;
cin >> userInput;
if (userInput == 1)
{
material = "Paper";
return material;
}
else if (userInput == 2)
{
material = "Rock";
return material;
}
else if (userInput == 3)
{
material = "Scissors";
return material;
}
}
void whoWins(string compInpt, string userInpt)
{
if (compInpt == userInpt)
{
cout << "Computer: " << compInpt << " User: " << userInpt
<< endl;
cout << "Its a Draw!" << endl;
}
else if (compInpt == "Paper" && userInpt == "Rock")
{
cout << "Computer: " << compInpt << " User: " << userInpt
<< endl;
cout << "You win!!" << endl;
}
else if (compInpt == "Rock" && userInpt == "Scissors")
{
cout << "Computer: " << compInpt << " User: " << userInpt
<< endl;
cout << "The computer wins, better luck next time";
}
else if (compInpt == "Scissors" && userInpt == "Paper")
{
cout << "Computer: " << compInpt << " User: " << userInpt
<< endl;
cout << "The computer wins, better luck next time" <<
endl;
}
else if (compInpt == "Paper" && userInpt == "Scissors")
{
cout << "Computer: " << compInpt << " User: " << userInpt
<< endl;
cout << "You win!!" << endl;
}
else if (compInpt == "Rock" && userInpt == "Paper")
{
cout << "Computer: " << compInpt << " User: " << userInpt
<< endl;
cout << "The computer wins, better luck next time";
}
else if (compInpt == "Scissors" && userInpt == "Rock")
{
cout << "Computer: " << compInpt << " User: " << userInpt
<< endl;
cout << "The computer wins, better luck next time" <<
endl;
}
}
int runAgain()
{
int choice;
cout << "Do you wish to play again?" << endl;
cout << "1. Yes" << endl;
cout << "2. No " << endl;
cin >> choice;
return choice;
}