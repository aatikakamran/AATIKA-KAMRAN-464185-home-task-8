#include <iostream>
using namespace std;
int main () 
//{
//	int n ,  maxapp=0, maxval=0 ;
//	int a[n]={} ;
//	cout<<"enter number of elements of array"<<endl;
//	cin>>n;
//	cout<<"enter elements of array"<<endl;
//	for (int i=0;i<n;i++) {
//		cin>>a[i];
//		
//	}
//		for (int i=0;i<n;i++) {
//			int repeat=0;
//				for (int j=0;j<n;j++) {
//					if (a[j]==a[i]) {
//						repeat++;
//					}
//				}
//				if ( repeat > maxapp) {
//					maxapp=repeat;
//					maxval=a[i];
//				}
//		}
//		cout<<maxval<<" is repeated most ie "<<maxapp<<" times" <<endl;
//			return 0;
//	}

//{ 
//
//int n,min=INT_MAX,max=INT_MIN;
//int a[n]={};
//cout<<"enter no of elements of array"<<endl;
//cin>>n;
//cout<<"enter elements of array"<<endl;
//for (int i=0;i<n;i++) {
//	cin>>a[i];
//	
//}
//for(int i=0;i<n;i++) {
//	if (a[i]>max) {
//	max=a[i];
//	}
//		if (a[i]<min) {
//	min=a[i];
//	}
//}
//cout<<"so min value is "<<min<<endl;
//cout<<"so max value is "<<max<<endl;
//return 0;
//}}

{
	int n;
	int a[5]={};

cout<<"enter elements of array"<<endl;
for (int i=0;i<5;i++) {
	cin>>a[i]; }
	int temp = a[1];
	a[1]=a[3];
	a[3]=temp;
	cout<<"so the new array is "<<endl;
	for (int i=0; i<5;i++) {
		cout<<a[i]<<endl;
	}
	return 0;
	
	
	}


