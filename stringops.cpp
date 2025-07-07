//String operations
#include <iostream>
#include <cstring>
class String {
private:
    char* str;
public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    ~String() {
        delete[] str;
    }
    String operator+(const String& other) const {
        String newStr;
        newStr.str = new char[strlen(this->str) + strlen(other.str) + 1];
        strcpy(newStr.str, this->str);
        strcat(newStr.str, other.str);
        return newStr;
    }
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str; // Free existing memory
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }
    bool operator<=(const String& other) const {
        return strcmp(this->str, other.str) <= 0;
    }
    int length() const {
        return strlen(str);
    }
    void tolower() {
        for (int i = 0; str[i]; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 'a' - 'A'; 
            }
        }
    }
    void toupper() {
        for (int i = 0; str[i]; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 'a' - 'A';
            }
        }
    }
    void display() const {
        std::cout << str << std::endl;
    }
};
int main() {
    String str1("Hello");
    String str2(" World");
    
    String str3 = str1 + str2; 
    std::cout << "Length of str3: " << str3.length() << std::endl; 
    str3.tolower(); 
    str3.display(); 
    str3.toupper();
    str3.display(); 
    String str4("Apple");
    String str5("Banana");
    if (str4 <= str5) {
        std::cout << "Apple is less than or equal to Banana" << std::endl;
    } else {
        std::cout << "Apple is greater than Banana" << std::endl;
    }
    return 0;
}