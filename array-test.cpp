#include <iostream>
#include <vector>

std::vector<bool>check;

int main(){
    
    //素数判定をしたい数字の入力
    int length;
    std::cout << "素数判定をしたい数字：";
    std::cin >> length;
    std::cout << std::endl;
    
    check = std::vector<bool>(length);

    //配列に入力
    for(int n = 0;n < length;n++) {
        check[n] = true;
    }
    
    //flagがtrueの時素数
    bool flag = true;
    if(length == 0 || length == 1) {
        flag = false;
    }

    for(int n = 2;n < length;n++) {
        if(check[n]) {
            std::cout << n; 
            //素数の判定
            if(length % n == 0) {
                flag = false;
                break;
            }else{
                //素数でなければnの倍数を判定しないようにする
                for(int i = n;i < length;i *= 2) {
                    check[i] = false;
                }
            }
        }
    }

    if(flag) {
        std::cout << "素数です" << std::endl;
    }else{
        std::cout << "素数ではない" << std::endl;
    }


}
