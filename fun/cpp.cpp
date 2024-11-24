#include <iostream>
#include <chrono>

int main(){
    int c = 1e7;
    int i = 1;
    auto start_time = std::chrono::high_resolution_clock::now();
    for (i = 1; i<=c; i++)
       printf("%d\n", i);
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;
    std::cout << elapsed.count() << " seconds" << std::endl;

    return 0;
}