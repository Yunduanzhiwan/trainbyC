#include <iostream>
#include <vector>
#include <iomanip> //参数化输入/输出 
#include<math.h>
using namespace std;
	vector<vector<double>>a(12, vector<double>(12));
	vector<double>b(12);
	vector<double>x(12);
//*****************************
 //追赶法求解AX=B矩阵
//*****************************
vector<double> Chasing_method(vector<vector<double>>a, vector<double>d)
{
//	int n = size(d);
	int n=	d.size(); 
	vector<double>x(n);
	vector<double>alpha(n);
	vector<double>gama(n);
	vector<double>beta(n);
	vector<double>y(n);
	alpha[0] = a[0][0];
	beta[0] = a[0][1] / a[0][0]; y[0] = d[0] / a[0][0];
	for (int i = 1; i < n; i++)
	{
		gama[i] = a[i ][i - 1];
		alpha[i] = a[i][i] - gama[i] * beta[i - 1];
		if (i < n- 1)
		{
			beta[i] = a[i ][i + 1] / alpha[i];
		}
		y[i] = (d[i] - a[i][i - 1] * y[i - 1]) / alpha[i];
	}
	x[n- 1] = y[n- 1];
	for (int i = n- 2; i >= 0; i--)
	{
		x[i] = y[i] - beta[i] * x[i + 1];
	}
	return x;
}

void init(){
	
//	cout<<"22222\n";
	double k=1;
	double R=0.082;
double	c=1377;
double	h=0.05;
double	p=300;
double	r=k*R/(h*h*c*p);
//	r=r*pow(10,6);
//	a[0] = { 3,4,0,0 }; a[1] = { 1,4,1,0 }; a[2] = { 0,1,6,1 }; a[3] = {0,0,2,8 };
//	b = { 10,11,30,48 };
	a[0][0]=2*r+1;
	for(int i=1;i<12;++i){
		for(int j=1;j<12;++j){
			if(i==j){
				a[i][j]=2*r+1;
				a[i][j-1]=-r;
				a[i-1][j]=-r;
			}else{
				a[i][j]=0;
			}
		}
	}
//	b[0]=75;
	for(int i=0;i<12;++i){
		b[i]=37;
	}
	
	for(int i=0;i<12;++i){
		for(int j=0;j<12;++j){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	init();


	x = Chasing_method(a, b);
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{    
			cout << fixed << setw(8) << setprecision(4) << a[i][j];
		}
		cout << fixed << setw(8) << setprecision(4) << b[i] << endl;
	}
	cout << "追赶法求解：" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout<<"x"<<i<<"=   " <<x[i] << endl;
	}
}
