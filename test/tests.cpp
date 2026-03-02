// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


// checkPrime
TEST(CheckPrimeTest, HandlesSmallNumbers) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(10));
}

TEST(CheckPrimeTest, HandlesMediumNumbers) {
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_TRUE(checkPrime(17));
    EXPECT_TRUE(checkPrime(19));
    EXPECT_TRUE(checkPrime(23));
    EXPECT_TRUE(checkPrime(29));
    EXPECT_TRUE(checkPrime(31));
    EXPECT_TRUE(checkPrime(37));
    EXPECT_TRUE(checkPrime(41));
    EXPECT_TRUE(checkPrime(43));
    EXPECT_FALSE(checkPrime(21));
    EXPECT_FALSE(checkPrime(25));
    EXPECT_FALSE(checkPrime(27));
    EXPECT_FALSE(checkPrime(33));
    EXPECT_FALSE(checkPrime(35));
    EXPECT_FALSE(checkPrime(39));
    EXPECT_FALSE(checkPrime(45));
    EXPECT_FALSE(checkPrime(49));
}

TEST(CheckPrimeTest, HandlesLargeNumbers) {
    EXPECT_TRUE(checkPrime(97));
    EXPECT_TRUE(checkPrime(101));
    EXPECT_TRUE(checkPrime(103));
    EXPECT_TRUE(checkPrime(107));
    EXPECT_TRUE(checkPrime(109));
    EXPECT_TRUE(checkPrime(113));
    EXPECT_TRUE(checkPrime(127));
    EXPECT_TRUE(checkPrime(131));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_FALSE(checkPrime(102));
    EXPECT_FALSE(checkPrime(104));
    EXPECT_FALSE(checkPrime(105));
    EXPECT_FALSE(checkPrime(106));
    EXPECT_FALSE(checkPrime(108));
    EXPECT_FALSE(checkPrime(110));
    EXPECT_FALSE(checkPrime(111));
    EXPECT_FALSE(checkPrime(112));
    EXPECT_FALSE(checkPrime(121));
    EXPECT_FALSE(checkPrime(125));
}

TEST(CheckPrimeTest, HandlesVeryLargeNumbers) {
    EXPECT_TRUE(checkPrime(997));
    EXPECT_TRUE(checkPrime(1009));
    EXPECT_TRUE(checkPrime(1013));
    EXPECT_TRUE(checkPrime(1019));
    EXPECT_TRUE(checkPrime(7919));
    EXPECT_TRUE(checkPrime(7927));
    EXPECT_TRUE(checkPrime(104729));
    EXPECT_TRUE(checkPrime(104743));
    EXPECT_FALSE(checkPrime(1000));
    EXPECT_FALSE(checkPrime(10000));
    EXPECT_FALSE(checkPrime(7918));
    EXPECT_FALSE(checkPrime(7917));
    EXPECT_FALSE(checkPrime(104728));
    EXPECT_FALSE(checkPrime(104730));
}

// nPrime
TEST(NPrimeTest, HandlesFirstTen) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(7), 17);
    EXPECT_EQ(nPrime(8), 19);
    EXPECT_EQ(nPrime(9), 23);
    EXPECT_EQ(nPrime(10), 29);
}

TEST(NPrimeTest, HandlesMediumIndices) {
    EXPECT_EQ(nPrime(11), 31);
    EXPECT_EQ(nPrime(12), 37);
    EXPECT_EQ(nPrime(13), 41);
    EXPECT_EQ(nPrime(14), 43);
    EXPECT_EQ(nPrime(15), 47);
    EXPECT_EQ(nPrime(16), 53);
    EXPECT_EQ(nPrime(17), 59);
    EXPECT_EQ(nPrime(18), 61);
    EXPECT_EQ(nPrime(19), 67);
    EXPECT_EQ(nPrime(20), 71);
    EXPECT_EQ(nPrime(21), 73);
    EXPECT_EQ(nPrime(22), 79);
    EXPECT_EQ(nPrime(23), 83);
    EXPECT_EQ(nPrime(24), 89);
    EXPECT_EQ(nPrime(25), 97);
}

TEST(NPrimeTest, HandlesLargeIndices) {
    EXPECT_EQ(nPrime(30), 113);
    EXPECT_EQ(nPrime(40), 173);
    EXPECT_EQ(nPrime(50), 229);
    EXPECT_EQ(nPrime(60), 281);
    EXPECT_EQ(nPrime(70), 349);
    EXPECT_EQ(nPrime(80), 409);
    EXPECT_EQ(nPrime(90), 463);
    EXPECT_EQ(nPrime(100), 541);
}

