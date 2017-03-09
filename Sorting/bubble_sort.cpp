#include <iostream>

using namespace std;

 void swap(int* a,int* b){
 	*a=*a+*b;
 	*b=*a-*b;
 	*a=*a-*b;
 }
 
 int main(){
 	
 int n;
 cin >> n;
 
 int a[n];
 for (int i=0;i<n;i++){
 	cin >> a[i];
 }
 
		
 for (int i=1;i<n;i++){
 	
 	for(int j=0;j<n-i;j++){
 		
		 if (a[j]>a[j+1]){
			 
		 //a[j]=a[j]+a[j+1];
		 //a[j+1]=a[j]-a[j+1];
		 //a[j]=a[j]-a[j+1];
		
		//swap(&a[j],&a[j+1]);		
 		}
	}
 	
 }
 
 for (int i=0;i<n;i++){
 	cout << a[i];
 
 }
	return 0;
}

