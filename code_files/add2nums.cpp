#include <iostream>
/*
The output of the program should match the following (assuming inputs of 6 and 4):

Enter an integer: 6
Enter another integer: 4
6 + 4 is 10.
6 - 4 is 2.
*/
int main(){
    int x{},y{};
    std::cout<<"Enter an integer: ";
    std::cin>>x;
    std::cout<<"Enter another integer: ";
    std::cin>>y;
    std::cout<<x<<" + "<<y<<" is "<<x+y<<".\n";
    std::cout<<x<<" - "<<y<<" is "<<x-y<<".\n";
    return 0;
}