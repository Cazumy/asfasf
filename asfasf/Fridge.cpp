#include "Stack1.cpp"
#include "Statistics.h"
#include "Confectionery_case.h"
int Fridge::count_of_Fridge = 0;

int main() {
    setlocale(LC_ALL, "ru");
    Fridge F; F.set();  // объект класса Fridge
    Confectionery_case C; C.set();  // объект класса Confectionery_case
    Split_system S; S.set();    // объект класса Split_system
    Refrigeration_table R; R.set(); // объект класса Refrigeration_table
    Super_Fridge SF; SF.set();  // объект класса Super_Fridge
 
    Stack<Class_Interface*> stack; // класс контейнер
    stack.push(&F); stack.push(&C); stack.push(&S); stack.push(&R); stack.push(&SF);
    stack.Sdisplay();   // вывод лементов класс контейнера

    Statistics <Class_Interface> st;
    try {
        st.set_current_FromСС(stack);      // все объекты из класса контейнера заносятся в статистику
        st.set_current_Object(&F, 10);      // объект F заносится в количестве 10 штук
        st.add_current_Object(&R);      // количество объектов R в статистике увеличивается на 1
    }
    catch (std::exception& a) { std::cout <<"Exception" << a.what(); }
    catch (std::out_of_range& a) { std::cout << "out_of_range - " << a.what();}
    catch (std::runtime_error& a) { std::cout << "runtime_error - " << a.what(); }
    catch (...) { std::cout << "Default\n"; }

    st.display_Statistics();        
}