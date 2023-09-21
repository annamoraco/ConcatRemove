#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "concatremove.cpp"

TEST_CASE("Test when s lenght equal t lenght"){

    string s = "blabla";
    string t = "blabcd";
    int k = 4;

    REQUIRE("Yes" == concatremove(s,t,k));
}
TEST_CASE("Test when s lenght greater than t lenght with spaces - result: No"){

    string s = "bla bla bla bla";
    string t = "blabcd";
    int k = 10;

    REQUIRE("No" == concatremove(s,t,k));
}
TEST_CASE("Test when s lenght greater than t lenght with spaces - result: Yes"){

    string s = "bla bla bla bla";
    string t = "blabcd";
    int k = 15;

    REQUIRE("Yes" == concatremove(s,t,k));
}
TEST_CASE("Test when s lenght greater than t lenght with spaces more comands than necessary - result: Yes"){

    string s = "bla bla bla bla";
    string t = "blabcd";
    int k = 17;

    REQUIRE("Yes" == concatremove(s,t,k));
}