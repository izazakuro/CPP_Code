#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    while (true) {
        int n, m;
        cin >> n >> m;

        if (n == 0 && m == 0) {
            break;
        }

        vector<int> taroCards(n);
        vector<int> hanakoCards(m);

        int taroSum = 0;
        int hanakoSum = 0;

        for (int i = 0; i < n; i++) {
            cin >> taroCards[i];
            taroSum += taroCards[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> hanakoCards[i];
            hanakoSum += hanakoCards[i];
        }

        int minDiff = abs(taroSum - hanakoSum);
        int taroCard = -1, hanakoCard = -1;
        bool found = false;

        sort(hanakoCards.begin(), hanakoCards.end());
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int newTaroSum = taroSum - taroCards[i] + hanakoCards[j];
                int newHanakoSum = hanakoSum - hanakoCards[j] + taroCards[i];
                int newDiff = abs(newTaroSum - newHanakoSum);

                if (newDiff == 0 || (minDiff == 0 && newDiff == 0 && i != 0 && j != 0) ) {
                    found = true;
                    if(minDiff == 0 ){
                        if((taroCards[i] < taroCard && hanakoCards[j] < hanakoCard) || (taroCard == -1 && hanakoCard == -1)){
                            taroCard = taroCards[i];
                            hanakoCard = hanakoCards[j];
                            break;
                        }
                    }else{
                        taroCard = taroCards[i];
                        hanakoCard = hanakoCards[j];
                        break;

                    }
                    
                }
            }
            if (found) {
                break;
            }
        }

        if (found) {
            cout << taroCard << " " << hanakoCard << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
