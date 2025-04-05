#include <stdio.h>

int main() {
    // Define a constant ~ sabit
    const int SaattekiDakikaSayisi = 60;
    const float PI = 3.14;

    printf("%d\n", SaattekiDakikaSayisi);
    printf("%f\n", PI);
    // saattekiDakikaSayisi = 100; // Hata verir
    // PI = 3.14159; // Hata verir
    return 0;
    // C dilinde sabitler genellikle büyük harfle yazılır
    // ve sabit isimleri genellikle _ ile ayrılır.
    // Örnek: MAX_BUFFER_SIZE, MIN_VALUE, DEFAULT_TIMEOUT
}