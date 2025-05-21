#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "alert.hpp"

class MockPrintMessage {
private:
    std::string message;
    
public:
    void print_message(const char* _message) {
        message = _message;
    }

    const std::string& return_message() {
        return message;
    }
};

TEST(AlertTest, lowTempAlert) {
    MockPrintMessage mockPrint;
    ReportTempAlert repTempAlrt(15.0, 45.0, [&](const char* msg) {
        mockPrint.print_message(msg);
    });

    repTempAlrt.report_temp_alert(12.5);
    ASSERT_EQ(mockPrint.return_message(), "Alert!: Low temparature detected");
}