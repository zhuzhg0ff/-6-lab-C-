#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"
#include "UnorderedUniqueList.h"
#include <iostream>
#include <string>

void task3();
void task4();
void olympiad();

int main() {
    int choice;

    while (true) {
        std::cout << "Выберите задачу (1-5) или 0 для выхода:\n";
        std::cout << "1. Задание 1: Однонаправленный список\n";
        std::cout << "2. Задание 2: Двунаправленный список\n";
        std::cout << "3. Задание 3: Прочитанные книги\n";
        std::cout << "4. Задание 4: Символы из файла\n";
        std::cout << "5. Задание 5: Олимпиада\n";
        std::cout << "0. Выход\n";
        std::cout << "Введите ваш выбор: ";
        std::cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1: {
                SinglyLinkedList<int> list;
                list.add(1);
                list.add(2);
                list.add(3);
                list.add(4);
                list.print();
                list.insertAfterFirst(2);
                list.print();
                break;
            }
            case 2: {
                DoublyLinkedList<int> list;
                list.addFirst(1);
                list.addLast(2);
                list.print();
                break;
            }
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 5:
                olympiad();
                break;
            default:
                std::cout << "Неверный выбор!" << std::endl;
        }
    }

    return 0;
}
