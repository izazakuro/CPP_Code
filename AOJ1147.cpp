#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    while(true){
        int n;
        cin >> n;

        if(n == 0){
            break;
        }

        vector<int> scores(n);
        for(int i = 0 ; i < n ; ++i){
            cin >> scores[i];
        }

        sort(scores.begin(), scores.end());

        int sum = 0;
        for( int i = 1; i < n - 1 ; ++i){
            sum += scores[i];
        }

        int average = sum / (n-2);

        cout << average << endl;

    }

    return 0;
}