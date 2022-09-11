#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    
    string str;
    int cnt=0;
    while(n--){
        string sstr[1005];
    	getline(cin,str);
    	cout<<str<<endl;
		cnt=0;
		cout<<"AI:";
		for(int i=0;i<str.size();++i){
			if(isalnum(str[i])){
				if(str[i]!='I')
					str[i]=tolower(str[i]);
			}
			else{
				str.insert(i," ");    //对每个非字母和数字之前加空格
				i++;
			}
			if(str[i]=='?')
				str[i]='!';
		}
		stringstream ss(str);
		string temp;
		while(ss>>temp){
			sstr[cnt]=temp;
			cnt++;
//			cout<<"temp="<<temp;
		}
//		cout<<"cnt="<<cnt<<endl;
		
		if(!isalnum(sstr[0][0]))     		// 如果 第一个单词的第一个位置就是标点  那么要输出一个空格，题中要求 每个 AI 的回答前要加上 AI: 和一个空格。
			cout << " ";
		for(int i=0;i<cnt;++i){
			if(!isalnum(sstr[i][0])){         // 判断第一个字符是否是 标点，标点前面不要输出空格
				cout << sstr[i];
			}
			else if((sstr[i]=="can" || sstr[i]=="could") && sstr[i+1]=="you"){ // &&优先级大于|| ,所以要加括号 
				cout << " I " << sstr[i];
				i++;
			}
			else if(sstr[i]=="I" || sstr[i]=="me"){
				cout << " you";
			}
			else
				cout << " " << sstr[i];
		}
		cout << endl;
    	
	}
    return 0;
}


