/* Sophie Pelton
  2370862
  spelton@chapman.edu
  CPSC350-01
  Assignemnt 1
    FileProcessor.h
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FileProcessor{
  /* FileProcessor.h has the declarations of the Constructor,
    destructor, and method, processFile()
  */

public:
  FileProcessor(); //default constructor
  ~FileProcessor(); //destructor -- used for allocating memory dynamically
    //destruct objects

  void processFile(string in, string out);
  /* takes a string representing the input file (english) and string for the
  output File where the tutnese translation is written.
  */

};
