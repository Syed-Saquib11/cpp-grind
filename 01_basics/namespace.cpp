#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2; //--> an entity can have various different values as long as they are in different name space
}

int main(){

    int x = 0;
    // int x = 1; --> will result in error: Redeclaration of entity

    std::cout<<x;

    return 0;
}