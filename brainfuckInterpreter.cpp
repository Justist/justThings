//TODO: Zorgen dat loops in structs worden gezet en uitgevoerd worden.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> y;
int maxIndex = 0;
int currentIndex = 0;
bool lastCharWas] = false;
string z = "";

struct loopedCharsStruct {
	string loopedChars = "";
};

vector<loopedCharsStruct> listOfStructs;

void characterRecognizing(char x) {
	switch(x) {
		case '+' :
			 if(y[currentIndex] + 1 <= 255) y[currentIndex]++;
			break;
		case '-' :
			 if(y[currentIndex] - 1 >= 0) y[currentIndex]--;
			break;
		case '<' :
			 if(currentIndex - 1 >= 0) currentIndex--;
			break;
		case '>' :
			 if (currentIndex + 1 > maxIndex){y.push_back(0); maxIndex++;}
			 currentIndex++;
			break;
		case ',' :
			 y[currentIndex] = (int) cin.get();
			break;
		case '.' :
			 cout << (char) y[currentIndex];
			break;
		case '[' :
			 listOfStructs.push_back(NULL);
			break;
		case ']' :
			lastCharWas] = true;
			break;
		
	};
}

void readFromString() {
	char x;
	for(int i = 0; i < z.length(); i++) {
		characterRecognizing(z[i]);
		if(lastCharWas]) 
	}
}

int main () {
	char x;
	y.push_back(0); 
	maxIndex++;
	
	cin.get(x);
	while (x != '\n') {
		if(x == '+' || x == '-' || x == '<' || x == '>' || x == '.' || x == ',' || x == '[' || x == ']') z += x;
		cin.get(x);
	}
	readFromString();
	return 0;
}
