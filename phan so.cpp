#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
class person{
	private:
		string name, address;
	public:
		string getname(){
			return name;
		}
		string getaddress(){
			return address;
		}
		void setname(string name){
			this->name = name;
		}
		void setaddress(string address){
			this->address = address;
		}
};
class student : public person{
	private:
		float gpa;
	public:
		float getgpa(){
			return gpa;
		}
		void setgpa(float gpa){
			this->gpa = gpa;
		}
};
int main(){
	student s;
	s.setname("nguyen ba binh");
	s.setaddress("ha noi");
	s.setgpa(4.0);
	cout << s.getname() << endl;
	cout << s.getaddress() << endl;
	cout << s.getgpa() << endl;
}
