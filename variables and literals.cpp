/*
    variables=storage locations, it represents different values
            ex:x,y,z,i,j,k,l,ect
    literals=constant values that are assigned to variables
                ex:number, character,string
*/

#include <iostream>
#include <string>


int main()
{
    std::cout<< "Alright guys lets try some different stuff with variables"<<std::endl;
    int num1, num2; //int represents integer
    double num3,num4;//double holds numbers with decimal points
    std::string word, sentence; //string: sequence of letters
    char letter1, letter2; //char : character type variables
    bool boolValue;   // bool: true or false
    // if you dont know the data type you are able to use "auto" and the compiler11 will figure it out

    num1=25;
    num2=45;
    num3=2.54;
    num4=4.54;/*
                -this is an assignment
                -the equal sign is an operator that is compying the value on its
                            right (45) into the variable on is left(num2)
             */
    std::cout<<"Using the assignment operator, num1= "<<num1 << " and num2 = "<<num2 <<std::endl;
    std::cout<<"Adding them together we get :"<<(num1+num2);

    std::cout<<"\nNumbers like "<<num3 <<" and "<<num4 <<", are decimal numbers."
    <<"\nAdding these together we get:"<<(num3 + num4);
    /*
    make note the sume of two doubles is also a double
    the sum of two ints is an int
    */



    word= "Hello";
    sentence = " world, its me";/*
                                  -to assign a string literal to a variable you must use " "
                                */

    std::cout<<"\n\nHaving fun with strings lets print out the message"<<std::endl;
    std::cout<< word <<sentence <<std::endl;




    letter1='a';
    letter2='b';/*
                - to assign a char literal to a variable you must use ' '
                */
    std::cout<<"\n\n"<<letter1<<" Comes before "<<letter2<<" in the alphabet";


    std::cout<<"\n\nBool values are used to see if something is true or false";
    boolValue =true;
    std::cout<<"\nIf something is true its represented by a "<<boolValue; //the number displayed is a 1
    boolValue =false;
    std::cout<<"\nIf something is false its represented by a "<<boolValue<<std::endl; //the number displayed is a 0

    return 0;
}
