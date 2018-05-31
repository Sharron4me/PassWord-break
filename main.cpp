#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream file;
    string word, t, q, filename;
    filename="words.txt";
    string pass;
    cout<<"Please enter the password characters without space \n";
    cin>>pass;
    sort(pass.begin(),pass.end());
    bool yo=true;
    while(yo){
        file.open(filename.c_str());
        while (file >> word)
            {
                if(pass.compare(word)==0)   cout<<word<<endl;

            }
        yo=next_permutation(pass.begin(),pass.end());
        file.close();
    }
return 0;
}
