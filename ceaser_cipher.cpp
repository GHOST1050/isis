#include<iostream> 
#include<fstream> 
using namespace std;
void encry()
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
            m = (int)z;
            if(( m >=97 ) && ( m <= 122) )
            {
            m=m-32+k;
            if(m>90)
                m=m-26;
            else if(m<65)
                m = m+26;
            }
            o2 << (char)m;        
        } 
    ifile.close();
    o2.close();
} 
void decry()
{
    cout<<"under construction \n";
}

int main() 
{
    int t=1;
    while(t!=0)
    {
        cout<<"you want to\n1.encrypt\n2.decrypt\n3.exit\n";
        cin>>t;
        switch (t)
        {
        case 1:
            encry();
            break;
        case 2:
            decry();
            break;
        case 3:
            t=0;
            break;
        default:
        cout<<"wrong choice :(";
            break;
        }
    }
return 0; 
} 
