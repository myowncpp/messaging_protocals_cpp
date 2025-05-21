#ifndef ALERT_HPP
#define ALERT_HPP

#include <iostream>
#include <functional>
#include "alert_interface.hpp"

class ReportTempAlert {
private:
    float tempClss;
    float lowTempThrdClss;
    float highTempThrdClss;
    IMessagePrinter* printer;

public:
    ReportTempAlert(float _lowTempThrdClss, float _highTempThrdClss, IMessagePrinter* _printer);
    void report_temp_alert(float _tempClss);
};

void print_message(const char* message);

#endif //ALERT_HPP