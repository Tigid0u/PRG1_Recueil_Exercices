#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	string filename;
	cout << "Filename: ";
	getline(cin, filename);
	ifstream is(filename);
	if(is.is_open()){
		string buffer;
		cout << endl << "Content of the file :" << endl << endl;
		cout << setw(20) << setfill('-') << "- ";
		cout << filename;
		cout << setw(20) << setfill('-') << left << " -" << endl;
		while(getline(is,buffer)){
			cout << buffer << endl;
		}
		cout << setw(40+filename.size()) << setfill('-') <<  "-" << endl << endl;
	}
	is.close();
	ofstream os(filename, ofstream::out|ofstream::app);
	if(!os.is_open()){
		cerr << "Out file not found !" << endl;
		return 1;
	}
	string terminator("#exit#"), buffer = "";
	while(buffer != terminator){
		cout << "Write text to file \"" << filename << "\" (#exit# to exit typing) : ";
		getline(cin,buffer);
		if(buffer != terminator) os << buffer << endl;
	}
	os.close();
	return 0;
}