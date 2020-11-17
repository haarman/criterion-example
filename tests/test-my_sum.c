#include <criterion/criterion.h>

#include "../src/my_sum.h"

Test(TestMySum, Test_MySumBasic) {
    cr_expect_eq( my_sum(5,5), 10); 
    cr_expect_eq( my_sum(4,5), 9);
}