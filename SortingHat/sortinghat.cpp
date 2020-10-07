#include <iostream>

using namespace std;

int main() {

  //Variables to hold the number of points awared to each house
  int gryffindor, hufflepuff, ravenclaw, slytherin = 0;
  //Varibales to hold the user answers
  int answer1, answer2, answer3, answer4;

  cout << "The Sorting Hat Quiz!\n";

  //Question 1
  cout << "Q1) When I'm dead, I want people to remember me as: \n";
  cout << "1) Good\n";
  cout << "2) Great\n";
  cout << "3) Wise\n";
  cout << "4) Bold\n";

  cout << "Answer? ";
  cin >> answer1;


  switch (answer1) {
  case 1:
    hufflepuff += 1;
    break;
  case 2:
    slytherin += 1;
    break;
  case 3:
    ravenclaw += 1;
    break;
  case 4:
    gryffindor += 1;
    break;
  default:
    cout << "Invalid answer.\n";
    return 1;
}

  //Question 2
  cout << "Q2) Dawn or Dusk?\n";
  cout << "1) Dawn\n";
  cout << "2) Dusk\n";
  cout << "Answer? ";
  cin >> answer2;

  if (answer2 == 1) {
    gryffindor += 1;
    ravenclaw += 1;
  }

  else if (answer2 == 2) {
    hufflepuff += 1;
    slytherin += 1;
  }

  else {
    cout << "Invalid Input\n";
    return 1;
  }

  //Question 3
  cout << "Q3) Which kind of instrument most pleases your ear?\n";
  cout << "1) The violin\n";
  cout << "2) The trumpet\n";
  cout << "3) The piano\n";
  cout << "4) The drum\n";
  cout << "Answer? ";
  cin >> answer3;

  switch (answer3) {
    case 1:
      slytherin += 1;
      break;
    case 2:
      hufflepuff += 1;
      break;
    case 3:
      ravenclaw += 1;
      break;
    case 4:
      gryffindor += 1;
      break;
    default:
      cout << "Invalid input\n";
      return 1;
  }

  //Question 4
  cout << "Q4) Which road tempts you the most?\n";
  cout << "1) The wide sunny grassy lane\n";
  cout << "2) The narrow, dark, lantern lit alley\n";
  cout << "3) The twisting, leaf strewn path through the woods\n";
  cout << "4) The coubbled steet\n";
  cout << "Answer? ";
  cin >> answer4;

  switch (answer4) {
    case 1:
      hufflepuff += 1;
      break;
    case 2:
      slytherin += 1;
      break;
    case 3:
      gryffindor += 1;
      break;
    case 4:
      ravenclaw += 1;
      break;
    default:
      cout << "Invalid input\n";
      return 1;
  }


  //Determine house
  string house;
  int max = 0;

  if (gryffindor > max) {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max) {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max) {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max) {

    max = slytherin;
    house = "Slytherin";

  }


  cout << "Your house is " << house << "!\n";

  return 0;
}
