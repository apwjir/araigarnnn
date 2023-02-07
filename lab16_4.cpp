#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
	for(int j = 0; j <100; j++){
	int i = rand()%3;
		if(i == 0){
			int temp = a;
			a = b;
			b = temp;
		}
	if(i == 1){
			int temp = b;
			b = c;
			c = temp;
		}
	if(i == 2){
			int temp = c;
			c = d;
			d = temp;
		}
	}
}
