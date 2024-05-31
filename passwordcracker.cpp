#include<iostream>
#include<string>
#include<ctime>

using namespace std;

string crackpassword(const string&targetpassword){
string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const int maxlength = 8;
    for(int length=1;length <= maxlength;++length)
    {
        string currentguess(length,'a');
        while(currentguess != targetpassword)
        {
            if(currentguess==targetpassword)
            {
                return currentguess;
            }
            for (int i=length-1;i>=0;--i){
                if(currentguess[i]==alphabet.back()){
                    currentguess[i]=alphabet.front();
                }else{
                    currentguess[i]=alphabet[alphabet.find(currentguess[i]+1)];
                    break;
                }
            }
        }
    }
    return "Password not found!";
}

int main(){
    string targetpassword;
    cout<<"Enter the password to crack:";
    cin>>targetpassword;

    clock_t start_t=clock();
    string crackedpassword=crackpassword(targetpassword);
    clock_t end_t=clock();

    cout<<"CRACKED THE PASSWORD!"<<endl;
    cout<<"The password:"<<crackedpassword<<endl;
    cout<<"Time duration passed:"<<(double)(end_t-start_t)/CLOCKS_PER_SEC<<"seconds"<<endl;
    return 0;
}
