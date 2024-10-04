// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Update the grammar in parse.h
// Add new functions in parse.cpp to parse the new expression types

// Modify expression.h
class Expression {
public:
    virtual double evaluate() = 0;
    virtual ~Expression() {}  // Add a virtual destructor for proper cleanup
};

// Modify subexpression.h
class SubExpression : public Expression {
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse(stringstream& in);

protected:
    Expression* left;
    Expression* right;
};

// Modify SubExpression.cpp
Expression* SubExpression::parse(stringstream& in) {
    // Update the parsing logic to handle new expression types
}

// Create new classes for unary, binary, ternary, and quaternary expressions

// Modify operand.h
class Operand : public Expression {
public:
    static Expression* parse(stringstream& in);
};

// Modify operand.cpp
Expression* Operand::parse(stringstream& in) {
    // Update parsing logic to handle new operand types
}

// Modify plus.h and minus.h (similarly, create classes for other operators)
class Plus : public SubExpression {
public:
    Plus(Expression* left, Expression* right) : SubExpression(left, right) {}
    double evaluate() override { return left->evaluate() + right->evaluate(); }
};