#ifndef ALERT_HPP
#define ALERT_HPP

#include <iostream>
#include <functional>

class ReportTempAlert {
private:
    float tempClss;
    float lowTempThrdClss;
    float highTempThrdClss;
    std::function<void(const char*)> printMessage;

public:
    ReportTempAlert(float _lowTempThrdClss, float _highTempThrdClss, std::function<void(const char*)> fp);
    void report_temp_alert(float _tempClss);
};

void print_message(const char* message);

#endif //ALERT_HPP