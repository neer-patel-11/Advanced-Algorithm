#include<bits/stdc++.h>

using namespace std;

int ran(int lb ,int ub)
{
	// cout<<lb<<" "<<ub<<" lo"<<endl;
    
   return (rand() % (ub - lb + 1)) + lb;

}



int partition(vector<int>& arr,int start,int end)
{

	int r=ran(start,end);
	swap(arr[end],arr[r]);
	int p=arr[end];

	int i=start-1,j=start;

	while(j<end)
	{
    	if(arr[j] <= p)
    	{
        	i++;
        	swap(arr[i],arr[j]);
    	}
    	j++;
	}

	i++;
	swap(arr[i],arr[end]);
	return i;

}

void quickSort(vector<int>& arr ,int start, int end)
{
	// cout<<n<<" ";

	if(start < end)
	{
    	int q= partition(arr,start,end);
    	// cout<<q<<" ";
    	quickSort(arr,start , q-1);
    	quickSort(arr,q +1 , end);
	}

}


int main()
{
	vector<int> arr={4, 3, 6, 8, 5, 9, 20, 50, 12, 30, 432, 12, 69, 29, 40, 50, 10, 4, 23, 34, 45, 45, 24,
89, 799, 45, 80, 50, 10, 30, 43,54,65,76,87, 98, 21, 32, 43, 78, 98, 57, 29, 91, 34,
54, 64, 19, 82, 87, 65};
	quickSort(arr,0,arr.size()-1);


	for(int i=0;i<arr.size();i++)
	{
    	cout<<arr[i]<<" ";
	}

}
