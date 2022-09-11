class Graduate :public Teacher, public Student{
	double wages;
public:
	Graduate(string name, int age, char ch, string title_, double sore, double wages_) :Student(name, ch, sore), Teacher(name, age, title_), wages(wages_){
	}

	void show(){
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
		cout << "sex:" << sex << endl;
		cout << "score:" << score << endl;
		cout << "title:" << title << endl;
		cout << "wages:" << wages << endl;
	}
};





