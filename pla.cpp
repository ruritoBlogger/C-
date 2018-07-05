//こちらのプログラムはピラミッドを出力するプログラムです

#include <iostream>
#include <algorithm>
#include <cctype>

bool checkInput(std::string input);
void display(int mode);

int start();
void display(int mode);

int main() {
    int mode;
    std::string check;
    std::cout << "ピラミッドを表示します" << "\n" << "何段表示するか入力してください：";
    std::cin >> check;
    std::cout << "\n";
    //入力されたものが数字か文字か判定
    if(!checkInput(check)) {
        std::cout << "error" << std::endl;
        return 1;
    }
    mode = std::stoi(check);
    //ピラミッドを出力する
    display(mode);
}

//文字が入っていた場合falseを出力する
bool checkInput(std::string input) {
    return = std::all_of(input.cbegin(),input.cend(),isdight);
}

//ピラミッドを出力する
void display(int mode) {
    std::string space = " ";
    //iは何段目を指している
    for(int i = 0;i < mode;i++) {
        //i段目の出力
        for(int j = 0;j < mode -i;j++) {
            std::cout << space;
        }
        for(int j = 0;j < i;j++) {
            std::cout << " " << "*";
        }
        for(int j = 0;j < mode;j++) {
            std::cout << space;
        }
        std::cout << std::endl;
    }
}
