// Problem 7 of Lab 4 written by Caleb Latimer
#include<iostream>
#include<fstream>
using namespace std;
void boolprod(int A[][4], int B[][4])
{
	int soln[4][4];
	cout << "Result matrix before math is :\n";
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			soln[i][j] = 0;
			cout << soln[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Result matrix of boolean product is:\n";
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			for (int k = 0; k < 4; k++){ // I can't figure out what is wrong here, k < i, k < j and k < 2 all fail
				soln[i][j] = soln[i][j] || ((A[i][k] && B[k][j]));
				
			}
			cout << soln[i][j] << " "; // Same problem here as the last problem 
		}
		cout << endl;
	}


}
int main()
{
	int x[4][4];
	int y[4][4];
	ifstream first, second;
	first.open("A7.txt");
	second.open("B7.txt");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			first >> x[i][j];
			second >> y[i][j];
		}
	}
	cout << "First matrix is :\n";
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Second matrix is :\n";
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << y[i][j] << " ";
		}
		cout << endl;
	}
	boolprod(x, y);
	system("Pause");

}