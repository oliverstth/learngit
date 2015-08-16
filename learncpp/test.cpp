#include <iostream>
#include <cstdio>
using namespace std;

class example{
	private:
	int num1,num2;
	int total;
	
	public:
	example();
	example(int num1, int num2 );
	int getnum(int flag);
	int gettotal();
	void computetotal();
};

example::example():num1(0),num2(0),total(0){}
example::example(int num1, int num2):num1(num1),num2(num2),total(0){}

int example::getnum(int flag){
	
	return flag > 0 ? num1:num2;
}

int example::gettotal(){
	return total;
}

void example::computetotal(){
	total = num1+num2;
}
int main(){
	
	int a, b;
	cin >> a >> b;
	example myexample(a,b);
	myexample.computetotal();
	cout << myexample.getnum(1) << myexample.gettotal() << endl;
	cout << myexample.getnum(0) << myexample.gettotal() << endl;
	
	return 0;
} 
	
