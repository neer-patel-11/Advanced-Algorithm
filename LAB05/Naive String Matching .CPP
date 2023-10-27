// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    string text = "this cat is cat";
    string ftext = "cat";
    int j=0,temp=0,find=0;
    for(int i=0;i<text.size();i++){
        if(text[i] == ftext[j]){
            while(j<ftext.size() && text[i]==ftext[j]){
                i++;
                j++;
            }
            if(j==ftext.size()){
                cout << "Found : "<<(i-j+1)<< endl;
                find=1;
                i=i+j;
            }
            else{
                i=i-j;
            }
            j=0;
        }
    }
    if(!find){
        cout << "Not found";
    }

    return 0;
}
