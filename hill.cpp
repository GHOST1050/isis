#include <iostream>
#include<bits/stdc++.h> 
#include<math.h>
using namespace std; 
int n,m;
void getKeyMatrix(string key, vector<vector<int>> &keyMatrix) 
{ 
	int k = 0; 
	for (int i = 0; i < n; i++) 
	{ 
		for (int j = 0; j < n; j++) 
		{ 
			keyMatrix[i].push_back(key[k] % 65); 
			k++; 
		} 
	}
  //  cout<<"gkM suscess\n"; 
} 
void encrypt(vector<vector<int>> cipherMatrix,vector<vector<int>> keyMatrix,vector<vector<int>> messageVector) 
{ 
	int x, i, j=0; 
	for (i = 0; i < m; i++) 
	{ 
		cipherMatrix[i].push_back(0); 	
		for (x = 0; x < n; x++) 
		{ 
			cipherMatrix[i][j] += keyMatrix[i%n][x] * messageVector[x][j]; 
		} 
		
			cipherMatrix[i][j] = cipherMatrix[i][j] % 26; 
		 
	}
    //cout<<"enc suscess\n"; 
} 
void HillCipher(string message, string key) 
{ 
	vector<vector<int>> keyMatrix(n); 
	getKeyMatrix(key, keyMatrix); 

	vector<vector<int>> messageVector(m); 
	for (int i = 0; i < n; i++) 
		messageVector[i].push_back(message[i]% 65); 
    vector<vector<int>> cipherMatrix(m); 
	encrypt(cipherMatrix, keyMatrix, messageVector); 

	string CipherText;  
	for (int i = 0; i<m; i++) 
		CipherText = cipherMatrix[i][0] + 65;  
	cout << " Ciphertext:" << CipherText; 
} 

int main() 
{ 
	string message;
    cout<<"enter message : ";
    getline(cin,message); 
    m=message.size(); 
    cout<<"enter key : ";
	string key;
    getline(cin,key); 
    n=key.size();
    n=sqrt(n);
	HillCipher(message, key); 

	return 0; 
} 