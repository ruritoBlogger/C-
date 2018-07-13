#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void aori();

int main() {
    int Check_mozi = 0;
    bool flag = true;
    
    string input;
    cout << "これから素数判定を行います\n" << "数字を入力してください：";
    cin >> input;

    //文字か０か判別する
    if(input == "0") {
        Check_mozi += 1;
    }


    const double n = atoi(input.c_str());
    
    if(n == 0) {
        Check_mozi += 1;
        flag = false;
    }
    
    if(Check_mozi == 1) {
        aori();
    }

    //入力されたものが1の時の処理
    if(n == 1) {
        flag = false;
    }
    
    //素数判定
    if (Check_mozi != 1 || flag == false) {
         for(int j = 1;j < n;j++) {
             if(flag) {
                 for(int i = 1;i < n;i++) {
                     if(flag){
                         cout << i << j << endl;
                         if(n/(j*i) == 1) {
                             flag = false;
                         }
                     }
                 }
             }
         }
    }
    
    //結果を出力
    if(flag) {
        cout << "入力された数字は素数です" << endl;
    }else{
        cout << "入力された数字は素数ではありません" << endl;
    }
}

void aori() {
    cout << "error" << endl;
}

