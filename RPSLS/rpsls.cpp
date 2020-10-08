#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  srand(time(NULL));

  int comp = rand() % 3 + 1;

  int usr = 0;

  cout << "ROCK PAPER SCISSORS\n";
  cout << "1) ROCK\n";
  cout << "2) PAPER\n";
  cout << "3) SCISSOR";

  cout << "Shoot! ";
  cin >> usr;

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
    cout << "Computer wins";
  }
  else if(usr == 2 && comp == 1) {
    
  }


  return 0;
}
