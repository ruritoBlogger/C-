#include <iostream>
#include <vector>

std::vector<int>array;

int main() {
    int length;
    //配列数の入力
    std::cout << "これから配列の中央値の出力を行います" << std::endl;
    std::cout << "配列数の入力：";
    std::cin >> length;
    std::cout << std::endl;

    //配列の入力
    array = std::vector<int>(length);
    for(int line = 0;line < length;line++) {
        std::cout << line+1 << "番目の配列：";
        std::cin >> array[line];
        std::cout << std::endl;
    }

    //配列のソート
    for(int line = 0;line < length;line++) {
        for(int n = 0;n < length-1;n++) {
            if(array[n] > array[n+1]) {
                int a = array[n];
                array[n] = array[n+1];
                array[n+1] = a;
            }
        }
    }

    
   double answer;
    //evenの時
    if(length % 2 == 0) {
        answer = (double( array[(length/2) -1 ] ) + double( array[length/2] ))/2.0;
        std::cout << "中央値は" << answer << std::endl;
    }else{
        //oddの時
        answer = array[ (length/2) ];
        std::cout << "中央値は" << answer << std::endl;
    }
} 
