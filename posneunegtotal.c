//Input: [2,1,0,-8,-9]
//Output: 0.4 , 0.2 , 0.4
//First, find the total number of elements in the array = 5
//Find the total number of positive numbers=2
//Find the total number of neutral numbers=1
//(0 is the only neutral number)
//Find the total number of negative numbers=2
//Output = [ (no of positive number/length of the array), (no of neutral numbers/length of the array), (no of negative numbers/length of the array) ]
//=[?, ?, ?]
//=[0.4, 0.2, 0.4]
#include<stdio.h>
int main()
{
	int n,np,nz,nn;
	int a[]={5,4,3,-2,-1,0,1}
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			np++;
		}
		else if(a[i]<0)
		{
			ne--;
		}
		else
		{
			nz++;
		}
		
	}
	printf("%0.1f,%0.1f,%0.1f", np/n,nz/n,nn/n);
	return 0;
	
}