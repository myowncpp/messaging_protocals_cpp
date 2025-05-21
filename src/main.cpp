#include <iostream>
#include "arth.hpp"
#include "alert.hpp"

int main() {
    uint16_t sum = 0;
    sum = Arth_u16Addition_u8u8(50, 24);
    std::cout << "Sum of (50, 24) = " << sum << std::endl;

    ReportTempAlert repTempAlrt(15.0, 45.0, &print_message);
    repTempAlrt.report_temp_alert(5.0);

    return 0;
}
