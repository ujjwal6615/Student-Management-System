#include <bits/stdc++.h>
using namespace std;

string array1[100], array2[100], array3[100], array4[100], array5[100];
int total = 0;

void printOptions();

void studentPortal()
{
	cout << "Enter 1 : New Student Info" << endl;
	cout << "Enter 2 : Show Student Info" << endl;
	cout << "Enter 3 : Search Student Info" << endl;
	cout << "Enter 4 : Update Student Info" << endl;
	cout << "Enter 5 : Delete Student Info" << endl;
	cout << "Enter 6 : Exit Student Portal" << endl;

	int num;
	cin >> num;

	if (num == 1)
	{
		if (total == 0)
		{
			int choice;
			cout << "How many students data info you want to enter" << endl;
			cin >> choice;

			for (int i = 0; i < choice; i++)
			{
				cout << "\nEnter the data of student " << i + 1 << endl
					 << endl;
				cout << "Enter First Name" << endl;
				cin >> array1[i];

				cout << "Enter University Roll No." << endl;
				cin >> array2[i];

				cout << "Enter Current Semester" << endl;
				cin >> array3[i];

				cout << "Enter Department" << endl;
				cin >> array4[i];

				cout << "Enter Contact No." << endl;
				cin >> array5[i];
			}
			cout << "\nYour data has been recorded successfully" <<endl
				 << endl;
			total = total + choice;
			studentPortal();
		}
		else
		{
			int choice;
			cout << "How many students data info you want to enter" << endl;
			cin >> choice;
			for (int i = total; i < total + choice; i++)
			{
				cout << "\nEnter the data of student " << i + 1 << endl
					 << endl;
				cout << "Enter First Name" << endl;
				cin >> array1[i];

				cout << "Enter University Roll No." << endl;
				cin >> array2[i];

				cout << "Enter Current Semester" << endl;
				cin >> array3[i];

				cout << "Enter Department" << endl;
				cin >> array4[i];

				cout << "Enter Contact No." << endl;
				cin >> array5[i];
			}
			cout << "\nYour data has been recorded successfully" <<endl
				 << endl;
			total = total + choice;
			studentPortal();
		}
	}
	else if (num == 2)
	{
		if (total == 0)
		{
			cout << "Record is Empty , First record your student info" <<endl<<endl;
			studentPortal();
		}
		else
		{
			for (int i = 0; i < total; i++)
			{
				cout << "\nData of student " << i + 1 << ":" << endl
					 << endl;
				cout << "Name : " << array1[i] << endl;
				cout << "University Roll No. : " << array2[i] << endl;
				cout << "Current Semester : " << array3[i] << endl;
				cout << "Department : " << array4[i] << endl;
				cout << "Contact No. : " << array5[i] << endl
					 << endl;
			}
		}
		studentPortal();
	}
	else if (num == 3)
	{
		if (total == 0)
		{
			cout << "Record is Empty , First record your student info !!!!!" <<endl<<endl;
		}
		else
		{
			string roll;
			cout << "Enter the University Roll No. of Student : " << endl;
			cin >> roll;
			int check = 0;

			for (int i = 0; i < total; i++)
			{
				if (array2[i] == roll)
				{
					check = 1;
					cout << "\nData of student " << i + 1 << ":" << endl
						 << endl;
					cout << "Name : " << array1[i] << endl;
					cout << "University Roll No. : " << array2[i] << endl;
					cout << "Current Semester : " << array3[i] << endl;
					cout << "Department : " << array4[i] << endl;
					cout << "Contact No. : " << array5[i] << endl
						 << endl;
				}
			}
			if (check == 0)
			{
				cout << "Incorrect Roll No. , Please try again !!!!!" << endl<<endl;
			}
		}
		studentPortal();
	}
	else if (num == 4)
	{
		if (total == 0)
		{
			cout << "Record is Empty , First record your student info !!!!!" << endl<<endl;
		}
		else
		{
			string roll;
			cout << "Enter the University Roll No. of Student : " << endl;
			cin >> roll;
			int check = 0;

			for (int i = 0; i < total; i++)
			{
				if (array2[i] == roll)
				{
					check = 1;
					cout << "PREVIOUS DATA : " << endl;
					cout << "\nData of student " << i + 1 << ":" << endl
						 << endl;
					cout << "Name : " << array1[i] << endl;
					cout << "University Roll No. : " << array2[i] << endl;
					cout << "Current Semester : " << array3[i] << endl;
					cout << "Department : " << array4[i] << endl;
					cout << "Contact No. : " << array5[i] << endl
						 << endl;

					cout << "Enter New Data of Student : "<<i+1 << endl
						 << endl;
					cout << "Enter First Name" << endl;
					cin >> array1[i];

					cout << "Enter University Roll No." << endl;
					cin >> array2[i];

					cout << "Enter Current Semester" << endl;
					cin >> array3[i];

					cout << "Enter Department" << endl;
					cin >> array4[i];

					cout << "Enter Contact No." << endl;
					cin >> array5[i];

					cout << "Your Info have been updated successfully..!!!!!" << endl;
				}
			}
			if (check == 0)
			{
				cout << "Incorrect Roll No. , Please try again !!!!!" << endl;
			}
		}
		studentPortal();
	}
	else if (num == 5)
	{
		if (total == 0)
		{
			cout << "Record is Empty , First record your student info !!!!!" << endl;
		}
		else
		{
			cout << "Enter 1 : To delete all Student Records " << endl;
			cout << "Enter 2 : To delete a specific Student Records " << endl;
			int val;
			cin >> val;

			if (val == 1)
			{
				total = 0;
				cout << "All Records are successfully deleted...!!!!!" <<endl<<endl;
			}
			else if (val == 2)
			{
				string roll;
				cout << "Enter the University Roll No. of Student , you want to delete : " << endl;
				cin >> roll;
				int check = 0;
				for (int i = 0; i < total; i++)
				{
					if(array2[i] == roll) {
						check = 1;
						for(int j=i; j<total; j++) {
							array1[j] = array1[j+1];
							array2[j] = array2[j+1];
							array3[j] = array3[j+1];
							array4[j] = array4[j+1];
							array5[j] = array5[j+1];
						}
						total--;
						cout<<"Selected Record has been successfully deleted...!!!!!"<<endl<<endl;
					}
				}
				if(check == 0) {
					cout << "Incorrect Roll No. , Please try again !!!!!" << endl<<endl;
				}
			}
		}
		studentPortal();
	}
	else if(num == 6) {
		printOptions();
		return;
	}
	else{
		cout<<"ERROR : Invalid Input "<<endl<<endl;
		studentPortal();
	}
}

