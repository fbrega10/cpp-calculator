#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int powFunc(int x, int y){
//returns the pow of x to y
	return pow(x, y);
}

float divide(int x, int y){
//returns the division between x and y 
	return float(x / y);
}


int multiply(int x, int y){
//returns the mult of x to y
	return x * y;
}

int sum(int x, int y){
//returns the sum of x,y
	return x + y;
}

int sub(int x, int y){
	return x - y;
}

int Calculator(string op, int x, int y){
	if (op == "-"){
		return sub(x, y);
	}
	else if (op == "^"){
		return pow(x, y);
	}
	else if (op == "*"){
		return multiply(x, y);
	}
	else if (op == "+"){
		return sum(x, y);
	}
	else throw invalid_argument("invalid operation argument : did not expect "+op);
}

int main(){
// start of the program
 
	int i = 4;
	int exp = 13;
	//int x = powFunc(i, exp); 
	int x = Calculator("^", i, exp);
	

	std::cout << "x = 4 ^ 13 ---> " << x << "\n\n";
	std::cout << "Hello world cpp!\n\n";

	return 0;
}
