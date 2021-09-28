/* Sophie Pelton
  2370862
  spelton@chapman.edu
  CPSC350-01
  Assignemnt 1
    Translator.h
*/

#include <iostream>
#include <string>

using namespace std;

class Translator{
  /*Translator.h has the declarations of the Constructor,
    destructor, and methods, translateEnglishWord() and
    translateEnglishSentence()
  */

public:
  Translator(); //default constructor
  ~Translator(); //destructor -- used for allocating memory dynamically
    //destruct objects

  string translateEnglishWord(string word);
  /*takes a word as input and returns the tutnese translation
  */

  string translateEnglishSentence(string sentense);
  /*takes a sentence as input and returns the tutnese translation
  */
};
