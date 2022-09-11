#include<iostream>
#include<string.h>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    int stri=0;
    string str;
    while(n--){
        getline(cin,str);
        cout<<str<<endl;
        string sstr[1005];
        int len=str.length();
        for(int i=0;i<len;++i){
            if(isalnum(str[i])){
                if(str[i]!='I')
                    str[i]=tolower(str[i]);
            }
            else {
            	str.insert(i," ");//标点前加空格 
            	i++;//指针向后移动，不然将一直停留在这里 
                len+=1;//长度需要加1
			}
            if(str[i]=='?') str[i]='!';
        }
        stri=0;
        stringstream ss(str);
        while(ss>>str) sstr[stri++]=str;
        cout<<"AI:";
        if(!isalnum(sstr[0][0]))     		// 如果 第一个单词的第一个位置就是标点  那么要输出一个空格，题中要求 每个 AI 的回答前要加上 AI: 和一个空格。
			cout << " ";
		for(int i=0;i<stri;++i){
			if(!isalnum(sstr[i][0]))         // 判断第一个字符是否是 标点，标点前面不要输出空格
				cout << sstr[i];
			else if((sstr[i]=="can" || sstr[i]=="could") && sstr[i+1]=="you"){ // &&优先级大于|| ,所以要加括号 
				cout << " I " << sstr[i];
				i++;
			}
			else if(sstr[i]=="I" || sstr[i]=="me")
				cout << " you";
			else
				cout << " " << sstr[i];
		}
		cout << endl;
    }
    return 0;
}
