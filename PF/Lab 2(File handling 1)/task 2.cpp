#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[5];
	cout << "Enter values in array :";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	ofstream write;
	write.open("file.txt");
	for (int i = 0; i < 5; i++)
	{
		write << arr[i] << " ";
	}
	write.close();


	ifstream read;
	read.open("file.txt");
	int arr1[5];
	for (int i = 0; i < 5; i++)
	{
		read >> arr1[i];
	}
	

		for (int i = 0; i < 5; i++) {
			bool counted = false;
			for (int j = 0; j < i; j++) 
			{
				if (arr1[j] == arr1[i])
				{
					counted = true;
					break;
				}
			}

			if (!counted) {
				int count = 1;
				for (int j = i + 1; j < 5; j++) 
				{
					if (arr1[j] == arr1[i]) {
						count++;
					}
				}
				cout << "Counts of " << arr[i] << " occurs " << count << " times." << endl;
			}
		}
		read.close();
		return 0;
}


