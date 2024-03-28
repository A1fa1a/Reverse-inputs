#include <iostream>

using namespace std;

int main()
{
	  int reverse[5];
	  
	  cout << "Enter 5 numbers to reverse:\n";
	  
	  for (int i = 4; i >= 0; i--)
	  {
	      cin >> reverse[i];
	  }
	  
	  for (int i = 0; i < 5; i++)
	  {
	      cout <<  reverse[i] << endl;
	  }
	  
	  return 0;
}
