*/ Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise. /*

#include<bits/stdc++.h>

using namespace std;


void rotate(int a [][1000],int n){


	for(int row=0;row<n;row++){
	
        reverse(a[row],a[row]+n);

   	}


	for(int i=0;i<n;i++){
	


		for(int j=0;j<n;j++){
		

			if(i<j){
			
        swap(a[i][j],a[j][i]);  
        
        }
     
     }
     
       
 }




}



int main(){


  int n;cin>>n;
  int a[1000] [1000];


  for(int i=0;i<n;i++){
  
	  for(int j=0;j<n;j++){
	  
		  cin>>a[i][j];
	  }
    
}


    rotate(a,n);

	for(int i=0;i<n;i++){
	
		for(int j=0;j<n;j++){
		
			cout<<a[i][j]<<" ";
		}
    
		cout<<endl;
      
   }
  
  

    return 0;
     
     
}



