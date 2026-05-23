#include <iostream>

/*  
//nested functions aint allowed in c++
    int main()
    {
        void foo() // Illegal: this function is nested inside function main()
        {
*/

int getinputfromUser(){
    std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	return input;
}

void add(int x,int y){// this x,y are function parameters
    std::cout<<x+y;
}

int main(){
    std::cout<<getinputfromUser()+5<<'\n';
    add(6,9);// this 6,9 are function arguments
    return 0;
}