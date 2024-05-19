#pragma once
#include <iostream>
#include <random>

int static rdfunc(int n) {
    // ���� ������ ���� ����
    std::random_device rd;
    std::mt19937 gen(rd()); // �޸��� Ʈ������ ������ ���
    std::uniform_int_distribution<int> dist(1, n); // 1���� n ������ ������ ����

    return dist(gen);
}