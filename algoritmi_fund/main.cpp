#include <iostream>
#include <cmath>

using namespace std;

//Divizibilitatea

void diviz(int a, int b){

    if(a % b == 0 || b % a == 0) {
        cout << "Da\n";
    }else{
        cout << "Nu\n";
    }

}

//Paritate

string parit(int a){
    if(a % 2 == 0){
        return "par";
    }else{
        return "impar";
    }
}

//Divizorii unui numar

int* divizor_nr(int a){
    int index = 0;
    static int b[100];
    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            b[index] = i;
            index++;
        }
    }

    return (b);
}

//Divizorii proprii

int* divizor_prop(int a){
    int index = 0;
    static int b[100];
    for(int i = 2; i <= a/2; i++){
        if(a % i == 0){
            b[index] = i;
            index++;
        }
    }

    return (b);
}

//Primalitatea unui numar

string prim_num(int a){
    int status = 0;
    if(a == 1){
        status = 1;
    }else{
        for(int i = 2; i <= a/2; i++){
            if(a % i == 0){
                status = 1;
                break;
            }
        }
    }

   return status ? "neprim" : "prim";
}

//Descompunerea in factori primi

void fact_prim(int a){
    int d = 2, p;
    while(a > 1){
        p = 0;
        while(a % d == 0){
            p++;
            a /= d;
        }
        if(p != 0){
            cout << d << "^" << p << ", ";
        }
        d++;
    }
}

//Cel mai mare divizor comun intre 2 numere întregi

int biggest_div(int a, int b){
    int r = a % b;
    while(r != 0){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

//Numere perfecte

void perfect_num(int n){
    int s;
    for(int i = 1; i < n; i++){
        s = 0;
        for(int d = 1; d <= i/2; d++){
            if(i % d == 0){
               s += d;
            }
        }
        if(s == i){
            cout << i << " este numar perfect\n";

        }

    }
}

//Numere prietene

void friend_nums(int a, int b){
    int sa = 0, sb = 0;

    for(int i = 2; i <= a/2; i++){
        if(a % i == 0){
           sa += i;
        }
    }

    for(int i = 2; i <= b/2; i++){
        if(b % i == 0){
           sb += i;
        }
    }

    if(sa == b && sb == a){
        cout << a << " si " << b << " sunt numere prietene.\n";
        cout << sa << ", " << sb;
    }else{
        cout << a << " si " << b << " nu sunt numere prietene.\n";
        cout << sa << ", " << sb;
    }

}

//Factorial

int fact(int n){
   int p = 1;
   for(int i = 1; i <= n; i++){
       p *= i;
   }
   return p;
}

//Sirul lui Fibonacci

int fibo(int n){
    int f1 = 1, f2 = 2, f3;
    if(n < 3){
        return 1;
    }else{
        for(int i = 3; i < n; i++){
            f3 = f2 + f1;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
}

// Numarul invers
int invers_num(int a){
    int inv = 0;
    while(a != 0){
        inv = inv * 10 + a % 10;
        a = a / 10;
    }
    return inv;
}

// Numarul palindrom

void is_palindrom(int a){
    int inv = 0, rep = a;
    while(a != 0){
        inv = inv * 10 + a % 10;
        a = a / 10;
    }

    if(rep == inv){
        cout << rep << " este palindrom.\n";
    }else{
        cout << rep << " nu este palindrom.\n";
    }

}

// Maximul intr-un sir

void max_num(int n, int x){
    int max = x;
    for(int i = 2; i <= n; i++){
        cout << "Introduceti numar.\n";
        cin >> x;
        if(x > max){
            max = x;
        }
    }
    cout << "Cel mai mare numar introdus este " << max << endl;
}


int main()
{
    //1.Divizibiltate
    /*int num1, num2;
    cout << "Introduceti doua numere intregi\n";
    cin >> num1 >> num2;
    cout << num1 << " si " << num2 << " sunt divizibile?\n";
    diviz(num1, num2);*/

    //2.Paritate
    /*int num1;
    cout << "Introduceti un numar intreg\n";
    cin >> num1;
    cout << num1 << " este numar " << parit(num1) << endl;*/

    //3.Divizorii unui numar
    /*int num, i = 0;
    int *d;
    cout << "Introduceti un numar intreg\n";
    cin >> num;
    d = divizor_nr(num);
    cout << "Numerele divizibile cu " << num  << " sunt: ";
    while(d[i] != NULL){
        cout << d[i] << "\t";
        i++;
    }
    }*/

    //4.Divizorii proprii
   /* int num, i = 0;
    int *d;
    cout << "Introduceti un numar intreg\n";
    cin >> num;
    d = divizor_prop(num);
    cout << "Divizorii proprii lui "  << num  << " sunt: ";
    while(d[i] != NULL){
        cout << d[i] << "\t";
        i++;
    }
    if(*d == NULL){
        cout << "Numarul nu are divizori proprii\n";
    }*/

    //5. Primalitatea unui numar
   /* int num;
    cout << "Introduceti un numar intreg\n";
    cin >> num;
    cout << "Numarul introdus este " << prim_num(num) << endl;
   */

    //6. Descompunerea în factori primi ai unui număr
    /*int num;
    cout << "Introduceti un numar intreg.\n";
    cin >> num;
    fact_prim(num);*/

    //7. Cel mai mare divizor comun intre 2 numere întregi
    /*int num1, num2;
    cout << "Introduceti doua numere intregi. Primul trebuie sa fie mai mare ca al doilea.\n";
    cin >> num1 >> num2;
    cout << "Cel mai mare divizor commun intre " << num1 << " si " << num2 << " este " << biggest_div(num1, num2) << endl;*/

    //8.Numere perfecte
    /*int num;
    cout << "Introduceti un numar intreg\n";
    cin >> num;
    perfect_num(num);*/

    //9. Numere prietene
    /*int num1, num2;
    cout << "Introduceti doua numere intregi.\n";
    cin >> num1 >> num2;
    friend_nums(num1, num2);*/

    //10 Factorial
    /*int num;
    cout << "Introduceti un numar intreg.\n";
    cin >> num;

    cout << fact(num) << endl;*/

    //11 Sirul lui Fibonnaci
    /*int num;
    cout << "Introduceti un numar intreg.\n";
    cin >> num;
    cout << "Al " << num << "-lea termen din sirul lui Fibonnaci este " << fibo(num) << endl;*/

    //12. Mumarul invers
    /*int num;
    cout << "Introduceti un numar intreg.\n";
    cin >> num;
    cout << "Inversul lui " << num << " este " << invers_num(num) << endl;*/

    //13. Numarul palindrom
    /*int num;
    cout << "Introduceti un numar intreg.\n";
    cin >> num;
    is_palindrom(num);*/

    //14. Maximul intr-un sir de numere
    int num1, num2;
    cout << "Introduceti numarul de numere introduse.\n";
    cin >> num1;
    cout << "Introduceti numar.\n";
    cin >> num2;
    max_num(num1, num2);

    return 0;
}
