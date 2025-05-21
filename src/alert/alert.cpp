#include "alert.hpp"

void print_message(const char* message){
    std::cout << message << std::endl;
}

ReportTempAlert::ReportTempAlert(float _lowTempThrdClass, float _highTempThrdClss, std::function<void (const char*)> fp): 
                lowTempThrdClss(_lowTempThrdClass), highTempThrdClss(_highTempThrdClss), tempClss(0.0), printMessage(fp) {}

void ReportTempAlert::report_temp_alert(float _tempClss) {
    tempClss = _tempClss;

    if (tempClss < lowTempThrdClss)
    {
        printMessage("Alert!: Low temparature detected");
    }
    else if (tempClss > highTempThrdClss)
    {
        printMessage("Alert!: High temparature detected");            
    }
}