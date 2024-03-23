#pragma once
#include "Super_Fridge.h"
template <typename T>
class Stack {
private:
    struct Node {
        T object;       // ������ �������� �����
        Node* next;     // ��������� �� ��������� ������� �����
    };
    Node* top; int size;       // ��������� �� ������� �����, � ���������� ���������� �� ������ �����
public:
    Stack() : top(nullptr), size(0) {}      // ����������� �� ���������, top = 0, ������ ��� ���� ���������� ������ (size = 0)
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