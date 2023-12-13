#include <iostream>
#include <string> 
#include <random>
#include <vector>

std::vector<std::string> languages = {"Java", "Python", "C++", "JavaScript", "C", "SQL",  
"Go", "Swift", "Kotlin", "Ruby"};

int main() {
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(languages.begin(), languages.end(), gen);

    for(int i = 0; i < 10; i++) {
        std::cout << "Hello World! in " << languages[i] << std::endl;
    }

    return 0;
}
