#include<iostream>

int main() {
    int student = 20;
    double x = 20;

    // student = student + 1;
    // student+=1;
    //student++;

    // student = student - 1;
    // student-=1;
    //student--;

    //student = student * 2;
    // student*=2;
    
    // student = student / 2;
    // student/=2;

    student/=3;
    x/=3;
    std::cout << student << std::endl;
    std::cout << x << std::endl;

    int remainder = student % 3;
    std:: cout << remainder << '\n';
    return 0;
}