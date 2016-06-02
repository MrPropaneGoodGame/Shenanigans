#include <iostream>


using namespace std;



int main(){
	
	
	int stuff[10] = {4,24,52,13,5,1,4,21, 3, 5};
	
	int temp = 0;
	
	for(int i = 0;i<=9;i++){
		
		for(int j = 0; j<=10;j++){
			
		if(stuff[j]>stuff[j+1]){
			temp=stuff[j+1];
			stuff[j+1]=stuff[j];
			stuff[j]= temp;
		}	
			
			
			
		}
	}
	
	for(int k = 0; k==9; k++){
		cout<<stuff[k]<<"\n"<<endl;
		
	}
	
}
