#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int i, Guess_Number, Random_Number , num, num2;
	
	cout<<"Guess a number between 1 to 100 : ";
	cin>>Guess_Number;
	
	for(i=0;i<5;i++){
		Random_Number=rand()% 100;
//		cout<< Random_Number <<" ";
	}
	
	if(Random_Number > Guess_Number){
		num=Random_Number - Guess_Number;
	cout<<"Guess number is less than random number"<< num;	
	}
	else if(Random_Number < Guess_Number){
    	num2= Guess_Number - Random_Number;
    	cout<<"Guess number is less than random number"<< num2;	
	}
	else{
	cout<<"Guess number matches the random number";
}
return 0;
	
}

