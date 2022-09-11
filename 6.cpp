/*

6-158 ͣ�����շ����� (20��)

��ͣ�����շ�ϵͳ�У��շ��߻���ݳ��͵Ĳ�ͬ����ͬ�ĵ��ۺͼƷѷ�ʽ��ȡ��ͬ��ͣ���ѣ����У�
�γ�Car��ÿСʱ8Ԫ������30���Ӱ�һСʱ���㣬δ����30���Ӳ��շ�
�ͳ�Bus��ÿСʱ10Ԫ��30�������ڰ���Сʱ�Ʒѣ�δ��1Сʱ������30���Ӱ�1Сʱ����
����Truck��ÿСʱ15Ԫ��δ��1Сʱ�İ�1Сʱ����
����δ֪���ͣ���Ĭ�Ϸ������㣬�����г���
�벹���Ҫ����ͺ������壬ʹͣ������Parker����ȡͣ���n�����ķ��á�


*/

#include <iostream>
#include <string>
using namespace std;
const float Car_Price = 8;
const float Bus_Price = 10;
const float Truck_Price = 15;
class Vehicle {
protected:
	float price;
	int minute;
public:
	virtual float computeFee() { return 20.0f * minute / 60; };
	virtual string getType() { return "unknow"; };
	float getPrice();
	void setPrice(float _price);
	int getMinute();
	void setMinute(int _minute);
	Vehicle(float _price, int _minute);
	Vehicle() {
	};
};
//void Vehicle::setMinute(int _minute) {
//	minute = _minute;
//}
//void Vehicle::setPrice(float _price) {
//	price = _price;
//}
//int Vehicle::getMinute(){
//	return minute;
//}


/* ��Ĵ��뽫��Ƕ������ */
//class Parker {
//	private:
//		Vehicle* v;
//public:
//	static float sum;
//	Parker() {};
//	void  park(Vehicle* vp){
//		v=vp;
//		sum+=vp->computeFee();
//	}
//	int getSum() {
//		return sum;
//	}
//};
//float Parker::sum = 0;
//class Car :public Vehicle {
//public://Car��ÿСʱ8Ԫ������30���Ӱ�һСʱ���㣬δ����30���Ӳ��շ�
//	Car(int ntime){
//		minute = ntime;
//		
//	}
//	float computeFee() { 
//	 int h=minute/60;//��ͣ���������
//        if(minute-h*60>30) h++;
//        return h*price;
//	};//40/60
//	string getType() { return "Car"; };
//	int getMinute() {
//		return minute;
//	}
//};
//class Truck :public Vehicle {
//public:
//	Truck(int minute) {
//		minute = minute;
//		//Parker::sum+=minute;
//	}
//	float computeFee() { 
//	 int h=minute/60;//��ͣ���������
//        if(minute-h*60>30) h++;
//        return h*price;
//	 };
//	string getType() { return "Truck"; };
//	int getMinute() {
//		return minute;
//	}
//};
//class Bus: public Vehicle {
//public:
//	Bus(int minute) {
//		minute = minute;
//	//	Parker::sum+=minute;
//	}
//	float computeFee() {
//	 int h=minute/60;//��ͣ���������
//        if(minute-h*60>30) h++;
//        return h*price;
//	
//	};
//	string getType() { return "Bus"; };
//	int getMinute() {
//		return minute;
//	}
//};


void Vehicle::setMinute(int _minute){//���Ҫ��
minute=_minute;
}
int Vehicle::getMinute(){//���Ҫ��
    return minute;
}
void Vehicle::setPrice(float _price){//�������������������������
    price=_price;//û��Ҳ���ɵ�д��
}
float  Vehicle::getPrice(){//�������Ķ����
    return price;
}
Vehicle::Vehicle(float _price,int _minute){
price=_price;
minute=_minute;
}

class Car:public Vehicle
{
    public:
    Car(int m):Vehicle(Car_Price,m){};
    virtual string getType(){return "car";};//Ŷ������ĸ��Ȼ��Сд
    virtual float computeFee()
    {
        int h=minute/60;//��ͣ���������
        if(minute-h*60>30) h++;
        return h*price;
    };
};
class Bus:public Vehicle
{
    public:
    Bus(int m):Vehicle(Bus_Price,m){};
    virtual string getType(){return "bus";};//������
    virtual float computeFee()
    {
        int h=minute/30;//̫���˰�
        if(h*30<minute) h++;//�������Ҿ�ȥ��һȦ

        return h*price/2;//��������Ǯ
    };
};
class Truck:public Vehicle
{
    public:
    Truck(int m):Vehicle(Truck_Price,m){};
    virtual string getType(){return "truck";};//������ĸ��Сд������һ��
    virtual float computeFee()
    {
        int h=minute/60;
        if(h*60<minute) h++;
        return h*price;
    };
};
class Parker{
double sum=0;
public:
    void park(Vehicle *a){//��ָ�룡���ò�̫��
    sum+=a->computeFee();
    }
    double getSum(){
    return sum;
    }
};

int main() {
	int n, minute; //ͣ�����Σ�ʱ�� 
	char type;
	Vehicle* vp;
	Parker p;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> type >> minute;
		switch (type) {
		case 'c':vp = new Car(minute); break;
		case 't':vp = new Truck(minute); break;
		case 'b':vp = new Bus(minute); break;
		default: vp = new Vehicle(); vp->setMinute(minute);
		}
		cout << "type:" << vp->getType() << " minute:" << vp->getMinute() << " fee:" << vp->computeFee() << endl;
		p.park(vp);
		delete vp;
	}
	
	/*
	type:car minute:40 fee:8
	type:truck minute:5 fee:15
	type:bus minute:40 fee:10
	sum=33
	
	*/
	cout << "sum:" << p.getSum() << endl;
	return 0;
}

