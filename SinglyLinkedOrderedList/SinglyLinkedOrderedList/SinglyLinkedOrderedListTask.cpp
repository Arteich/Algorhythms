#include <iostream>
#include "SinglyLinkedOrderedList.h"

void test_remove()
{
    std::cout << "�������� �������� ��������: \n";
    SinglyLinkedOrderedList list;

    list.add(0);
    list.add(0);
    list.add(2);
    list.add(0);
    list.add(8);
    list.add(15);
    list.add(4);
    list.add(25);
    std::cout << "������ �� ��������: " << list;
   std::cout << "������� �����, ������� ����� �������: ";
   int num;
   std::cin >> num;

   bool res = list.remove(num);

   std::cout << "������ ����� ��������: " << list << std::endl;
}

void test_union()
{
    std::cout << "�������� ����������  ��������, �������� ��� � ������ �������: \n";
    SinglyLinkedOrderedList list;
    list.add(1);
    list.add(3);
    list.add(6);
    list.add(4);
    list.add(10);
    std::cout << list;

    SinglyLinkedOrderedList list2;
    list2.add(2);
    list2.add(4);
    list2.add(9);
    list2.add(5);
    list2.add(10);
    std::cout << list2;

    list.union_list(list2);

    std::cout << list << std::endl;;

}

void test_intersect() 
{
    std::cout << "�������� ����������� ��������(��������): \n";
    SinglyLinkedOrderedList list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    list.add(15);
    list.add(4);
    list.add(25);

    std::cout << "������ ������ : "<< list;

    SinglyLinkedOrderedList list2;
    list2.add(2);
    list2.add(4);
    list2.add(3);
    list2.add(1);
    list2.add(10);
    std::cout<< "������ ������: " << list2;

    SinglyLinkedOrderedList list3 = list.intersect(list2);
    std::cout<< "������ ����� ������������: " << list3 << std::endl;;
}

void test_difference() 
{
    std::cout << "�������� �������� ���� ������������� �� ������ �������: \n";
    SinglyLinkedOrderedList list;

    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    list.add(15);
    list.add(4);
    list.add(25);

    std::cout<<"������ ������: " << list;

    SinglyLinkedOrderedList list2;
    list2.add(1);
    list2.add(2);
    list2.add(3);
    list2.add(4);
    list2.add(5);
    list2.add(15);
    list2.add(4);
    list2.add(25);
    std::cout<<"������ ������: " << list2;

    
    list.difference(list2);
    std::cout<<"������ ������ ����� �������� ���������: " << list << std::endl;;

}

int main()
{
    setlocale(LC_ALL, "rus");
    

    test_remove();
    test_union();
    test_intersect();
    test_difference();
    
}
