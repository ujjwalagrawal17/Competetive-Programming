 # include <iostream>
 
 using namespace std;
 
 int main(){
 	int t;
 	cin >> t;
 	for (t=0;t<3;t++){
 		int n;
		 cin >>n;
		 int a[n];
		 for (int i=0;i<n;i++){
		 cin >> a[i];	
		 } 	
		 
		 for (int i=1;i<n ;i++){
		 	 int b=a[i];
		 	int j;
			 for (j=i-1;j>=0;j--){
			 	
			 	//comparing element =j
				 if(a[j]>b){
		 			a[j+1]=a[j];

				 }
				 else{
				// print outside loop so that for j==0 program works fine.. 
				//	a[j+1]=b;
				 	break;
				 }
			}
		 	a[j+1]=b;
				 	
		 }
 		for (int i=0;i<n;i++){
 			cout << a[i];
 		}
 		
 	}
 	return 0;
 }
