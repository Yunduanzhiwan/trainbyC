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
            	str.insert(i," ");//���ǰ�ӿո� 
            	i++;//ָ������ƶ�����Ȼ��һֱͣ�������� 
                len+=1;//������Ҫ��1
			}
            if(str[i]=='?') str[i]='!';
        }
        stri=0;
        stringstream ss(str);
        while(ss>>str) sstr[stri++]=str;
        cout<<"AI:";
        if(!isalnum(sstr[0][0]))     		// ��� ��һ�����ʵĵ�һ��λ�þ��Ǳ��  ��ôҪ���һ���ո�����Ҫ�� ÿ�� AI �Ļش�ǰҪ���� AI: ��һ���ո�
			cout << " ";
		for(int i=0;i<stri;++i){
			if(!isalnum(sstr[i][0]))         // �жϵ�һ���ַ��Ƿ��� ��㣬���ǰ�治Ҫ����ո�
				cout << sstr[i];
			else if((sstr[i]=="can" || sstr[i]=="could") && sstr[i+1]=="you"){ // &&���ȼ�����|| ,����Ҫ������ 
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
