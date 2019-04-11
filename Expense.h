#ifndef EXPENSE_H
#define EXPENSE_H 1

enum Type {
    DINNER,
    BREAKFAST,
    CAR_RENTAL
};

struct Expense {
    enum Type type;
    int amount;
};

#endif
