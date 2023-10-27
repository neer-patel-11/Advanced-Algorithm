#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<vector<int>> graph = {{0, 1, 0, 0, 1},
								 {1, 0, 1, 1, 0},
								 {0, 1, 0, 1, 0},
								 {0, 1, 1, 0, 1},
								 {1, 0, 0, 1, 0}};
	vector<int> vc;
	int maxv,edgecnt=0;
	int maxval=0;
	vector<int>e;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(graph[i][j] == 1){
				edgecnt++;
			}
		}
		
	}
	edgecnt = (edgecnt) /2;
	//cout << edgecnt << endl;
	for (int k = 0; k < 5; k++)
	{	
		if(edgecnt>0){
			for (int i = 0; i < 5; i++)
			{
				int cnt = 0;
				for (int j = 0; j < 5; j++)
				{
					if (graph[i][j] == 1)
					{
						cnt++;
					}
				}
				if (cnt > maxval)
				{
					maxv = i;
					maxval =cnt;
				}
			}
			cout << maxv << endl;
			if(maxval!=0){
				maxval=0;
				vc.push_back(maxv);
				for (int k = 0; k < 5; k++)
				{
					if (graph[maxv][k] == 1)
					{
						graph[maxv][k] = 0;
						graph[k][maxv] = 0;
						edgecnt--;
						//cout << "i: " << maxv << " " << k << endl;
					}
				}
			}
		}

	}
	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << " ";
	}
}
