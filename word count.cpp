#include <iostream>
using namespace std;

int wordCount(char *str);
int letterCount(char *str);

int main()
{
  char input[SIZE];
  int numWords;
  double numLetters = 0;
  double avg;

  cout << "Enter a string of 80 characters or less: " << endl;
  cin.getline(input, SIZE);


  numWords = wordCount(input);
  cout << "The number of words in your string is: " << numWords << endl;
  numLetters = letterCount(input);
  avg = numLetters / numWords;
  cout << "The average number of letters per word is: " << avg << endl;

  return 0;
}

int wordCount(char *str) {
  int numWords = 0;

  while(*str) {
    if (*str == ' ') {
        numWords++;
    }
    str++;
  }
return numWords + 1;
}

int letterCount(char *str) {
    int numLetters = 0;

    while (*str) {
        if (*str != ' ') {
            numLetters++;
        }
        str++;
    }
    return numLetters;
}