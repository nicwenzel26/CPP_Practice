#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

  string input = "Rearden";

  vector<char> vowels;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  vector<char> result;

  //Comparing the input and vowels list and extracting the vowels
  for(int i = 0; i < input.size(); i++) {
    for(int j = 0; j < vowels.size(); j++) {
      if(input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
    }
    if(input[i] == 'e' || input[i] == 'u') {
      result.push_back(input[i]);
    }
  }

  for(int i = 0; i < result.size(); i++) {
    cout << result[i];
  }

  cout << "\n";

  return 0;
}
