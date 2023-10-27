#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<vector<int>> graph = { {0,1,0,0,1},
					  {1,0,1,1,0},
					  {0,1,0,1,0},
					  {0,1,1,0,1},
					  {1,0,0,1,0}
	};
	vector<int>vc;
	vector<int>ec;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(graph[i][j] == 1){
				vc.push_back(i);
				vc.push_back(j);
				graph[i][j] = 0;
				graph[j][i] = 0;
				for(int k=0;k<5;k++){	
					if(graph[i][k]==1){
						graph[i][k] = 0;
						graph[k][i] = 0;
						cout <<"i: " <<i << " " << k << endl;
					}
				}
				
				for(int k=0;k<5;k++){	
					if(graph[j][k]==1){
						graph[j][k] = 0;
						graph[k][j] = 0;
						cout <<"j: " <<j << " " << k << endl;
					}
				}
			}
		}
	}
	for(int i=0;i<vc.size();i++){
		cout << vc[i] << " " ;
	} 
}
