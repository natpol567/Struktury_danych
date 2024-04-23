//
// Created by natal on 19.04.2024.
//

#include <iostream>
#include "kolejka_priorytetowa.h"
#include "test.h"

int main() {
    PriorityQueue pq;

//    // Dodawanie elementów do kolejki priorytetowej
//    pq.insert(15, 101);  // Priorytet 15, dane 101
//    pq.insert(10, 102);  // Priorytet 10, dane 102
//    pq.insert(20, 103);  // Priorytet 20, dane 103
//    pq.insert(5, 104);   // Priorytet 5, dane 104

//    // Wyświetlenie elementu z najwyższym priorytetem
//    std::cout << "Element o najwyzszym priorytecie: Priorytet " << pq.peek().priority << ", Dane: " << pq.peek().data << std::endl;
//
//    // Wyświetlanie aktualnego rozmiaru kolejki
//    std::cout << "Aktualny rozmiar kolejki: " << pq.getSize() << std::endl;
//
//    // Modyfikacja priorytetu elementu
//    std::cout << "Modyfikacja priorytetu danych 102 z 10 na 25." << std::endl;
//    pq.modifyKey(102, 25);  // Zmiana priorytetu danych 102 z 10 na 25
//
//    // Wyświetlenie nowego elementu z najwyższym priorytetem
//    std::cout << "Nowy element o najwyzszym priorytecie: Priorytet " << pq.peek().priority << ", Dane: " << pq.peek().data << std::endl;
//
//    // Usunięcie elementu z najwyższym priorytetem
//    HeapElement max = pq.extractMax();
//    std::cout << "Usuniety element o najwyzszym priorytecie: Priorytet " << max.priority << ", Dane: " << max.data << std::endl;
//
//    // Wyświetlanie rozmiaru kolejki po usunięciu
//    std::cout << "Rozmiar kolejki po usunieciu elementu: " << pq.getSize() << std::endl;

    // Przeprowadzenie testów wydajności
    std::cout << "\nRozpoczynanie testow wydajnosciowych..." << std::endl;
    test_insert(pq, 1000);  // Test dodawania 1000 elementów
//    test_insert(pq, 10000);
//    test_insert(pq, 100000);
//    test_insert(pq, 1000000);
//
//    test_extract(pq, 1000);
//    test_extract(pq, 10000);
//    test_extract(pq, 100000);
    //test_extract(pq, 1000000);
    std::cout<<"Rozmiar kolejki: "<<pq.getSize()<<std::endl;
    std::cout<<"Najwyzszy priorytet: "<<pq.peek()<<std::endl;
    std::cout<<"Zmiana priortyteu 9976 na 9 o wartosci 300"<<std::endl;
    pq.modifyKey(300,9  );
    std::cout<<pq.peek()<<std::endl;



    return 0;
}
