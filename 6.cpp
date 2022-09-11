/*

6-158 停车场收费问题 (20分)

在停车场收费系统中，收费者会根据车型的不同按不同的单价和计费方式收取不同的停车费，其中：
轿车Car：每小时8元，超过30分钟按一小时计算，未超过30分钟不收费
客车Bus：每小时10元，30分钟以内按半小时计费，未达1小时但超过30分钟按1小时计算
货车Truck：每小时15元，未达1小时的按1小时计算
其他未知类型：按默认方法计算，见裁判程序。
请补充必要的类和函数定义，使停车场类Parker可收取停入的n辆车的费用。


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


/* 你的代码将被嵌入这里 */
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
//public://Car：每小时8元，超过30分钟按一小时计算，未超过30分钟不收费
//	Car(int ntime){
//		minute = ntime;
//		
//	}
//	float computeFee() { 
//	 int h=minute/60;//这停车场可真贵
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
//	 int h=minute/60;//这停车场可真贵
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
//	 int h=minute/60;//这停车场可真贵
//        if(minute-h*60>30) h++;
//        return h*price;
//	
//	};
//	string getType() { return "Bus"; };
//	int getMinute() {
//		return minute;
//	}
//};


void Vehicle::setMinute(int _minute){//这个要用
minute=_minute;
}
int Vehicle::getMinute(){//这个要用
    return minute;
}
void Vehicle::setPrice(float _price){//这个函数有用喵有用喵有用喵
    price=_price;//没用也乖巧的写上
}
float  Vehicle::getPrice(){//又让我阅读理解
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
    virtual string getType(){return "car";};//哦！首字母居然是小写
    virtual float computeFee()
    {
        int h=minute/60;//这停车场可真贵
        if(minute-h*60>30) h++;
        return h*price;
    };
};
class Bus:public Vehicle
{
    public:
    Bus(int m):Vehicle(Bus_Price,m){};
    virtual string getType(){return "bus";};//呜呜呜
    virtual float computeFee()
    {
        int h=minute/30;//太坑了叭
        if(h*30<minute) h++;//呜呜呜我就去逛一圈

        return h*price/2;//还得收我钱
    };
};
class Truck:public Vehicle
{
    public:
    Truck(int m):Vehicle(Truck_Price,m){};
    virtual string getType(){return "truck";};//在首字母大小写上死了一次
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
    void park(Vehicle *a){//是指针！引用不太行
    sum+=a->computeFee();
    }
    double getSum(){
    return sum;
    }
};

int main() {
	int n, minute; //停车辆次，时长 
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

