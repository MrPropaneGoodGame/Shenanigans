#include <iostream>
#include <cmath>

using namespace std;




double posQuad(double a, double b, double c){
	double posAnswer = (b +  sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	
	return posAnswer;
	
	
	
	
}

double negQuad(double a, double b, double c){
	double negAnswer = (b -  sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	
	return negAnswer;
}





double rootChecker(double a, double b, double c){
	double root = sqrt(pow(b, 2) - 4 * a * c);
	if(root > 0){
		cout<<"2 roots\n"<<endl;
		
	}
	else if(root == 0){
		cout<<"1 root\n"<<endl;
	}
	else if(root < 0){
		cout<<"0 roots\n"<<endl;
	}

}



int main(){
	double a, b, c;
	cout<<"\nEnter value for a\n"<<endl;
	cin>>a;
	cout<<"\nEnter value for b\n"<<endl;
	cin>>b;
	cout<<"\nEnter value for c\n"<<endl;
	cin>>c;
	
	
	
	cout<<"\nNumber of roots = \n"<<endl;
	rootChecker(a,b,c);
	cout<<"\nRoots = \n\n"<<posQuad(a,b,c)<<"\n\n"<<negQuad(a,b,c)<<"\n\nh"<<endl;
	
	
	system("pause");
	
	
	
	return 0;
}