void printOptions()
{
	cout << "Enter 1 : Overview" << endl;
	cout << "Enter 2 : Student Portal" << endl;
	cout << "Enter 3 : Contact Info" << endl;
	cout << "Enter 4 : Exit" << endl
		 << endl;

	int value;
	cin >> value;

	if (value == 1)
	{
		cout << "Haldia Institute of Technology or HIT Haldia is an autonomous engineering institute in West Bengal, India, approved by All India Council for Technical Education (AICTE), New Delhi and affiliated to Maulana Abul Kalam Azad University of Technology (MAKAUT)." << endl<<endl;
		cout<<"Haldia Institute of Technology (An Institute of ICARE, Haldia, Approved by AICTE, Affiliated to WBUT) began its journey in the year 1996. It is the first private and accredited academic institution catering technical education in West Bengal. "<<endl;
		cout<<"\nThe Institute is situated at Haldia – an industrial hub in Eastern India. Since inception, Haldia Institute of Technology is dedicated to the objectives of creating highly trained professional manpower in various disciplines of Engineering, Technology and Social Science. "<<endl;
		cout<<"\nThe Institute is also dedicated to the contribution of higher scientific research in Technology as well as in Applied Science and Social Science. "<<endl<<endl;
		printOptions();
	}
	else if (value == 2)
	{
		studentPortal();
	}
	else if (value == 3)
	{
		cout << "Email - admin@hithaldia.in " << endl
			 << "Contact No. - (+913224)252900 " << endl
			 << endl;
		printOptions();
	}
	else if (value == 4)
	{
		cout << "Thank you for visiting this site , Have a good day." << endl
			 << endl;
		return;
	}
	else{
		cout<<"ERROR : Invalid Input "<<endl<<endl;
		printOptions();
	}
}

int main()
{
	cout << "Welcome To Haldia Institute Of Technology" << endl
		 << endl;
	printOptions();
	return 0;
}
