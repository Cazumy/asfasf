#include "Stack.h"

template <typename T>
void Stack<T>::push(T data) {
    size++;
    Node* tmp = new Node;
    tmp->next = top;
    top = tmp;    // ���������� ��������� top 
    top->object = data; // ���������� �������� object
}

template <typename T>
T Stack<T>::pop() {
    if (top != nullptr) {       // ���� ���� �� ������
        size--;
        Node* tmpNode = top;        // ��������� ���������� �������� �������� top 
        top = top->next;        // ���������� ��������� top �����
        T tmpFridge = tmpNode->object;
        return tmpFridge;       // ����������� �������, ����� ��������
    }
    else {
        return nullptr;
    }
}
template <typename T>
void Stack<T>::Sdisplay() const{
    Node* current = top;
    while (current) {           // �� ��� ��� ���� ���� �������� � �����
        current->object->display();     // ����� �������� ������� � �������
        std::cout << std::endl;
        current = current->next;        // ������� � ���������� �������� �����
    }
    std::cout << std::endl;
}

template <typename T>
void Stack<T>::sortS(Stack& S) {
    Node* fTop = S.top;
    bool breakSort;
    size <= 1 ? breakSort = true : breakSort = false;   // ���� ���� �������� 0 ��� 1 �������, �� �� ��� ������������
    while (!breakSort) {
        for (int i = 0; i < size; i++) {       // ���� �������� �� ���� ��������� �����
            breakSort = true;               // ���� ����� ������� �� ���� ��������� �� ����������� �������, �� ����� �� �����
            if (fTop != nullptr && fTop->next != nullptr) {     // ���� ���������� ������� � ��������� �������
                if (*fTop->object > *fTop->next->object) {      // ���������� ��������� ���������
                    std::swap(fTop->object, fTop->next->object);        // ���� ���� �������� �������� ������ ����������, �� ��� ���������
                    breakSort = false;                  // �������� �������� - ���� �� ������������, ��������� �������� �� ���� ��������� ������
                    i = size - 1;                   // ����� ����� ��������� ����� ���������� �����
                }
                fTop = fTop->next;      // ��������� �� ����� ������� �����
            }
            else { fTop = top; }        // ���� ������� ��� ��������� ������� ����� �� ����������, � ���� �� ��� �� ������������, �� ������ � �������� ��������
        }
    }
}

template <typename T>
void Stack<T>::findPrice() const {
    Node* tempTop = top;
    double price;
    std::cout << "������� ����� ��� ������: "; std::cin >> price;
    for (int i = 0; i < size; i++) {        // ���� �������� �� ���� ��������� �����
        if (tempTop != nullptr && *tempTop->object == price) {
            std::cout << *tempTop->object; // ����� � ������� �������, ������� ������� �� �������
        }
        tempTop = tempTop->next;            // ���������� ��������� �� ��������� ������� �����
    }
}
template <typename T>
bool Stack<T>::isEmpty()const {
    return top == nullptr;
}