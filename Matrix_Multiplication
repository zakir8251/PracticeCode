#include <bits/stdc++.h>
using namespace std;

void print_matrix(const vector<vector<int>>& A)
{
	for (auto row: A){
		for (auto item : row){
			cout<<item<<" ";
		}
		cout<<endl<<endl;
	}
}

void matrix_mul(const vector<vector<int>>& A, const vector<vector<int>>& B)
{
	int M = A.size(), N1 = B.size(), N = A[0].size(), O = B[0].size(); 
	if(N1 !=N){
		throw invalid_argument("A's Col != B's Rows !!");
		return;
	}

	vector<vector<int>> C(M, vector<int> (O,0));

	for(int i=0; i<M;i++){
		for(int j=0;j<O;j++){
			for(int k=0; k<N; k++){
				C[i][j] +=A[i][k]*B[k][j];
			}
		}
	}

	print_matrix(C);

}

int main()
{

    vector<vector<int> > A{ { 1, 2, 3, 1 }, 
                            { 4, 5, 6, 1 }, 
                            { 7, 8, 9, 1 } }; 

    vector<vector<int> > B{ { 1, 2 }, 
                            { 4, 5 }, 
                            { 7, 8 },
                            { 0, 1 } };

	print_matrix(A);
	print_matrix(B);
	matrix_mul(A,B);
	
	return 0;
}
