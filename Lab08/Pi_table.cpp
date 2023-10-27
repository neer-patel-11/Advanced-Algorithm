 // Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    
    vector<vector<int>> points= {{2,2},{4,4},{5,6}};
    int n=points.size();
    int d_min =  INT_MAX;
    int p1,p2;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int x = points[i][0] - points[j][0];
            int y = points[i][1] - points[j][1];
            x*=x;
            y*=y;
            if(d_min > x+y){
                d_min=x+y;
                p1=i;
                p2=j;
            }
            
        }
    }
    cout << points[p1][0] <<" "<< points[p1][1] << endl;
    cout << points[p2][0] <<" "<< points[p2][1];
    return 0;
}
