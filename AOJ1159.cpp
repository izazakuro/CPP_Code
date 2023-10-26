#include<iostream>
#include<vector>

using namespace std;

int main(){

    while(true){
        int n, p;
        cin >> n >> p;
        bool flag = false;
        if( n == 0 && p == 0){
            break;
        }

        vector<int> candidate(n , 0);
        int current = 0;



        while(true){

            if(flag == true){
                    break;
                }
            if(p > 0){
                candidate[current]++;
                p --;
                if( p == 0){
                int count = 0;
                for(int i = 0; i < n  ; i++){
                    if(i == current){
                        continue;
                    }
                    if(candidate[i] != 0){
                        break;
                    }else{
                        count ++;
                    }
                    if(count == n - 1){
                        flag = true;
                    }
                }
                if(flag == true){
                    continue;
                }
            }
            current = (current + 1) % n;
            continue;
            
            }
            if(p == 0){

                p += candidate[current];
                candidate[current] = 0;
                current = (current + 1) % n;
        
            }

        }

        cout << current << endl;

    }

    return 0 ;
}