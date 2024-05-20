#include <cstdlib> 
#include <iostream> 
#include <time.h>

using namespace std;



int main()
{


    int min, max, n, random, size, temp,numsBetween;

    size = 1;

    cout << "En kucuk sayiyi giriniz : ";

    cin >> min;

    cout << "En buyuk sayiyi giriniz : ";

    cin >> max;

    cout << "Kac tane sayi olusturmak istersiniz : ";

    cin >> n;

    numsBetween = max - min + 1;

    srand(time(NULL));

    if (numsBetween < n) { // max ve min arasındaki sayı miktarı istediğimiz sayı miktarından az ise tekrar edebilir sayılar üret


        for (int i = 0; i < n; i++) {

            random = min + rand() % numsBetween;

            cout << random << endl;

        }

    }
    else {

        int* repeat = new int[size];
    
        for (int i = 0; i < size; i++)
        {
            repeat[i] = -1;
        }

        for (int i = 0; i < n; i++) {

            random = min + rand() % numsBetween;

            for (int j = 0; j < size;j++) {

                if (random == repeat[j]) {
                    n++;
                    break;
                }
                    
                else if ( (j == (size-1)) || (size == 1) ) {

                    repeat[size - 1] = random;

                    cout << random << endl;

                    size++;
                    break;
                }
            }
        }

    }


    return 0;
}