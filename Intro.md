#include <iostream> //---> header files: contains functions for basic input and output operations, by including it we can do whole new types of input-output operations

int main(){//--> where main program begins
    std::cout<< "I like pizza!";//---> std stands for standard, c is for character and out for output, standard character output ---> we are going to print a statement between double quotes, the thing we want to print are preceeded by "<<" and a line of code is terminated by a ";"

    std::cout<< "Its really good!" << std::endl; //---> this and previous line of code will result in printing the statemtent in the same line until and unless they have "endl" or a "\n"


![endl example](assets\images\endl.png)
    //single line comment

    /*
        this 
            is
                multi
            line
        comment
    */

    std::cout<< "I like spicy food";
    return 0; //---> if we reached 0 it means everything in this block went well, if we get 1 that means somethign went wrong above it
}