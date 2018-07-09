#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

std::vector<std::vector<int> > before;
std::vector<std::vector<int> > after;
std::vector<std::vector<int> > result;

bool checkInput(std::string check);
std::vector<int> changeMode(std::vector<std::vector<int> > after,int low);
int sum(std::vector<int> line,std::vector<int> low);

int main() {
    int size = 0;
    std::string Size;
    std::cin >> Size;
    
    if(!checkInput(Size) || Size == "0") {
        std::cout << "error" << "\n" ;
        return 1;
    }
    size = atoi(Size.c_str());;

    std::cout << "１つ目の行列を入力してください" << std::endl;
    std::string check;
    before = std::vector<std::vector<int> > (check,std::vector<int>(check,0)); 
    for(line = 0;line < size;line++) {
        for(low = 0;low < size;low++) {
            std::cout << "(" + std::to_string(line + 1) + "," + std::to_string(low + 1) + ")を入力してください" << std::endl;            
            std::cin >> check;
            if(!checkInput(check)) {
                std::cout << "error" << "\n" ;
                return 1;
            }
            before[line][low] = atoi(check.c_str());
        }
    }
    
    std::cout << "２つ目の行列を入力してください" << std::endl;
    after = std::vector<std::vector<int> > (check,std::vector<int>(check,0)); 
    for(line = 0;line < size;line++) {
        for(low = 0;low < size;low++) {
            std::cout << "(" + std::to_string(line + 1) + "," + std::to_string(low + 1) + ")を入力してください" << std::endl;            
            std::cin >> check;
            if(!checkInput(check)) {
                std::cout << "error" << "\n" ;
                return 1;
            }
            after[line][low] = atoi(check.c_str());;
        }
    }

    std::cout << "結果を出力します" << std::endl;
    result = std::vector<std::vector<int> > (check,std::vector<int>(check,0)); 
    for(int line = 0;line < size;line++) {
        for(int low = 0;low < size;low++) {
            result[line][low] = sum(before[line],changeMode(after,low));
            std::cout << result[line][low] << " " ;
        }
        std::cout << std::endl;
    }



}

bool checkInput(std::string check) {
    return std::all_of(check.cbegin(),check.cend(),isdight);
}

std::vector<int> changeMode(std::vector<std::vector<int> > after,int low) {
    std::vector<int> result (after.size());
    for(int line = 0;line < after.size;line++) {
        result[line] = after[line][low];
    }
    return result;
}

int sum(std::vector<int> line,std::vector<int> low) {
    int result;
    for(int i = 0;i < line.size();i++) {
        result += line[i] * low[i];
    }
    return result;
}
