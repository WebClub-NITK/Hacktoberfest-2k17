#include <string>
#include <iostream>

using namespace std;

/*
 * Input: two numeric string without leading zeros
 * Output:  1 first string represent bigger number
 		    2 second string represents bigger number
			0 both represent same number
		   -1 input error
*/

int compareNumString(string first, string second){

	int firstSize = first.size();
	int secondSize = second.size();

	if(first.empty() && second.empty()){
		return 0;
	}

	if(firstSize > secondSize){
		return 1;
	}

	if(firstSize < secondSize){
		return 2;
	}

	if(firstSize == secondSize){
		for(int i = 0; i < firstSize; i++){
			if(first[i] == second[i]){
				continue;
			}else if(first[i] > second[i]){
				return 1;
			}else{
				return 2;
			}
		}
		return 0;
	}

	return -1;
}

/*
 * Driver program
*/

int main(){
	string first, second;
	cin >> first >> second;
	cout << compareNumString(first, second) << endl;
}
