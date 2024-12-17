
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printHelloWorld();
void bubbleSort(vector<int>&);
void printVector(vector<int>);

int main(){

	vector<int> nums = {1, 5, 4, 8, 3, 2, 8, 2, 12, 45, 51, 335, 21};
	printVector(nums);
	bubbleSort(nums);
	cout << endl << "Sorted Vector: " << endl;
	printVector(nums);
}


void bubbleSort(vector <int>& arr) {
	int n = arr.size();
	bool swapped = false;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
	}
}

void printVector(const vector<int> arr) {
	for (int num : arr) {
		cout << " " << num;
	}
}


void printHelloWorld() {
	vector <string> text = { "Hello", "World" };
	for (int i = 0; i < text.size(); i++) {
		cout << text[i];
		if (i != text.size() - 1) {
			cout << " ";
		}
	}
	cout << "!";
}

