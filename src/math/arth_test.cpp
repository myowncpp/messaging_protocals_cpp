#include <gtest/gtest.h>
#include "arth.hpp"

TEST(ArthTest, AddLeastValue) {
    ASSERT_EQ(Arth_u16Addition_u8u8(0, 0), 0);
}

TEST(ArthTest, AddMaxValue) {
    ASSERT_EQ(Arth_u16Addition_u8u8(std::numeric_limits<uint8_t>::max(), std::numeric_limits<uint8_t>::max()), 
                                   (std::numeric_limits<uint8_t>::max() + std::numeric_limits<uint8_t>::max()));
}

TEST(ArthTest, AddInterValue) {
    ASSERT_EQ(Arth_u16Addition_u8u8(7, 6), (7 + 6));
    ASSERT_EQ(Arth_u16Addition_u8u8(186, 221), (186 + 221));
    ASSERT_EQ(Arth_u16Addition_u8u8(5, 205), (5 + 205));
    ASSERT_EQ(Arth_u16Addition_u8u8(195, 6), (195 + 6));
}
