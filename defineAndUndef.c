#include <stdio.h>

#define MAX_BUFFER_SIZE 1024
#define MIN_VALUE 0
#define DEFAULT_TIMEOUT 30

int main() {
    // Define a constant
    const int SaattekiDakikaSayisi = 60;
    const float PI = 3.14;

    printf("%d\n", SaattekiDakikaSayisi);
    printf("%f\n", PI);

    // saattekiDakikaSayisi = 100; // Hata verir
    // PI = 3.14159; // Hata verir

    printf("MAX_BUFFER_SIZE: %d\n", MAX_BUFFER_SIZE);
    printf("MIN_VALUE: %d\n", MIN_VALUE);
    printf("DEFAULT_TIMEOUT: %d\n", DEFAULT_TIMEOUT);

    return 0;
    // C dilinde sabitler genellikle büyük harfle yazılır
    // ve sabit isimleri genellikle _ ile ayrılır. 
    #undef MAX_BUFFER_SIZE
    #undef MIN_VALUE
    #undef DEFAULT_TIMEOUT
    // Örnek: MAX_BUFFER_SIZE, MIN_VALUE, DEFAULT_TIMEOUT
    // #define ile tanımlanan sabitler, derleme zamanında
    // sabit değerler olarak kullanılır ve programın
    // çalışması sırasında değiştirilemezler.
    // #undef ile tanımlanan sabitler, derleme zamanında
    // kaldırılır ve programın çalışması sırasında
    #define ile tanımlanan sabitler
    // kullanılabilir hale gelir.
    // #undef ile tanımlanan sabitler, derleme zamanında
    // kaldırılır ve programın çalışması sırasında
    // kullanılabilir hale gelir.
    // #undef ile tanımlanan sabitler, derleme zamanında
    // kaldırılır ve programın çalışması sırasında
    // kullanılabilir hale gelir.
}