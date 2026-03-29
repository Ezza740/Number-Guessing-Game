#include <iostream>
using namespace std;
  int calculatescore(int attempts){
  	int score=100-(attempts*5);
  	if (score<0){
  		return score;
	  }
  }
  void playgame () {
  	int secretnumber=70;
  	int guess;
  	int attempts=0;
  	int guesses[5];
  	cout<<"guess the number between 1 and 100 !"<<endl;
  	while (true){
  		cout<<"enter your guess:";
  		cin>>guess;
  		guesses[attempts]=guess;
  	 attempts++;
  	 
  	 if (guess>secretnumber){
  	 	cout<<"too high! try again"<<endl;
	   }
	else if (guess<secretnumber) {
		cout<<"too low! try again"<<endl;
	}
	else {
		cout<<"correct! you guess it in"<< " "<< attempts<<" "<<"attempts"<<endl;
		break;
		
	}
	if (attempts==5){
		cout<<"maximum reached attempts .Game over!! "<<endl;
		break;
	}
	  }
	  cout<<"your guesses were:";
	  for (int i=0;i<attempts;i++){
	  	cout<<guesses[i]<<" "<<endl;
	  }
	int score=calculatescore(attempts);
	cout<<"your score is:"<<score;

  	
  }
  
  int main () {
  	
  	cout<<"-------------------"<<endl;
  	cout<<"number guessing game"<<endl;
  	cout<<"-------------------"<<endl;
  	playgame();
  	

  }
  	
  
