#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "alert.hpp"

class MockPrintMessage : public IMessagePrinter {
public:
    MOCK_METHOD(void, print_message, (const char* message), (override));
};

TEST(AlertTest, lowTempAlert) {
    MockPrintMessage mockPrinter;
    ReportTempAlert repTempAlrt(15.0, 45.0, &mockPrinter);

    EXPECT_CALL(mockPrinter, print_message(testing::StrEq("Alert!: Low temperature detected"))).Times(1);
    repTempAlrt.report_temp_alert(12.5);

    EXPECT_CALL(mockPrinter, print_message(testing::StrEq("Alert!: High temperature detected"))).Times(1);
    repTempAlrt.report_temp_alert(48.5);

    // Expect that the alert printer is NOT called
    EXPECT_CALL(mockPrinter, print_message(::testing::_)).Times(0);
    repTempAlrt.report_temp_alert(28.5);
}