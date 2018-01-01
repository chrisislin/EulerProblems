//Find the largest palindrome made from the product of two 3-digit numbers
#include <iostream>
#include <sstream>
using namespace std; 

//iterate through a string to check if it's a palindrome
bool is_palin(const string &s) //&s for address, pointer
{
	for(int i=0, j=s.size()-1; i<j; i++, j--)
		if(s[i]!=s[j]) return false;

	return true;
}

//convert a number to a string using a stringstream
string to_string(const int &conv)
{
	stringstream ss;
	ss << conv;
	return ss.str();
}

int main()
{
	int palin=0;

	int l_val=0;
	int r_val=0;

	int less_than_min=99;
	int max=999;

	//multiply the numbers starting @ 999, moving backwards to 100
	for(int i=max; i>less_than_min; i--) {

		for(int j=i; j>less_than_min; j--) {

			int k=i*j;
			if(k<=palin) break; //really speeds things up

			//convert to a string and check if it's a palindrome
			if(is_palin(to_string(k))) {
				palin=k;
				l_val=i;
				r_val=j;
			}
		}
	}
	cout << "Largest palindrome: " << palin << " (" << l_val << "*" << r_val << ")";
	cin.get(); //so you can see the results--press ENTER to exit

	return 0;
}
