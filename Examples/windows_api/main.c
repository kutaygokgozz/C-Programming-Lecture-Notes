#include <windows.h> // Windows API fonksiyonlari icin gerekli ana kutuphane
#include <stdio.h>

// --- Fareyi belirli bir konuma tasiyan ve sol tiklayan fonksiyon ---
void moveAndClickMouse(int x, int y) {
    // 1. Fare imlecini belirtilen (x, y) koordinatlarina aninda tasi.
    // Bu fonksiyon dogrudan fare pozisyonunu ayarlar, SendInput kullanmaz.
    SetCursorPos(x, y);

    // 2. Fare tiklama olaylarini olusturmak icin INPUT yapi dizisini hazirla.
    // Bir tiklama, aslinda iki olaydan olusur: fare tusuna bas ve fare tusundan cek
    INPUT input[2];

    // --- ilk INPUT yapisi: Sol fare tusu basma olayi ---
    input[0].type = INPUT_MOUSE; // Bu bir fare olayidir.
    input[0].mi.dx = 0;          // dx ve dy burada kullanilmaz cunku SetCursorPos zaten pozisyonu ayarladi.
    input[0].mi.dy = 0;
    // MOUSEEVENTF_LEFTDOWN: Sol fare tusuna basildigini simule eden bayrak.
    input[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    input[0].mi.time = 0;        // Zaman damgasi, 0 ise sistem otomatik atar.
    input[0].mi.dwExtraInfo = 0; // Ek bilgi, genellikle 0.

    // --- ikinci INPUT yapisi: Sol fare tusu cekme (release) olayi ---
    input[1].type = INPUT_MOUSE; // Bu da bir fare olayidir.
    input[1].mi.dx = 0;
    input[1].mi.dy = 0;
    // MOUSEEVENTF_LEFTUP: Sol fare tusunun serbest birakildigini simule eden bayrak.
    input[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
    input[1].mi.time = 0;
    input[1].mi.dwExtraInfo = 0;

    // 3. Olusturulan fare olaylarini isletim sistemine gonder.
    // ilk parametre gonderilecek olay sayisi (burada 2: down ve up).
    // ikinci parametre INPUT yapi dizisinin baslangic adresi.
    // ikinci parametre bir INPUT yapisinin boyutu (sizeof(INPUT)).
    SendInput(2, input, sizeof(INPUT));

    // Konsola bilgilendirme mesaji yazdir.
    printf("Fare (%d, %d) konumuna hareket ettirildi ve sol tik yapildi.\n", x, y);
}

// --- Belirli bir klavye tusuna basan fonksiyon ---
void pressKey(WORD virtualKey) {
    // Klavye tus basimi olaylarini olusturmak icin INPUT yapi dizisini hazirla.
    // Bir tus basimi da iki olaydan olusur: tus asagi (press) ve tus yukari(release)
       INPUT input[2];

    // --- ilk INPUT yapisi: Tusa basma olayi ---
    input[0].type = INPUT_KEYBOARD; // Bu bir klavye olayidir.
    // wVk: Sanal Tus Kodu (word Virtual Key Code). Hangi tusa basilacagini belirtir.
    // ornegin, 'A' tusu icin 0x41.
    input[0].ki.wVk = virtualKey;
    input[0].ki.dwFlags = 0; // 0: Tusa basildigini (press) (key down) belirtir.
    input[0].ki.time = 0;
    input[0].ki.dwExtraInfo = 0;

    // --- ikinci INPUT yapisi: Tus yukari(release) olayi ---
    input[1].type = INPUT_KEYBOARD; // Bu da bir klavye olayidir.
    input[1].ki.wVk = virtualKey;
    // KEYEVENTF_KEYUP: Tusun serbest birakildigini (release)(key up) belirtir.
    input[1].ki.dwFlags = KEYEVENTF_KEYUP;
    input[1].ki.time = 0;
    input[1].ki.dwExtraInfo = 0;

    // 3. Olusturulan klavye olaylarini isletim sistemine gonder.
    SendInput(2, input, sizeof(INPUT));

    // Konsola bilgilendirme mesaji yazdir.
    printf("Klavye tusuna basildi (Virtual Key: %d).\n", virtualKey);
}


int main() {
    printf("Program baslatildi. 5 saniye sonra...\n");

    Sleep(5000);


    printf("2 saniye sonra muzik geliyor...\n");

    Sleep(2000);

    moveAndClickMouse(987,837);
    Sleep(3000);
    moveAndClickMouse(137,93);

    Sleep(3000);
    moveAndClickMouse(608,148);
    Sleep(2000);
    char song[]={"YALNIZSIN VE BU IYI BISEY"};  // ascii ile çalışmıyor virtual key code ile çalışıyor büyük harfleri yazarsan ascii ile dogru denk gelmis olur ve dogru calisir.
    int i;
    for(i=0;i<strlen(song);i++)
    {
        pressKey(song[i]);

    }
    pressKey(13);

    Sleep(1000);

    Sleep(1000);   //sleep yazmamalisin Sleep yazmalisin S harfi buyuk yazilmali yani sleep baska bisey.
    moveAndClickMouse(547,337);
    printf("Program bitti.\n");

    Sleep(5000);

    return 0;
}

