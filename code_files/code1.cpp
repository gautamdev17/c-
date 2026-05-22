#include <iostream>
// io-> input output
int main(){
    std::cout<<"print this\n";//std::cout allows us to send data to console to be printed as text
    //cout = character output, << is the insertion operator
    std::cout<<"print this"<<" also this"<<std::endl;
    std::cout<<"im in a newline\n";
    //u can use << std::endl; for newline
    // but /n is better than std::endl

    // HOW TO GET USER INPUT?
    char x{};
    int y{},z{},a{};
    std::cout<<"Enter character\n";
    std::cin>>x;//cin = single character input, >> is the extraction operator
    std::cout<<"you entered "<<x<<'\n';
    //multiple inputs
    std::cout<<"Enter three nums: ";
    std::cin>>y>>z>>a;
    std::cout<<"y="<<y<<",z="<<z<<"a="<<a<<std::endl;
    return 0;
}