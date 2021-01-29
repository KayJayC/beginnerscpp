// <- this is a line comment, it isnt executed with your code
/* <- this is the start of a block of code
     comments are super important because it explains your code!!
     // vs. /  *   * /
     -use the first one for a quick one line of code
     -use the second one for a comment that extends more than
        a block of code
this is the end of a block of code->*/

#include <iostream> /*preprocessor directive
                    -signified by a hashtag
                    -always should be placed at the top of your code
                    -used by compiler to process some programs
                            before compilation
                    */
using namespace std;/*using the standard nameespace
                    -namespace:declarative region that
                            provides a scope to the identifiers
                            (names of types,functions, variables)
                    -its okay to start off with this in the beginning
                      but as you become more skilled only access the
                      identifiers you need
                            exp. std::cout
                    */
int main()/*The main function that returns an int
            at the end of the program a 0 is returned
            which means it is a successful program
          */
{
    cout << "Hello world guys";/*
                                -cout:means common output
                                   indicates youre going to ouput a
                                   stream of characters to a device
                                -"<<": this means stream out
                               */
    cout << endl; //endl: ends the line
    return 0;//return: what is brought back at the end of your code

}  
