# minitalk Projesi Anlatımı

Bu proje, iki ayrı süreç arasında sinyaller kullanarak iletişim kurmayı amaçlar. Bu projede, bir istemci (client) süreç, bir sunucu (server) süreçle metin iletişimi sağlar.

## Proje Açıklaması

- "minitalk" projesi, istemci ve sunucu olarak iki farklı süreç arasında sinyal kullanarak metin iletişimini uygular.
- İstemci, sunucuya metin gönderirken sunucu bu metni alır ve ekrana yazar.
- Projede `signal` fonksiyonları kullanılarak sinyal iletişimi sağlanır.

## Ayağa Kaldırma Adımları

1. Öncelikle projenin kaynak kodlarını indirin.

2. İndirdiğiniz kaynak kodlarını bir dizine çıkarın.

3. Terminale gidin ve projenin ana dizinine gidin:

    ```bash
    cd /path/to/minitalk
    ```

4. Projeyi derlemek için aşağıdaki komutları kullanabilirsiniz:

    ```bash
    make
    ```

    Bu komut, projeyi derleyecek ve "client" ve "server" adlı iki yürütülebilir dosya oluşturacaktır.

5. İlk olarak sunucu programını başlatın:

    ```bash
    ./server
    ```

6. Ardından istemci programını başlatın (farklı bir terminal penceresinde):

    ```bash
    ./client PID "Hello, world!"
    ```

    `PID` yerine sunucu programının PID'sini ve mesaj olarak iletilmek istenen metni yazın.

7. Projeyi temizlemek için aşağıdaki komutu kullanabilirsiniz:

    ```bash
    make clean
    ```

    Bu komut, derleme sırasında oluşturulan geçici dosyaları temizler.

8. Projeyi sıfırlamak için aşağıdaki komutu kullanabilirsiniz:

    ```bash
    make fclean
    ```

    Bu komut, derleme sonrası oluşan dosyaları siler.

Bu adımları izleyerek "minitalk" projesini derleyebilir ve çalıştırabilirsiniz.
