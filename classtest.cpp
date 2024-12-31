#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int basic_salary;
	char val, gender;

	do
	{
		cout << "Enter Name:";
		cin >> name;
		cout << "\nEnter Gender(M/F):";
		cin >> gender;
		cout << "\nEnter Basic Salary:";
		cin >> basic_salary;
		if (gender == 'M')
		{
			cout << "\nUserName "+ name;
			cout << "\nGender "+ gender;
			cout << "\nBasic Salary "+ basic_salary;
			cout << "\nDA :" << (basic_salary * 0.065);
			cout << "\nTA :"<< (basic_salary * 0.04);
			cout << "\nHRA :"<< (basic_salary * 0.12);
			cout << "\nPF :"<< (basic_salary * 0.1);
			cout << "\nTAX :"<<(basic_salary * 0.18);
			cout << "\nTotal Salary : "<<(basic_salary + (basic_salary * 0.065) + (basic_salary * 0.04) + (basic_salary * 0.12) + (basic_salary * 0.1) + (basic_salary * 0.18));
			cout << "\n";
			
		}
		else if (gender == 'F')
		{
			cout << "\nUserName "<< name;
			cout << "\nGender "<< gender;
			cout << "\nBasic Salary "<< basic_salary;
			cout << "\nDA :"<< (basic_salary * 0.085);
			cout << "\nTA :"<< (basic_salary * 0.05);
			cout << "\nHRA :"<< (basic_salary * 0.15);
			cout << "\nPF :"<<(basic_salary * 0.12);
			cout << "\nTAX :"<< (basic_salary * 0.14);
			cout << "\nTotal Salary : ", (basic_salary + (basic_salary * 0.085) + (basic_salary * 0.05) + (basic_salary * 0.15) + (basic_salary * 0.12) + (basic_salary * 0.14));
			
		}
		else
		{
			cout << "You Entered a wrong input";
		}
		cout << "Do you want to continue (Y/N)";
		cin >> val;
	} while (val == 'Y');
}
