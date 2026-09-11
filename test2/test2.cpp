#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student
{
	string name="gay";
	int age=0;
};

int main()
{
	vector<Student> students;
	int choice;
    	while (true)
	{
		cout << "1. Add Student" << endl;
		cout << "2. Display Students" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			Student s;
			cout << "Enter student name: ";
			cin >> s.name;
			cout << "Enter student age: ";
			cin >> s.age;
			students.push_back(s);
		}
		else if (choice == 2)
		{
			for (const auto& s : students)
			{
				cout << "Name: " << s.name << ", Age: " << s.age << endl;
			}
		}
		else if (choice == 3)
		{
			break;
		}
		else
		{
			cout << "Invalid choice!" << endl;
		}
	}
}