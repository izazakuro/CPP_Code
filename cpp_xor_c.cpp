#include<iostream>

using namespace std;

int v = 0;
int A[40000000];

int main(){

    int N;
    
    cin >> N ;

    for(int i = 1 ; i <= N ; i++){

        cin >> A[i];

    }


    for(int i = 1 ; i <= N ; i++){

        v ^= A[i];
    }

    if(N % 2 == 1){
        cout << "Win" << endl;
    }
    else{

        bool win = false;
        for(int i = 1 ; i <= N ; ++i){
            if(A[i] == v){
                win = true;
            }
        }
        if(win == true){
            cout << "Win" << endl;
        }
        else{
            cout << "Lose" << endl;
        }
    }

    return 0 ;



}