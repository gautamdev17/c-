#include <iostream>

int main(){
    std::cout<<"Hello World!\n";
    std::cout<< 5<<'\n';

    // VARIABLE ASSIGNMENTS, different forms of initialization
    int a;//no initialisation so some garbage value sits // default-initialization (no initializer)

    // Traditional initialization forms:
    // these allow converting 7.5 to 7
    int b = 5;//u create a value 5 and copy it to b // copy-initialization (initial value after equals sign)
    int c ( 6 );//directly creates object c with value 6// direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    // this doesnt allow that convert 7.5 to 7
    int d { 7 };//best one, but throws error if given values like 7.5 etc// direct-list-initialization (initial value in braces)
    int e {}; //safest way to reset to zero// value-initialization (empty braces)

    std::cout<<"Enter an int: ";
    std::cin>>e;
    std::cout<<"\ne = "<<e<<'\n';
    //if you enter e = 123abc,  The numeric values are printed (e.g. 123).
    // What’s happening: 123 is extracted, the remaining characters (e.g. abc) are left for a later extraction.
    return 0;
}