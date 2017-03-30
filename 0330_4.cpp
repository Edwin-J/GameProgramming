#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1 = "This is a test.";
	
	s1.insert(0, "Hello ");
	cout << s1 << endl;
	int index = s1.find("test");
	cout << index << endl;
	s1.append("cpp");
	cout << s1 << endl;

	return 0;
}