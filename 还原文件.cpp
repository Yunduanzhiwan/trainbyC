// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int vis[102];
int main(){
    int n,k;
    //cin.sync
//     cin>>n;
    scanf("%d",&n);
//     ios::sync_with_stdio(false);
    vector<int> shang;
    int t;
    for(int i=0;i<n;++i){
// 		 cin>>t;
        scanf("%d",&t);
		 shang.push_back(t);
    }
    
  //  cout<<"shang size="<<shang.size()<<endl;
//     cin>>k;
    scanf("%d",&k);
    vector<int> xia[k+1];
    int num;
    for(int i=1;i<=k;++i){
//         cin>>num;
        scanf("%d",&num);
//        xia[i].resize(num);
        for(int j=0;j<num;++j){
//             cin>>t;
            scanf("%d",&t);
            xia[i].push_back(t);
        }
      //  cout<<"xia["<<i<<"] size= "<<xia[i].size()<<endl;
    }
    int s,x;
    s=shang[0];
    set<int> se;
    int ind=0;
    int vlen,flag;
    int indt,it,st;
    int first=1;
    int sum=0;
    while(ind<n){
//     	if(se.size()==k){
//     		break;
// 		}
		if(sum==k) break;
        for(int i=1;i<=k&&ind<n-1;++i){
       //    cout<<"���ڶԱ� �׸�"<<xia[i][0]<<" �� ��"<<s<<endl; 
            if(vis[i]==1||xia[i][0]!=s){
                continue;
            }
            
       // cout<<"��"<<i<<"���׸��Աȳɹ�"<<endl; 
            indt=ind;
//            s=shang[indt];
         //   cout<<"s=="<<shang[ind]<<endl;
            //û�з��ʹ� && xia=s ƥ���һ��
            flag=0;//Ĭ������ȷƥ��
            x=xia[i][0];
            vlen=xia[i].size();//һ�����Ա�
         //   cout<<"vlen="<<vlen<<endl;
            st=s;
            for(int j=0;j<vlen&&indt<n;++j){
          //  	cout<<"���ڶԱ� "<<st<<" �� "<<xia[i][j]<<endl;
                if(xia[i][j]!=st){
          //      	cout<<"��һ��"<<endl;
                	
                   flag=1;
                    break;
                }
                st=shang[(++indt)];
            }
            if(flag) continue;
            ind=indt-1;
            s=shang[ind];
            if(first){
//             	cout<<i;
            	printf("%d",i);
                first=0;
			}
			else
                printf(" %d",i);
//              	cout<<" "<<i;
          //  cout<<"ֽƬi="<<i<<"�Աȳɹ�"<<endl;
         //   cout<<"s=="<<shang[ind]<<endl;
         //   cout<<"ind="<<ind<<endl;
//             se.insert(i);
            vis[i]=1;
            ++sum;
        }
    }
    return 0;
}

