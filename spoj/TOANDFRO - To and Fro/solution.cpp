#include <iostream>
using namespace std;
string rev(string str)
{
    string ret;
    for (string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
    {
        ret+=*rit;
    }
    return ret;
}

int main ()
{
    int cols ;
    while(true)
    {
        cin>>cols;
        if(cols==0)break;
        string text;
        string repo;
        cin>>text;
        int lengh = text.size();
        int rows = lengh/cols;
        char matrix [rows][cols];
        bool flag = true;
        for(int i = 0 ; i < lengh ; i+=cols)
        {
            flag = (flag)?false:true;
            if(flag)
            {
                repo = rev(text.substr(i,cols));
                text.erase(i,cols);
                text.insert(i,repo);
            }
        }
        int l = 0;
        for(int j = 0 ; j<rows ; j++){
            for(int k = 0 ; k<cols;k++){
                matrix[j][k] = text[l];
                l+=1;
            }
        }
        for(int f = 0 ; f<cols ; f++){
            for(int y = 0 ; y < rows ; y++){
                cout<<matrix[y][f];
            }
        }
        cout<<"\n";
    }
}