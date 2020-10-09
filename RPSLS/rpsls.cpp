#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  //Seeding random with time
  srand(time(NULL));

  //Collecting a random number between 1 and 3
  int comp = rand() % 3 + 1;

  int usr = 0;

  //Prompting the user to choose rock paper or scissors
  cout << "ROCK PAPER SCISSORS\n";
  cout << "1) ROCK\n";
  cout << "2) PAPER\n";
  cout << "3) SCISSOR\n";

  cout << "Shoot! ";
  cin >> usr;

  //Comparing user choice to computer and determining winner
  if(usr == 1 && comp == 3) {
    cout << "Rock beats scissors!\n";
    cout << "Human wins!\n";
  }
  else if(usr == 1 && comp == 1) {
    cout << "Rock ties with Rock\n";
    cout << "Tie\n";
  }
  else if(usr == 1 && comp == 2) {
    cout << "Rock loses to Paper\n";
    cout << "Computer wins\n";
  }
  else if(usr == 2 && comp == 1) {
    cout << "Paper beats rock\n";
    cout << "Human wins\n";
  }
  else if(usr == 2 && comp == 2) {
    cout << "Paper ties Paper\n";
    cout << "Tie!\n";
  }
  else if(usr == 2 && comp == 3) {
    cout << "Scissors beats Paper.\n";
    cout << "Computer wins!\n";
  }
  else if(usr == 3 && comp == 1) {
    cout << "Rock beats Scissors\n";
    cout << "Computer wins!\n";
  }
  else if(usr == 3 && comp == 2) {
    cout << "Scissors beats paper\n";
    cout << "Human wins!\n";
  }
  else if(usr == 3 && comp == 3) {
    cout << "Scissors ties scissors\n";
    cout << "Tie!\n";
  }
  //Handleing if the user input something other than 1 2 or 3
  else {
    cout << "Invalid input.\n";
    return 1;
  }




  return 0;
}
