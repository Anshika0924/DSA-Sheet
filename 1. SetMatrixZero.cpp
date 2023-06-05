#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	//this works for any zero whixh is not in the first row and first col
	//as we are checking on the basis of first row and first col if we dont treat it different the ans is calculated
	//from the changed first row and firstcol values
	//eg if 0,0 has a 0 then acc to the condition in second nested loop all the first row will be 
	//0 which then further rows will be also be zero
	int n=matrix.size();
	int m=matrix[0].size();
	bool firstrow=false;
	bool firstcol=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			if(matrix[i][j]==0){
				if(i==0) firstrow=true;
				if(j==0) firstcol=true;
				matrix[0][j]=0;
				matrix[i][0]=0;
			}
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[0][j]==0 || matrix[i][0]==0){
				matrix[i][j]=0;
			}
		}
	}
	if(firstrow){
		for(int i=0;i<m;i++){
			matrix[0][i]=0;
		}
	}
	if(firstcol){
		for(int i=0;i<n;i++){
			matrix[i][0]=0;
		}
	}
}