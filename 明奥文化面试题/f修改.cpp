#include <bits/stdc++.h>
using namespace std;

const int maxn = 60;
char Map[maxn][maxn];
int L[maxn],R[maxn];

int main() {
	freopen("f006.in","r",stdin);
//	freopen("f.out","w",stdout);
   	cin.tie(0)->sync_with_stdio(false);
    int row,col,k,planePos,ans = 0;
    cin >> row >> col >> k;
    for(int i=1;i<=row;i++) {
        Map[i][0] = Map[i][col+1] ='#';
        for(int j=1;j<=col;j++) {
            cin >> Map[i][j];
            if(Map[i][j] == 'v'){
                planePos = j;
			}
//            if((Map[i][j] == '.' || Map[i][j] == 'v') && Map[i][j-1] == '#'){
//            	L[i] = j;
//			}
//                    
//            if(Map[i][j]=='#' && (Map[i][j-1] == '.' || Map[i][j-1] == 'v')){
//                	R[i] = j-1;
//			}
        }
    }
    
    int sum;
 	for(int j=1;j<=row;++j){
	    L[j]=R[j]=0;
	    sum=0;
	    for(int i=1;i<col;++i){
			if(L[j]==0&&(Map[j][i]=='v'||Map[j][i]=='.')){
				L[j]=i;
				sum++;
			}
			if(R[j]==0&&(Map[j][col-i+1]=='v'||Map[j][col-i+1]=='.')){
				R[j]=col-i+1;
				cout<<"r="<<col-i+1<<endl;
				sum++;
			}
			if(sum==2){
				cout<<j<<" break l="<<L[j]<<" r="<<R[j]<<endl;
				break;
			}
		}
	 
	}

	//倒数第二行开始到第一行 
	int t;
	for(int i=row-1;i>0;--i){
		t=i+1;
		cout<<"l="<<L[i]<<" r="<<R[i]<<endl;
		R[i]=min(R[i],R[t]+k);
		L[i]=max(L[i],L[t]-k);
		cout<<"i="<<i<<" l="<<L[i]<<" r="<<R[i]<<endl;
		if(L[i]>R[i]){
			cout<<"is -1"<<endl;
			return 0;
		}
	} 

    for(int i=1;i < row && ans != -1;i++) {
        int l = max(L[i],L[i+1]); 
		int r = min(R[i],R[i+1]); 
		cout<<"l="<<l<<" r="<<r<<endl;
        if(l > r)   
            ans = -1;
        if(planePos >= l && planePos <= r) 
            continue;
        else if(planePos < l && l - planePos <= k) 
            ans += l - planePos, planePos = l;
        else if(planePos>r&&planePos-r<=k) 
            ans += planePos - r , planePos = r;
    }
    cout << ans <<endl;
    return 0;
}
