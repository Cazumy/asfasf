#pragma once
#include "Super_Fridge.h"
#include "Confectionery_case.h"
template <typename T>
class Stack {
private:
    struct Node {
        T object;       // данные элемента стека
        Node* next;     // указатель на следующий элемент стека
    };
    Node* top; int size;       // указатель на вершину стека, и переменная отвечающая за размер стека
public:
    Stack() : top(nullptr), size(0) {}      // конструктор по умолчанию, top = 0, значит что стек изначально пустой (size = 0)
    ~Stack() {
        while (top) { pop(); }
    }

    void push(T data);
    T pop();
    void Sdisplay() const;
    void sortS(Stack& S);
    void findPrice() const;
    bool isEmpty()const;
};
