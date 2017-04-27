int main() {
    int x, y, b;
    if(b) x = 2;
    else x = 3;
    __CPROVER_assert(((x + 100) + (y + 4) > 0 ) || (1 && b), "1");
    __CPROVER_assert(x == x, "2");
    __CPROVER_assert((x > y) ? (x > y) : (x <= y), "3");
    return 0;
}

// 1 ? x : y - ok
// * ? x : x - ok
// * ? (x + 1) * (y + 1) : y * (x + 1) + x + 1
// (x > y) ? (x > y) : (x <= y)

// build smt based simplifier
// create rules for simplifications
// wp_cex - understand and note what to do for implementing summary
// simplify_ssa - understand
