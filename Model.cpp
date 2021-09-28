/* Sophie Pelton
  2370862
  spelton@chapman.edu
  CPSC350-01
  Assignemnt 1
    Model.cpp
*/

//class that has the rules of tutnese language

#include "Model.h" //user defined header file
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <cctype>

Model::Model(){ //cpp specific
  //default constructor body
}

Model::~Model(){ //default destructor
}

string Model::translateSingleCharacter(char input){

  string str; //string to set translation to
  string s; //string to retrun with preserved capitalization

  //switch statement to go through each letter of the alphabet
  switch(tolower(input))
  {
  case 'b':
    str = "bub";
    break;
  case 'c':
    str = "cash";
    break;
  case 'd':
    str = "dud";
    break;
  case 'f':
    str = "fuf";
    break;
  case 'g':
    str = "gug";
    break;
  case 'h':
    str = "hash";
    break;
  case 'j':
    str = "jay";
    break;
  case 'k':
    str = "kuck";
    break;
  case 'l':
    str = "lul";
    break;
  case 'm':
    str = "mum";
    break;
  case 'n':
    str = "nun";
    break;
  case 'p':
    str = "pub";
    break;
  case 'q':
    str = "quack";
    break;
  case 'r':
    str = "rug";
    break;
  case 's':
    str = "sus";
    break;
  case 't':
    str = "tut";
    break;
  case 'v':
    str = "vuv";
    break;
  case 'w':
    str = "wack";
    break;
  case 'x':
    str = "ex";
    break;
  case 'y':
    str = "yub";
    break;
  case 'z':
    str = "zub";
    break;
  case 'a':
    str = "a";
    break;
  case 'i':
    str = "i";
    break;
  case 'e':
    str = "e";
    break;
  case 'o':
    str = "o";
    break;
  case 'u':
    str = "u";
    break;
  default:
    string s(1,input);
    str = input;
    //for any other special characters entered
  }

  int offset = str.length() - 1;

  //checks if the input is capital or lower case
  if(isupper(input)){
    //gets the first character and sets it to upper case
    char first = str.at(0);
    char up = toupper(first);
    string one;
    //converst char to string
    one.assign(1,up);
    //sets s to the new string with uppercase letter
    s = one + str.substr(1, offset);
  } else if(islower(input)){
    //runs if input is lower case
    s = str;
  }else{
    //for special characters
    s = str;
  }
  //returns translation
  return s;

}

string Model::translateDoubleCharacter(char input){
  //method to translate double character to tutnese

  //prefix for consonants
  string prefixC = "squa";
  //prefix for vowels
  string prefixV = "squat";

  string str; //string to set translation to
  string s; //string to retrun with preserved capitalization

  //checks letter ignoring case
  char lower = tolower(input);

  if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u'){
    //for vowels, sets str to the vowel prefix + vowel
    str = prefixV + input;
  } else{
    /*for consonants, translate letter through translateSingleCharacter()
      then is added to consonants prefix
    */
    str = prefixC + translateSingleCharacter(input);
  }

  int offset = str.length() - 1;
  char first = str.at(0);
  //returns translation
  return str;

}
