#include<iostream>
using namespace std;

class Dog{
	private:
		string name;
		int weight;
	public:
		void setData(string name,int weight){
			this->name = name;
			this->weight = weight;
		}
		void getData();
};

void Dog::getData(){
	cout<<"\nName :"<<name;
	cout<<"\nWeight :"<<weight<<" kg\n";
}

int main(){
	int num;
	cout<<"How many animals :";
	cin>>num;
/*	
	Dog dog;

	cout<<"Dog 1 :\t";
	dog.setData("Bruno",45);
	dog.getData();
*/
	string name;
	int weight;

	while(num>0){
		Dog d;
		cout<<"\nEnter the name :";
		cin>>name;
		cout<<"Enter the weight :";
		cin>>weight;

		d.setData(name,weight);
		d.getData();
		num--;
	}
	return 0;
}
