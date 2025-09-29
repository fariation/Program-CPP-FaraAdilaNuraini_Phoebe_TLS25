#include <iostream>
#include <string>
using namespace std;

bool vokal(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o';
}

string balik(string s)
{
    string r = "";
    for (int i = s.size() - 1; i >= 0; i--)
        r += s[i];
    return r;
}

string buatSandi(string kata)
{
    string t = "";
    for (char c : kata)
        if (!vokal(c))
            t += c;
    string b = balik(t);
    int mid = b.size() / 2;
    return b.substr(0, mid) + to_string((int)kata[0]) + b.substr(mid);
}

string ambilKata(string sandi)
{
    string l = "", r = "", a = "";
    int i = 0;
    while (!isdigit(sandi[i]))
        l += sandi[i++];
    while (isdigit(sandi[i]))
        a += sandi[i++];
    while (i < sandi.size())
        r += sandi[i++];
    return (char)stoi(a) + balik(l + r);
}

int main()
{
    int pilih;
    string teks;
    char lagi;
    do
    {
        cout << "Apa yang ingin kamu lakukan? \n1. Buat sandi\n2. Ambil kata\nPilihan: ";
        cin >> pilih;
        cin.ignore();
        cout << "Masukkan kata asli/sandi: ";
        getline(cin, teks);
        cout << (pilih == 1 ? "Sandi: " + buatSandi(teks) : "Kata: " + ambilKata(teks)) << endl;
        cout << "Ulangi? (y/n): ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    cout << "Terima kasih sudah menggunakan program ini!";
    return 0;
}