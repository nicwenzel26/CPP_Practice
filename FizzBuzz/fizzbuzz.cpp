#include <iostream>

using namespace std;

int main() {

  //Basic answer to the clasic fizzbuzz question.
  for(int i = 1; i <= 100; i++) {
    //If divisable by 3 print Fizz
    if(i % 3 == 0) {
      cout << "Fizz\n";
    }
    //If divisable by 5 print Buzz
    else if(i % 5 == 0) {
      cout << "Buzz\n";
    }
    //Else print the number
    else {
      cout << i << "\n";
    }
  }


  return 0;
}
