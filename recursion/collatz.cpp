#include <iostream>

/*Conjectura Collatz
"Para todo inteiro positivo n, a sequência obtida pela iteração Cn eventaualmente atinge 1"
Cn = { (n/2) se n=2k, KϵZ ou (3n + 1) se n=2K +1, KϵZ }
*/

int collatz(int n) {
    if (n%2==0) {
        n = n/2;
    } else {
        n = 3*n + 1;
    }
    return n;
}

int main() {
    int number;
    int steps = 0;
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> number;
    while (number!=1)
    {
        std::cout << number << " -> ";
        number = collatz(number);
        steps = steps + 1;
    }
    std::cout << 1 << '\n';
    std::cout << "Steps at the end: " << steps;

    return 0;
    
}
