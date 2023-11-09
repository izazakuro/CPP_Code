#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    int N;

    cin >> N;

    vector<char> a;
    
    for(int i = 0 ; i < N; i ++){
        cin >> a[i];
    }

    bool flag = false;


    for(int i = 0 ; N - 1 ; i ++){
        if(a[i] == 'a' && a[i + 1] == 'b'){

            flag = true;
            break;

        }else if(a[i] == 'b' && a[i + 1] == 'a'){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;

}