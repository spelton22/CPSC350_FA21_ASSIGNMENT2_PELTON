/* Sophie Pelton
  2370862
  spelton@chapman.edu
  CPSC350-01
  Assignemnt 1
    Translator.cpp
*/

//translate english sentences and words to tutnese sentences using Model Class

#include "Translator.h" //user defined header file
#include "Model.h"
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <cctype>

Translator::Translator(){ //cpp specific
  //default constructor body
}

Translator::~Translator(){ //default destructor
}

string Translator::translateEnglishWord(std::string word){

  //instantiate the Model class to use its methods
  Model m;
  //string that is returned at the end of the method
  std::string translatedWord;
  //iterated through each letter of the word
  for(int i = 0; i < word.length(); ++i){
    //for the cases where i is less than tge index of the last letter of the string
    if (i < word.length() - 1){
      //compares the letter at index i to the next letter to check for double letters
      char letter1 = tolower(word.at(i));
      char letter2 = tolower(word.at(i+1));
      if(letter1 == letter2) {
        //calls translateDoubleCharacter() function for tutnese translation
        translatedWord.append(m.translateDoubleCharacter(word.at(i)));
        //increments i an extra time since it was already checked
        i++;
      }
      //for case where they are not double characters
      else {
        //calls translateSingleCharacter() function for tutnese translation
        translatedWord.append(m.translateSingleCharacter(word.at(i)));
      }
    }
    //for the case of i being the index of the last letter of the string
    else {
      translatedWord.append(m.translateSingleCharacter(word.at(i)));
    }

  }

  //returns the tutnese translation of the word
  return translatedWord;

}

string Translator::translateEnglishSentence(std::string sentence)
{
  //string for returned value of the function calls
  std::string output;
  //lower bounds of the string
  int lower = 0;
  //upper bounds of the string
  int upper;
  //length of offset
  int length = 0;
  //returned string
  std::string translatedSentence;
  //iterates through the inputed string
  for(unsigned int i = 0; i < sentence.length();){
    //finds the first space after index i
    upper = sentence.find(" ",i);

    if( upper == -1){
      //test if there are no more spaces  - this will handle the single word condition as well
      length = sentence.length() - lower ;
      //calculate substring length at the end of the sentence string
      translatedSentence.append(translateEnglishWord(sentence.substr(lower,length)));
      //param 2 of substr is length of the substring
      i = sentence.length();
      // set i to the end of the sentence since we are done processing the sentence
    } else {
      //test for when there are spaces
      //calculate length of substring
      length = upper - lower;
      translatedSentence.append(translateEnglishWord(sentence.substr(lower,length)));
      translatedSentence.append(" ");
      //change index of i to end of word + 1 for space
      i = upper + 1;
      //lower bound is always i for start of word
      lower = i;
    }
  }
//return the tutnese translation of the sentence
return translatedSentence;
}
