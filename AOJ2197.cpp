#include<iostream>
#include<math.h>

using namespace std;

int main(){

    while(true){

        int n;
        cin >> n ;

        if( n == 0){
            break;
        }

        int count = 0;
        double a1;

        int N = (int)(0.5 * (-1 + sqrt(1 + 8 * n)));
        for( int i = 2 ; i <= N ; ++i){
            a1 = 1.0*n / i - i / 2.0 + 1 / 2.0;
            if((int)a1 == a1 && a1 > 0){
                count ++;
            }
        }

        cout << count << endl;
    }


}