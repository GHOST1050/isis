#include<iostream> 
#include<fstream> 
using namespace std; 

int main() 
{
string xz; 
ofstream ofile; 
ofile.open ("text.txt");
cout<<"enter message : ";
getline(cin,xz);
ofile << xz << endl;  
ofile.close(); 
char data,z;
int m,k;
cout<<"enter key  : ";
cin>>k; 
k=k%26; 
    ifstream ifile;  
    ofstream o2;
    o2.open("cipher.txt");     
    ifile.open ("text.txt");  
    while ( !ifile.eof() )  
    {  
        ifile.get (data);  
        z = data;
        //cout << z;
        m = (int)z;
        if(( m >=97 ) && ( m <= 122) )
           { m=m-32+k;
        
        if(m>90)
            m=m-26;
        else if(m<65)
            m = m+26;
           }
        o2 << (char)m;
          
    } 
    ifile.close();
    o2.close();
return 0; 
} 
