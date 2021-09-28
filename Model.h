/* Sophie Pelton
  2370862
  spelton@chapman.edu
  CPSC350-01
  Assignemnt 1
    Model.h
*/

#include <iostream>
#include <string>

using namespace std;

class Model{
  /*Model.h has the declarations of the Constructor,
    destructor, and methods, translateSingleCharacter() and
    translateDoubleCharacter()
  */

public:
  Model(); //default constructor
  ~Model(); //destructor -- used for allocating memory dynamically
    //destruct objects

  string translateSingleCharacter(char input);
  /*method to translate single characters from input
  and oputput the tutnese translation
  */
  string translateDoubleCharacter(char input);
  /*method to translate double characters from input
  and oputput the tutnese translation
  */

};
