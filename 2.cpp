#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> nums(10);

	for(int i=0; i<10; i++){
		nums[i] = i*i;
	}

	for(auto num:nums){
		cout << num << endl;
	}

	return 0;
}
