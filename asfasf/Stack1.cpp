#include "Stack.h"

template <typename T>
void Stack<T>::push(T data) {
    size++;
    Node* tmp = new Node;
    tmp->next = top;
    top = tmp;    // обновление указателя top 
    top->object = data; // присвоение значения object
}

template <typename T>
T Stack<T>::pop() {
    if (top != nullptr) {       // если стек не пустой
        size--;
        Node* tmpNode = top;        // временная переменная хранящая значение top 
        top = top->next;        // обновление указателя top стека
        T tmpFridge = tmpNode->object;
        return tmpFridge;       // возвращение объекта, после удаления
    }
    else {
        return nullptr;
    }
}
template <typename T>
void Stack<T>::Sdisplay() const{
    Node* current = top;
    while (current) {           // до тех пор пока есть элементы в стеке
        current->object->display();     // вывод текущего объекта в консоль
        std::cout << std::endl;
        current = current->next;        // переход к следующему элементу стека
    }
    std::cout << std::endl;
}

template <typename T>
void Stack<T>::sortS(Stack& S) {
    Node* fTop = S.top;
    bool breakSort;
    size <= 1 ? breakSort = true : breakSort = false;   // если стек содержит 0 или 1 элемент, то он уже отсортирован
    while (!breakSort) {
        for (int i = 0; i < size; i++) {       // цикл проходит по всем элементам стека
            breakSort = true;               // если после прохода по всем элементам не выполнилось условие, то выход из цикла
            if (fTop != nullptr && fTop->next != nullptr) {     // если существует текущий и следующий элемент
                if (*fTop->object > *fTop->next->object) {      // перегрузка оператора сравнения
                    std::swap(fTop->object, fTop->next->object);        // если цена текущего элемента больше следующего, то они свапаются
                    breakSort = false;                  // элементы свапнуты - стек не отсортирован, требуется пройтись по всем элементам заново
                    i = size - 1;                   // после свапа элементов нужен перезапуск цикла
                }
                fTop = fTop->next;      // указатель на новый элемент стека
            }
            else { fTop = top; }        // если текущий или следующий элемент стека не существует, а стек всё еще не отсортирован, то заново с верхнего элемента
        }
    }
}

template <typename T>
void Stack<T>::findPrice() const {
    Node* tempTop = top;
    double price;
    std::cout << "Введите сумму для поиска: "; std::cin >> price;
    for (int i = 0; i < size; i++) {        // цикл проходит по всем элементам стека
        if (tempTop != nullptr && *tempTop->object == price) {
            std::cout << *tempTop->object; // вывод в консоль объекта, который подошел по условию
        }
        tempTop = tempTop->next;            // обновление указателя на следующий элемент стека
    }
}
template <typename T>
bool Stack<T>::isEmpty()const {
    return top == nullptr;
}