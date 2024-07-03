#include<iostream>
using namespace std;
int main(){
    int result;
    int heads = 0,tails = 0;
    string name;
    cout << "Who are you?" << endl;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;  
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
    if(heads > tails){
        cout << name << " won" << endl;
    }else{
        cout << name << " lost" << endl;
    }
}