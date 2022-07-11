// CPP program to demonstrate
// Implementation of front() and back() function
#include <deque>
#include <iostream>
using namespace std;
 
// Driver code
int main() {
	
	// Def deque
	deque<int> mydeque;
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(1);
	mydeque.push_back(7);
	mydeque.push_back(3);
	// Queue becomes 3, 4, 1, 7, 3
	
	// Printing front number
	cout << mydeque.front() << " ";
	
	// Printing back number
	cout << mydeque.back();
	
	return 0;

}// End driver
