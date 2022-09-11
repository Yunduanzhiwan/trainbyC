////#include<iostream>
////#include<string>
////using namespace std;
////
////void maopao(string list[],int n){
////	for(int i=0;i<n;++i){
////		for(int j=0;j<n-1-i;++j){
////			if(list[j].length()>list[j+1].length()){
////				string t=list[j];
////				list[j]=list[j+1];
////				list[j+1]=t;
////			}
////		}
////	}
////	
////	for(int i=0;i<n;++i){
////		cout<<list[i]<<" "; 
////	}
////	cout<<endl;
////}
////string list[105];
////int main(){
////	int i=0;
////	string str;
////	for(;;){
////		cin>>str;
////		if(str=="#")
////			break;
////		list[i++]=str;
////		
////	}
////	maopao(list,i);
////	return 0;
////} 
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//void maopao(string list[],int n){
//	for(int i=0;i<n;++i){
//		for(int j=0;j<n-1-i;++j){
//			if(list[j].length()>list[j+1].length()){
//				string t=list[j];
//				list[j]=list[j+1];
//				list[j+1]=t;
//			}
//		}
//	}
//	
//	for(int i=0;i<n;++i){
//		cout<<list[i]<<" "; 
//	}
//	cout<<endl;
//}
//void charu(string list[],int n){
//    int i,j;
//    string t;
//    for(i=1;i<n;++i){
//        t=list[i];//对比对象
//        for( j=i;j>0&&list[j-1].length()>t.length();--j){
//            list[j]=list[j-1];
//        }
//        list[j]=t;//相应位置插入
//    }
//    for(int i=0;i<n;++i){
//		cout<<list[i]<<" "; 
//	}
//	cout<<endl;
//}
//
//template<class T>
//int mycompare( T& a, T& b){
//	return a.length()>b.length();
//}
//template<class T>
//void charu2(int n,T* src){
//	int j;
//	T t;
//	for(int i=1;i<n;++i){
//		t=src[i];
//		for(j=i;j>0&&mycompare(src[j-1],t);--j){
//			src[j]=src[j-1];
//		}
//		src[j]=t;
//	} 
//}
//void myQuitSort(string *src,int l,int r){
//	//cout<<"l="<<l<<" r="<<r<<endl;
//	if(l>=r)return;
//	int i=l-1;
//	int j=r+1;
//	string x=src[ (l+r) >> 1 ];//(i+j)/2
//	string t;
//	
//	while(i<j){
//		do {
//			i++;
//		}while(src[i].length()<=x.length() &&x!=src[i]);
//		do{
//			j--;
//		}while(x.length()<=src[j].length() && x!=src[j]);
//		
//		if(i<j){
//			t=src[i];
//			src[i]=src[j];
//			src[j]=t;
//		}else{
//			// cout<<"i="<<i<<" j="<<j<<endl;
//			 break;
//		}
//	}
//	myQuitSort(src,l,j);//i!=j
//	myQuitSort(src,j+1,r);
//} 
//string list[105];
//int main(){
//	int i=0;
//	string str;
//	for(;;){
//		cin>>str;
//		if(str=="#")
//			break;
//		list[i++]=str;
//		
//	}
//	myQuitSort(list,0,i-1);
////	cout<<"endl"<<endl;
//    for(int j=0;j<i;++j){
//		cout<<list[j]<<" "; 
//	}
//	cout<<endl;
//	return 0;
//} 



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void maopao(string list[],int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n-1-i;++j){
			if(list[j].length()>list[j+1].length()){
				string t=list[j];
				list[j]=list[j+1];
				list[j+1]=t;
			}
		}
	}
	
	for(int i=0;i<n;++i){
		cout<<list[i]<<" "; 
	}
	cout<<endl;
}
void charu(string list[],int n){
    int i,j;
    string t;
    for(i=1;i<n;++i){
        t=list[i];//对比对象
        for( j=i;j>0&&list[j-1].length()>t.length();--j){
            list[j]=list[j-1];
        }
        list[j]=t;//相应位置插入
    }
    for(int i=0;i<n;++i){
		cout<<list[i]<<" "; 
	}
	cout<<endl;
}

template<class T>
int mycompare( T& a, T& b){
	return a.length()<=b.length();
}
int comp2(string& a,string& b){
	return a.length()<b.length();
}
template<class T>
void charu2(int n,T* src){
	int j;
	T t;
	for(int i=1;i<n;++i){
		t=src[i];
		for(j=i;j>0&&mycompare(src[j-1],t);--j){
			src[j]=src[j-1];
		}
		src[j]=t;
	} 
}
void myQuitSort(string *src,int l,int r){
	//cout<<"l="<<l<<" r="<<r<<endl;
	if(l>=r)return;
	int i=l-1;
	int j=r+1;
	string x=src[ (l+r) >> 1 ];//(i+j)/2
	string t;
	
	while(i<j){
		do {
			i++;
		}while(src[i].length()<=x.length() &&x!=src[i]);//&&x!=src[i]
		do{
			j--;
		}while(x.length()<=src[j].length() && x!=src[j]);// && x!=src[j]
		
		if(i<j){
			t=src[i];
			src[i]=src[j];
			src[j]=t;
            if(src[i]==x)x=src[j];
            if(src[j]==x)x=src[i];
            
            cout<<"x="<<x<<endl;
		}else{
			// cout<<"i="<<i<<" j="<<j<<endl;
			 break;
		}
	}
	myQuitSort(src,l,j);//i!=j
	myQuitSort(src,j+1,r);
} 
string list[105];
int main(){
	int i=0;
	string str;
	for(;;){
		cin>>str;
		if(str=="#")
			break;
		list[i++]=str;
		
	}
	sort(list,list+i,comp2);
    for(int j=0;j<i;++j){
		cout<<list[j]<<" "; 
	}
	cout<<endl;
	return 0;
} 
