#include <iostream>
using namespace std;

// this code actually print a Diamond in command line

void printDiamond(){
int rows;
  
	int temp;
  
	cout << "Enter the number of rows: ";
  
 
	cin >> rows;
  
	int row = 1, i, j, k;
  
	temp = 1;  
 
	for (i = rows / 2; i > 0; i--){				
		for (j = 1; j <= i; j++){
			cout << " ";
		}
       
		for (j = 1; j <= row; j++){
			cout << temp;
			temp = temp + 1;
			cout << " ";
		}
      
	cout << "\n";	
	row++;
	}
  
	for (i = 0; i <= rows / 2; i++){
		for (j = 1; j <= i; j++){
			cout << " ";

		}
		for (j = row; j >= 1; j--){		
			cout << temp;  
			temp = temp + 1;
			cout << " ";
		}
      
	cout << "\n";
	row--;
	}
}

int main (){
	
  
	return 0; 
}


