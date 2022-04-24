#include <iostream>
using namespace std;

class RowEchelon
{
	static int rows, col;
	double matrix[1][1];

public:
	RowEchelon() //The constructor here declares the size of the matrix
	{
		cout << "Input the Rows of the matrix: "; 
		cin >> rows;  
		cout << "Input the columns of the matrix: ";
		cin >> col;
		matrix[rows][col];
	}



};

int RowEchelon::rows = 0;
int RowEchelon::col = 0;

class ReducedRowEchelon
{

};

class Gauss
{

};

class GaussJordan
{

};

int main()
{

}