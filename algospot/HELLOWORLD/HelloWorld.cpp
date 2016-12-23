#include <string>
#include <iostream>
using namespace std;

int main()
{
	int userNumbers = 0;
	string userName;
	
	cin>>userNumbers;
  
  for(int i=0; i<userNumbers; i++)
  {
	cin>>userName;
	cout<<"Hello, "<<userName<<"!"<<endl;
  }
}