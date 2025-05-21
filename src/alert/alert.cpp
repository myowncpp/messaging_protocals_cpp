#include "alert.hpp"

ReportTempAlert::ReportTempAlert(float _lowTempThrdClass, float _highTempThrdClss, IMessagePrinter* _printer): 
                lowTempThrdClss(_lowTempThrdClass), highTempThrdClss(_highTempThrdClss), tempClss(0.0), printer(_printer) {}

void ReportTempAlert::report_temp_alert(float _tempClss) {
    tempClss = _tempClss;

    if (tempClss < lowTempThrdClss)
    {
        printer->print_message("Alert!: Low temperature detected");
    }
    else if (tempClss > highTempThrdClss)
    {
        printer->print_message("Alert!: High temperature detected");            
    }
    else {
        //Do nothing
    }
}