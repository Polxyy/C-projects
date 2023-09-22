#include <iostream> 
#include <string>

//Given a valid(IPv4) IP address, return a defanged version of that IP address.

//A defanged IP address replaces every period "." with "[.]".

//192.168.51.15 -> 192[.]165[.]51[.]15

//class Solution {
//public:
//    std::string defangIPaddr(std::string address) {
//        //address.replace(find('.'))
//        address.replace(address.find_first_of('.'), address.find('.'), "[.]");
//    }
//};

std::string defangIPaddr(std::string address) {

    for (size_t size = address.find('.'); size != std::string::npos; size = address.find('.', size + 3)) {
            address.replace(size, 1, "[.]");
    }
    return address;
    
}

int main() {
    std::cout << defangIPaddr("2.8.9.1");
}
