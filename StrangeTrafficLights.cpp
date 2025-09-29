#include <iostream>
using namespace std;

int main()
{
    int detik, warna;
    char repeat;

    do
    {
        cout << "Detik ke-";
        cin >> detik;

        warna = (detik - 25) % 103;

        if (warna >= 0 && warna <= 19)
        {
            cout << "Warna Lampu: Hijau";
        }
        else if (warna >= 20 && warna <= 22)
        {
            cout << "Warna Lampu: Kuning";
        }
        else
        {
            cout << "Warna Lampu: Merah";
        }
        cout << "\nIngin mengecek warna lagi? (y/n):";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Program selesai.\n";
    return 0;
}
