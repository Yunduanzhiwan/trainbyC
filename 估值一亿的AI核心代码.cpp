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
				str.insert(i," ");    //��ÿ������ĸ������֮ǰ�ӿո�
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
		
		if(!isalnum(sstr[0][0]))     		// ��� ��һ�����ʵĵ�һ��λ�þ��Ǳ��  ��ôҪ���һ���ո�����Ҫ�� ÿ�� AI �Ļش�ǰҪ���� AI: ��һ���ո�
			cout << " ";
		for(int i=0;i<cnt;++i){
			if(!isalnum(sstr[i][0])){         // �жϵ�һ���ַ��Ƿ��� ��㣬���ǰ�治Ҫ����ո�
				cout << sstr[i];
			}
			else if((sstr[i]=="can" || sstr[i]=="could") && sstr[i+1]=="you"){ // &&���ȼ�����|| ,����Ҫ������ 
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


