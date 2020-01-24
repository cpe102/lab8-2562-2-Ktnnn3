#include<iostream>
using namespace std;
char printO(int M,int N){
if(M>0&&N>0){
	for(int p=0;p<M;p++){
		for(int i=0;i<N;i++){
		cout<<"O";
			}
			cout<<endl;
		}
	}else{
		cout<<"Invalid input";
	}

}
//Write the function printO() here

int main(){
	
	printO(3,3);
	cout << "\n";
	
	printO(10,7);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