TEST(NPrimeTest, HandlesBoundaryCases) {
    EXPECT_EQ(nPrime(0), 0);
    EXPECT_EQ(nPrime(168), 997);
    EXPECT_EQ(nPrime(169), 1009);
}

// nextPrime
TEST(NextPrimeTest, HandlesSmallNumbers) {
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(6), 7);
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(8), 11);
    EXPECT_EQ(nextPrime(9), 11);
    EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, HandlesMediumNumbers) {
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(12), 13);
    EXPECT_EQ(nextPrime(13), 17);
    EXPECT_EQ(nextPrime(14), 17);
    EXPECT_EQ(nextPrime(15), 17);
    EXPECT_EQ(nextPrime(16), 17);
    EXPECT_EQ(nextPrime(17), 19);
    EXPECT_EQ(nextPrime(18), 19);
    EXPECT_EQ(nextPrime(19), 23);
    EXPECT_EQ(nextPrime(20), 23);
    EXPECT_EQ(nextPrime(21), 23);
    EXPECT_EQ(nextPrime(22), 23);
    EXPECT_EQ(nextPrime(23), 29);
    EXPECT_EQ(nextPrime(24), 29);
    EXPECT_EQ(nextPrime(25), 29);
    EXPECT_EQ(nextPrime(26), 29);
    EXPECT_EQ(nextPrime(27), 29);
    EXPECT_EQ(nextPrime(28), 29);
}

TEST(NextPrimeTest, HandlesLargeNumbers) {
    EXPECT_EQ(nextPrime(97), 101);
    EXPECT_EQ(nextPrime(98), 101);
    EXPECT_EQ(nextPrime(99), 101);
    EXPECT_EQ(nextPrime(100), 101);
    EXPECT_EQ(nextPrime(101), 103);
    EXPECT_EQ(nextPrime(102), 103);
    EXPECT_EQ(nextPrime(103), 107);
    EXPECT_EQ(nextPrime(104), 107);
    EXPECT_EQ(nextPrime(105), 107);
    EXPECT_EQ(nextPrime(106), 107);
    EXPECT_EQ(nextPrime(107), 109);
    EXPECT_EQ(nextPrime(108), 109);
    EXPECT_EQ(nextPrime(109), 113);
    EXPECT_EQ(nextPrime(110), 113);
    EXPECT_EQ(nextPrime(111), 113);
    EXPECT_EQ(nextPrime(112), 113);
}

TEST(NextPrimeTest, HandlesVeryLargeNumbers) {
    EXPECT_EQ(nextPrime(997), 1009);
    EXPECT_EQ(nextPrime(1000), 1009);
    EXPECT_EQ(nextPrime(1009), 1013);
    EXPECT_EQ(nextPrime(1013), 1019);
    EXPECT_EQ(nextPrime(7919), 7927);
    EXPECT_EQ(nextPrime(7920), 7927);
    EXPECT_EQ(nextPrime(104729), 104743);
    EXPECT_EQ(nextPrime(104730), 104743);
}

// sumPrime
TEST(SumPrimeTest, HandlesSmallBounds) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(4), 5);
    EXPECT_EQ(sumPrime(5), 5);
    EXPECT_EQ(sumPrime(6), 10);
    EXPECT_EQ(sumPrime(7), 10);
    EXPECT_EQ(sumPrime(8), 17);
    EXPECT_EQ(sumPrime(9), 17);
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, HandlesMediumBounds) {
    EXPECT_EQ(sumPrime(20), 77);  
    EXPECT_EQ(sumPrime(30), 129);  
    EXPECT_EQ(sumPrime(40), 197);  
    EXPECT_EQ(sumPrime(50), 328);
}

TEST(SumPrimeTest, HandlesLargeBounds) {
    EXPECT_EQ(sumPrime(100), 1060);
    EXPECT_EQ(sumPrime(200), 4227);
    EXPECT_EQ(sumPrime(500), 21536);
    EXPECT_EQ(sumPrime(1000), 76127);
}

TEST(SumPrimeTest, HandlesVeryLargeBounds) {
    EXPECT_EQ(sumPrime(2000000), 142913828922ULL);
    EXPECT_EQ(sumPrime(10000), 5736396);
}

TEST(SumPrimeTest, HandlesBoundaryCases) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
}
