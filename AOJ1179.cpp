#include<iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i ++){
        int Y, M, D;
        cin >> Y >> M >> D;
        int totalDays = 0;

        while( Y < 1000 ){

            D ++;
            totalDays++;
            if(Y % 3 != 0){
                if(M % 2 == 0 && D == 20){
                    D = 1;
                    M++;
                }
                else if( M % 2 != 0 && D == 21){
                    D = 1;
                    M ++;
                }   
            }
            else if( Y % 3 == 0){
                if(D == 21){
                    D = 1;
                    M ++;
                }
            }
            if(M == 11){
                M = 1;
                Y ++;
            }

        }

        cout << totalDays << endl;

    }

    return 0;
    
}