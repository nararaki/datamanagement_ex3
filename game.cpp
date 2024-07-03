#include<iostream>
using namespace std;
int main(){
    int result;
    int heads = 0,tails = 0;
    cout << "Tossing a Coin..." << endl;
    srand((unsigned int)time(NULL));
    for(int i = 1;i <= 3;i++){
        result = std::rand() % 2;
        cout << "Round " << i << ": ";
        if(result == 0){
            cout << "Heads" << endl;
            heads++;
        }else{
            cout << "Tails" << endl;
            tails++;
        }
    }
    cout << "Heads: " << heads << ", Tails: " << tails;
}