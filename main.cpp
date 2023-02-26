//#include <iostream>
//using namespace std;
//class  Cat
//{
//	char sex;
//	string name;
//	int weight;
//	int age;
//
//
//public:
//	Cat() {
//		sex = ' ';
//		name = "";
//		weight = 0;
//		age = 0;
//	}
//	Cat(char fsex, string fname, int fweight, int fage) {
//		sex = fsex;
//		name = fname;
//		weight = fweight;
//		age = fage;
//	}
//	char getSex() { return sex; }
//	void setWeight(int fweight) { weight = fweight; }
//	string getName() { return name; }
//	int getWeight() { return weight; }
//	double getAge() { return age; }
//
//	void print() { cout << "Name:" << name << endl << "Sex:" << sex << endl << "Age:" << age << endl << "Weight:" << weight << endl;
//	}
//};
//
//int main() {
//	Cat barsik;
//	Cat vaska('m', "Vaska", 5, 4);
//	vaska.print();
//}
#include <iostream>
using namespace std;
class  Apple
{
	string sort;
	int weight;
public:
	Apple() {
		sort = " ";
		weight = 0;
	}
	Apple(string fsort,int fweight) {
		sort = fsort;
		weight = fweight;
	}
	string getSort() { return sort; }
	void setSort(string fsort) { sort = fsort; }
	int getWeight() { return weight; }
	void setWeight(int fweight) { weight = fweight; }
	

	void print() {
		cout << "Sort:" << sort<< endl << "Weight:" << weight << endl;
	}
};

int main() {
	Apple jfj("beliy naliv", 200);
	jfj.print();
	Apple hsfjsj("Ne beliy naliv", 323);
	hsfjsj.print();

}