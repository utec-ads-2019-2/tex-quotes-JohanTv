#include <iostream>
using namespace std;

int main() {
	string linea;
	bool comillas=true;
	while(getline(cin,linea)){
		for(int i=0; i < linea.size(); i++){
			if(linea[i]=='"' && comillas){
				cout<<"``";
				comillas=false;
			}
			else if(linea[i]=='"' && !comillas){
				cout<<"''";
				comillas=true;
			}
			else{
				cout<<linea[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
