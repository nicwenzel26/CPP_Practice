#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  cout << "MAGIC 8-BALL:\n";

  //Seeds the random number generator with current time
  srand(time(NULL));

  //Creates a random number between 0-9
  int answer = rand() % 10;

  switch (answer) {
    case 0:
    cout << "It is certain.\n";
    break;

    case 1:
    cout << "It is decidedly so.\n";
    break;

    case 2:
    cout << "Without a doubt.\n";

    case 3:
    cout << "Yes - definitly.\n";
    break;

    case 4:
    cout << "You may rely on it.\n";
    break;

    case 5:
    cout << "Outlook good.\n";
    break;

    case 6:
    cout << "Ask again later.\n";
    break;

    case 7:
    cout << "My reply is no.\n";
    break;

    case 8:
    cout << "Outlook not so good.\n";
    break;

    case 9:
    cout << "Very doubtful.\n";
    break;

    default:
    cout << "I have no strong feelings one way or the other.\n";
  }



  return 0;
}
