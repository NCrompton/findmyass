#include <iostream>
using namespace std;

int Plus(int x, int y){
	int k = 0;                  
	if(x >= 0 && y >= 0){
		k = x + y;
	}
	return k;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Minus(int x, int y){
	int k = 0;
	if(x >= 0 && y >= x){
		k = y - x;
	}else if(y >= 0 && x >= y){
		k = x - y;
	}
	return k;
}

int main() {
	for(int i = 0; i <= 5; i++){
	
	int x1, y1, z1, t;
	cout << "This is a new task.\n" << endl;
	cin >> x1;
	cin >> y1;
	cin >> z1;
	if(z1 == 1){
	    t = Plus(x1, y1);
	}else if(z1 == 2){
	    t = Minus(x1, y1);	
	}else{
		cout << "Please provide a valid operation code! " << endl;
	}
	
	cout << "The answer is " << t << endl;
	
	
}
system("PAUSE");
return 0;
}


