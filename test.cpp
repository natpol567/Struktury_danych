//
// Created by natal on 19.04.2024.
//

#include "test.h"
#include <iostream>
#include <chrono>
#include <cstdlib>

void test_insert(PriorityQueue& pq, int elements) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < elements; i++) {
        pq.insert(rand() % 10000, i);  // Dodawanie elementów z losowym priorytetem
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Dodanie " << elements << " elementow zajelo: " << elapsed.count() << " s." << std::endl;
}

void test_extract(PriorityQueue& pq, int elements) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < elements && pq.getSize() > 0; i++) {
        pq.extractMax();  // Usuwanie elementów zaczynając od najwyższego priorytetu
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Usuwanie " << elements << " elementow zajelo: " << elapsed.count() << " s." << std::endl;
}