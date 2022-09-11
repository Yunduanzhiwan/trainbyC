//#include<iostream>
//#include<string>
//using namespace std;
//
//void maopao(string* list,int* scores,int n){
//    string t;
//    int tt;
//	for(int i=0;i<n;++i){
//		for(int j=0;j<n-1-i;++j){
//			if(scores[j]<scores[j+1]||  (scores[j]==scores[j+1]&&list[j]>list[j+1]  )){
//				 t=list[j];
//				list[j]=list[j+1];
//				list[j+1]=t;
//				
//				 tt=scores[j];
//				scores[j]=scores[j+1];
//				scores[j+1]=tt;
//			}
//		}
//	}
//	
//     tt=0;
//	for(int i=0;i<n;++i){
//		if(scores[i]==scores[i-1]&&i>0){
////			printf("%d  %s",tt,list+i);
//			cout<<tt<<" "<<list[i]<<endl; 
//		}
//		else{
//			tt=i+1;
//		//	printf("%d  %s",i+1,list+i);
//			cout<<i+1<<" "<<list[i]<<endl; 
//		}
//			
//	}
//}
//string lists[10005];
//int sore[10005];
//int main(){
//	int n,sco;
//	cin>>n;
////	scanf("%d",&n);
//	string str;
//	for(int i=0;i<n;++i){
//		cin>>lists[i]>>sore[i];
////		scanf("%s %d",&lists[i],&sore[i]);
//	}
//	maopao(lists,sore,n);
//	return 0;
//} 


#include<iostream>
#include<string>
using namespace std;

void maopao(string* list,int* scores,int n){
    string t;
    int tt;
	for(int i=0;i<n;++i){
		for(int j=0;j<n-1-i;++j){
			if(scores[j]<scores[j+1]||  (scores[j]==scores[j+1]&&list[j]>list[j+1]  )){
				 t=list[j];
				list[j]=list[j+1];
				list[j+1]=t;
				
				 tt=scores[j];
				scores[j]=scores[j+1];
				scores[j+1]=tt;
			}
		}
	}
	
     tt=0;
	for(int i=0;i<n;++i){
		if(scores[i]==scores[i-1]&&i>0){
//			printf("%d  %s",tt,list+i);
			cout<<tt<<" "<<list[i]<<endl; 
		}
		else{
			tt=i+1;
		//	printf("%d  %s",i+1,list+i);
			cout<<i+1<<" "<<list[i]<<endl; 
		}
			
	}
}

typedef struct Student{
	string name;
	int score;
	operator <(const struct Student& a){
		if(score==a.score)return name>a.name;
		return score<a.score;
	}
}StudentNode;
template<class T>
int mycompare( T& a, T& b){
	return a<b;
}
template<class T>
void charru2(int n,T* src){
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
void charru(string* list,int* scores,int n){
    string t;
    int tt;
    int j;
	for(int i=1;i<n;++i){
        t=list[i];
        tt=scores[i];
		for( j=i;j>0&&scores[j-1]<tt|| (scores[j-1]==tt&&list[j-1]>t  );--j){
            list[j]=list[j-1];
            scores[j]=scores[j-1];
		
		}
        list[j]=t;
        scores[j]=tt;
	}
	
     tt=0;
	for(int i=0;i<n;++i){
		if(scores[i]==scores[i-1]&&i>0){
//			printf("%d  %s",tt,list+i);
			cout<<tt<<" "<<list[i]<<endl; 
		}
		else{
			tt=i+1;
		//	printf("%d  %s",i+1,list+i);
			cout<<i+1<<" "<<list[i]<<endl; 
		}
			
	}
}
string lists[10005];
int sore[10005];
int main(){
	int n,sco;
	cin>>n;
//	scanf("%d",&n);
	string str;
	for(int i=0;i<n;++i){
		cin>>lists[i]>>sore[i];
//		scanf("%s %d",&lists[i],&sore[i]);
	}
	charru(lists,sore,n);
	return 0;
} 
