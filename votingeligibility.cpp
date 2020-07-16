#include<iostream>
using namespace std;
int main()
{
	int age;

	cout<<"Enter your age: ";
	cin>>age;


	if(age>=13 && age<=19)
	{
		cout<<"Person is Teenager"<<endl;
	}
	else
    {
        cout<<"not a teenager"<<endl;
    }

	if(age>=18)
	{
		cout<<"Person is eligible for voting"<<endl;
	}
	else
	{
		cout<<"Person is not eligible for voting"<<endl;
	}


}


