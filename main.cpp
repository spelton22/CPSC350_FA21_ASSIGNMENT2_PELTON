/* Sophie Pelton
  2370862
  spelton@chapman.edu
  CPSC350-01
  Assignemnt 1
    main.cpp
*/

#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"

int main(int argc, char** argv){
  //takes two arguments -- input file name and output file namespace

  //instantiate a FileProcessor
  //translate the provided input File to tutnese using the file FileProcessor
  //exit

  //instantiation of FileProcessor
  FileProcessor *ft = new FileProcessor();

  //string variables for input and output file names that are from the command line
  std::string inputFile("");
  std::string outputFile("");
  std::string et = "E2T";
  std::string te = "T2E";
  std::string input(argv[3]);

  //goes through the different cases for command line arguments
  if (argc < 3){
    cout << "You did not enter enough arguments" << endl;
    return -1;
  } else if (argc > 3){
    cout << "You entered to many arguments" << endl;
    return -1;
  } else {
    inputFile.assign(argv[1]);
    outputFile.assign(argv[2]);
  }

  if(et.compare(input) == 0){
    //translate english to tutnese
    cout << "reading file " << inputFile << endl;
    cout << "translating to tutnese ... " << endl;

    //call to translate input file contents and write them to output file
    ft->processFile(inputFile, outputFile);

    cout << "results in file " << outputFile << endl;

  } else if (te.compare(input) == 0){
    //tutnese to english
    cout << "reading file " << inputFile << endl;
    cout << "translating to tutnese ... " << endl;

    //call to translate input file contents and write them to output file
    //ft->processFile(inputFile, outputFile);

    cout << "results in file " << outputFile << endl;

  }else {
    cout << "You did not enter the correct input" << endl;
    return -1;
  }


  delete ft;
  //frees up memory -- deletes ft from the heap

  //returns with no errors
  return 0;

}


//need a makefile
//put internet help into reademe
//add comments in code
