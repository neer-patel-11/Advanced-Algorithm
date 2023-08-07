#include<iostream>
#include <cstdlib>
using namespace std ;



int gcd(unsigned long a , unsigned long n)
{
	unsigned long t;

	while(n!=0)
	{
    	t =a%n ;
    	a=n ;
    	n=t;
       	 
	}

	return a;

}

int power(unsigned long int a , unsigned long int n , unsigned long int m)
{

	unsigned long int res =1;
	a =a %m;

	while(n>0)
	{

    	if(n&1)
    	{
        	res = (res*a )%m;
    	}

    	n=n/2;
    	a = (a*a) %m;

	}

	return res;
}

int prime(unsigned long int n)
{
	unsigned long int a ,i ;

	i=1;

	while(i<=100)
	{
    	a = 2 + (rand() % (n-3)) ;

    	if(gcd(a,n) != 1)
    	{
        	return 0;
    	}

    	if(power(a,n-1,n) != 1)
    	{

      	 
        	return 0;
    	}

    	i++;
	}

	return 1;
}

int main()
{

	unsigned long int n ;
   
   while(1)
   {
	cin>>n;

	if(prime(n))
	{
    	cout<<"Prime"<<endl;
	}
	else{
    	cout<<"Composite"<<endl;
	}
   }

	return 0;

}
