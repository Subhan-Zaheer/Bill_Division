#include<iostream>
#include<vector>

using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    float annaPay = 0.0;
    int sum = 0;
    int size = sizeof(bill);
    for (int i = 0; i < bill.size(); i++) {
        if (i == k)continue;
        sum += bill[i];

    }
    annaPay = sum / 2;
    if (b - annaPay == 0) cout << "Bon Appetit" << endl;
    else cout << b - annaPay << endl;

}


int main() {
    bonAppetit({ 3, 10, 2, 9 }, 1, 12);

    return 0;
}
