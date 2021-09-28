
# Assignment2
tutnese and english translation program

1. Sophie Pelton -- 2370862 -- spelton@chapman.edu -- CPSC350-01 -- Assignment 2
2. Model.h -- Model.cpp -- Translator.h -- Translator.cpp -- FileProcessor.h -- FileProcessor.cpp -- main.cpp -- Makefile -- REAME.md
3. no known compile errors. For the case of mixed case double letters, I keep the squat/squa lowercase but capitalize the double letter translation for english to tutnese. For tutnese to english there is no way for me to know which of the letters was capitalized. So for the case of gG to tutnese then back to english it becomes gg and for Kk to tutnese then back to english it becomes KK. 
4. references used: 

https://www.cplusplus.com
https://www.cplusplus.com/reference/fstream/ifstream/open/
https://www.cplusplus.com/reference/ios/ios_base/iostate/
https://www.cplusplus.com/reference/ios/ios/fail/

5. there are three command line arguments needed, an input file name and output file name, and which way you are translating english to tutnese (E2T) or tutnese to english (T2E) --> make realclean --> make all --> ./assignment2 inputFile.txt outputFile.txt E2T(or T2E)
