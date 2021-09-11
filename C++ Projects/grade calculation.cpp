#include <iostream>
using namespace std;

void Grade_Caculator()
{
	float marks;
	cout << "Enter your marks: " ; cin >> marks;
	if(marks >= 95 && marks <= 100)
	{ cout<<"Your grade is: A++";
	}
	else if (marks > 100){
		cout<<"Not in percentage range";
	}
	else if (marks >= 85){
		cout<<"Your grade is: A";
	}
	else if(marks >= 75){
		cout<<"Your grade is: B";
	}
	else if(marks >= 65){
		cout<<"Your grade is: C";
	}
	else if (marks >= 55){
		cout<<"Your grade is: D";
	}
	else if (marks >= 40){
		cout<<"Your grade is: E";
	}
	else{
		cout << "SORRY FAIL: F";
	}
}

int main(){
	Grade_Caculator();
	return 0;
}

