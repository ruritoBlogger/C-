#include <iostream>
#include <vector>

std::vector<int> array;

int main() {
    std::cout << "入力された配列の中から指定された範囲の和を出力する" << std::endl;
    
    //配列数の入力
    std::cout << "配列数の入力：" << std::endl;
    int length;
    std::cin >> length;
    std::cout << std::endl;

    //配列の入力
    array = std::vector<int>(length);
    for(int line = 0;line < length;line++) {
        std::cout << line+1 << "番目の配列：";
        std::cin >> array[line];
        std::cout << std::endl;
    }

    //回数の入力    
    int roop;
    std::cout << "回数の入力";
    std::cin >> roop;
    std::cout << std::endl;

    //範囲の入力及び結果の出力
    for(int n = 0;n < roop;n++) {
        //範囲の指定
        std::cout << "出力したい和の範囲の指定" << std::endl;
        std::cout << "ひとつ目：";
        int point1 = 0;
        int point2 = 0;
        std::cin >> point1;
        std::cout << "ふたつ目：";
        std::cin >> point2;
        std::cout << std::endl;

        //結果の出力
        int answer = 0;
        for(int line = (point1-1);line < point2;line++) {
            answer += array[line];
        }
        std::cout << answer << std::endl;
    }
}
