#ifndef ALERT_INTERFACE_HPP
#define ALERT_INTERFACE_HPP
#include <iostream>

class IMessagePrinter {
public:
    virtual ~IMessagePrinter() = default;
    virtual void print_message(const char* message) = 0;
};

class conslePrinter: public IMessagePrinter {
public:
    void print_message(const char* message) override {
        std::cout << message << std::endl;
    }
};

#endif //ALERT_INTERFACE_HPP