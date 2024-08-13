#include<iostream>
using namespace std;
class lecture
{
	private:
		string lecturer;
		string subject;
		string course;
		float lectures;
	public:
		lecture(string lect,string sub,string cour,float num)
		{
			lecturer = lect;
			subject = sub;
			course = cour;
			lectures = num;
		}
		void display()
		{
			cout<<"Name of lecturer: "<<lecturer<<endl;
			cout<<"Name of subject: "<<subject<<endl;
			cout<<"Name of course: "<<course<<endl;
			cout<<"Number of lectures = "<<lectures<<endl;
		}
	
};
int main()
{
	string lect,sub,cour;
	float num;
	/*cout<<"Enter name of lecturer: ";
	cin>>lect;
	cout<<"Enter name of subject: ";
	cin>>sub;
	cout<<"Enter name of course: ";
	cin>>cour;
	cout<<"Enter number of lectures: ";
	cin>>num;*/
	lecture l1("Het Jain","DBMS","CSE",5);
	l1.display();
	cout<<"\n";
	lecture l2("Pawan Dhabhi","DSA","CSE",6);
	l2.display();
	cout<<"\n";
	lecture l3("Om Parikh","DF","CSE",4);
	l3.display();
	cout<<"\n";
	lecture l4("Mujeeb Khan","Java","CSE",5);
	l4.display();
	cout<<"\n";
	lecture l5("Aashvi patel","Python","CSE",6);
	l5.display();
	cout<<"\n";
	return 0;
}

