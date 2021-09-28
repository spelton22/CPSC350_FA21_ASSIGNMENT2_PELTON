/* Sophie Pelton
  2370862
  spelton@chapman.edu
  CPSC350-01
  Assignemnt 1
    FileProcessor.cpp
*/

//takes a string input file and string output file name
//read in info from input File
//output translation to output file

#include "FileProcessor.h"
#include "Translator.h"

FileProcessor::FileProcessor(){
  //default constructor
}

FileProcessor::~FileProcessor(){
  //default destructor
}

void FileProcessor::processFile(string input, string output){

  //instantiate Translator to use the methods from that class
  Translator t1;

  //creates an input stream to read from a file
  std::ifstream myfileIN;
  //creates an output stream to write to a file
  std::ofstream myfileOUT;

  //string where the line from the file is put
  std::string line;
  //string that is returned at the end
  std::string outputString ="";

  //opens the input file for reading
  myfileIN.open(input, ios::in);
  //opens the output file for writting and clears out anything in
  //the file before new stuff is written to the file
  myfileOUT.open(output, ios::out | ios::trunc);

  //checks if the input and output file is open
  if (myfileIN.is_open() && myfileOUT.is_open()){
    //for loop to go through each line of the file
    for(std::string line; (std::getline(myfileIN, line, '\n')); ) {
      //send each line through translateEnglishSentence() to get tutnese translation
      outputString = t1.translateEnglishSentence(line);
      //writes translation to output file
      myfileOUT << outputString;
      //newline for file
      myfileOUT << '\n';
      //resets string for next line
      outputString = "";
    }

  }
  //closes both files after done using them
  myfileIN.close();
  myfileOUT.close();

}
