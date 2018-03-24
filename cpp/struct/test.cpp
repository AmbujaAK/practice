#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int rollno;
	float marks;
};

int main(){
	struct student st;
	cout<<"Enter the Name,Roll No and Marks of students.";
	string name;
	int roll;
	float marks;
	cin>>name>>roll>>marks;
	
	st.name = name;
	st.rollno = roll;
	st.marks = marks;

	cout<<"\nName :"<<st.name<<"\nRoll No. :"<<st.rollno<<"\nMarks :"<<st.marks;

	return 0;
}
