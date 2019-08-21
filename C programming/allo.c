#include <stdio.h>

struct twoMembers { // This defines the structure but NOT a variable of this type of structure
    int a;
    int b;
};

void incrementMembers(struct twoMembers tm, int offset) {
    // tm is local to this function and is a copy of the argument
    // any change on its members does not affect the members of the argument
    tm.a += offset;
    tm.b += offset;
}

void incrementMembersPtr(struct twoMembers *tmPtr, int offset) {
    tmPtr->a += offset;
    tmPtr->b += offset;
}

int main(void) {
    struct twoMembers two; // This variable is local to main() and not recognized by the other functions
    two.a=1;
    two.b=2;
    printf("Before first call: a=%d, b=%d\n", two.a, two.b);
    incrementMembers(two, 10);
    printf("After first call: a=%d, b=%d\n", two.a, two.b);
    incrementMembersPtr(&two, 10);
    printf("After second call: a=%d, b=%d\n", two.a, two.b);
    return 0;
}
/**
*ddsd
*/
