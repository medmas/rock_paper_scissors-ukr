#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int rock = 1;
int scissors = 2;
int paper = 3;
int playerChoice;
int compChoice;


int main() {
 
setlocale(LC_ALL, "ua");

cout << "+++++++++++++++++++++++" << endl;
cout << " Камінь, ножиці, папір \t" << endl;
cout << "+++++++++++++++++++++++" << endl << endl;


//Логіка гравця.
cout << "Зроби вибір: " << endl;
cout << "1) Камінь" << endl;
cout << "2) Ножиці" << endl;
cout << "3) Папір" << endl << endl;


cin >> playerChoice;

switch(playerChoice){
  case 1:
      playerChoice = rock;
      cout << "\tТи обрав Камінь! " << endl << endl;
      break;
  case 2:
      playerChoice = scissors;
      cout << "\tТи обрав Ножиці! " << endl << endl;
      break;
  case 3:
      playerChoice = paper;
      cout << "\tТи обрав Папір! " << endl << endl;
      break;
  default:
      cout << "\tНевірний вибір!" << endl << endl;
      return 0;            
}

// Логіка комп'ютера.
srand (time(NULL));

 compChoice = rand() % 3 + 1;
 cout << "Вибір комп'ютера: " << compChoice << endl;

 if (compChoice == 1 && playerChoice == 2){
    cout << endl << "\tКомп'ютер обрав Камінь! "<< endl <<"\tТи програв! " << endl;

 } else if (compChoice == 2 && playerChoice == 1) {
    cout << endl << "\tКомп'ютер обрав Ножиці! "<< endl <<"\tТи ПЕРЕМІГ! " << endl;

 } else if (compChoice == 3 && playerChoice == 2) {
    cout << endl << "\tКомп'ютер обрав Папір! " << endl <<"\tТи ПЕРЕМІГ! " << endl;

 } else if (compChoice == 2 && playerChoice == 3) {
    cout << endl <<"\tКомп'ютер обрав Ножиці! "<< endl << "\tТи Програв! " << endl;

 } else if (compChoice == 1 && playerChoice == 3) {
    cout << endl << "\tКомп'ютер обрав Камінь! "<< endl <<"\tТи ПЕРЕМІГ! " << endl;

 } else if (compChoice == 3 && playerChoice == 1) {
    cout << endl << "\tКомп'ютер обрав Папір! " << endl <<"\tТи Програв! " << endl;

 } else {
   cout << endl << "\tКомп'ютер обрав те саме! "<< endl <<"\tНічия. " << endl;
 };

 return 0;
}
