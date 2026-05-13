#include<iostream>
/*
The Const Keyword Specifies that a variable's value is constant, 
tells the compiler to prevent anything from modifying it. 
(read-only)
*/


main(){
    // double pi = 3.14159;
    // pi = 61; //--> can rewrite pi
    const double PI = 3.14159;
    // PI = 61; --> will give an error becuase now pi cannot be changed
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;


    return 0;
}