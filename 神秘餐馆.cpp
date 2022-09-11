

#include<iostream>
#include<string.h>
using namespace std;
int getprice(char c){
//	cout<<"c="<<c<<endl;
    if('0'<=c&&c<='9'){
        return c-'0';
    }
    else if(c>='A'&&c<='Z'){
       return (c-'A'+10);
    }
    else if(c>='a'&&c<='z'){
        return c-'a'+36;
    }
    return 0;
}
int price[55][55];
int cai[55];
int main(){
    int n,m,budget;
    cin>>n>>m>>budget;
    char ch;
    string str;
    for(int i=1;i<=n;++i){
    	cin>>str;
//    	cout<<"str="<<str<<endl;
        for(int j=1;j<=m;++j){
//            ch=getchar(); 
            ch=str[j-1];
            price[i][j]=getprice(ch);
            cout<<"price["<<i<<"]["<<j<<"]="<<price[i][j]<<endl;
        }
//        getchar();
    }
    int minprice=99;
    int ind=0;
    int sum=0;
    cout<<"n="<<n<<endl;
    for(int i=1;i<=n;++i){
    	minprice=99;
    	cout<<"i="<<i<<endl;
        for(int j=1;j<=m;++j){
        	cout<<"price["<<i<<"]["<<j<<"]="<<price[i][j]<<endl;
            if(i-cai[j]>=m){
            	cai[j]=0;
			}
            if(cai[j]==0&&price[i][j]<minprice){
                minprice=price[i][j];
                cout<<"minprice="<<minprice<<endl;
                ind=j;
            }
        }
        cai[ind]=i;
//        if(ind==0||minprice==99)
//            break;
		cout<<"minprice="<<minprice<<endl;
        if(budget<minprice){
        	cout<<"sum="<<sum<<" i="<<i<<endl;
        	return 0;
		}
        if(ind!=0&&budget>=minprice){
        	budget-=minprice;
        	sum++;
        	cout<<"µÚ"<<i<<"Ìì"<<" minprice="<<minprice<<"Ê£ÏÂ£º"<<budget<<endl;
		}
    }
    return 0;
}
