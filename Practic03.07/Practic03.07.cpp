#include <iostream>
#include <cstdarg>

using namespace std;
/*
long Fact(int N) {
    long F = 1;
    for (int i = 2; i <= N; i++) {
        F *= i;
    }
    return F;
}

long Fact2(int N) {
    if (N < 1) return 0;
    else if (N == 1) return 1;
    else return N * Fact2(N - 1);
}

*/

/*
//template <class T>
template <typename T>
void quickSort(T a[], int N) {
    int i = 0, j = N;
    T temp, p;
    p = a[N / 2];// центральный элемент массива
    do {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (j > 0) quickSort(a, j);
    if (N > i) quickSort(a + i, N - i);
}

int BinarySearch(int a[], int Lb, int Ub, int key) {
    int M;
    while (1) {
        M = (Lb + Ub) / 2;
        if (key < a[M])
            Ub = M - 1;
        else if (key > a[M])
            Lb = M + 1;
        else
            return M;
    }
}
*/
/*
int GetMin(int numOfArgs, ...) {
    int minVal;
    va_list va;
    va_start(va, numOfArgs);
    minVal = va_arg(va, int);
    int tempVal = 0;

    for (int i = 0; i < numOfArgs - 1; i++) {
        tempVal = va_arg(va, int);
        if (minVal > tempVal)
            minVal = tempVal;
    }
    va_end(va);
    return minVal;
}

int main()
{
    /*
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    quickSort(arr, SIZE - 1);

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    cout << arr[BinarySearch(arr, 0, SIZE, 56)];
   

    cout << "Minimum is: " << GetMin(5, -35, 54, 1, -3, 0);
}

//void va_start(va_list ap, lastPattern)
//void va_end(va_list ap)
//type va_arg(va_list ap ,type)
*/

/*
Написать рекурсивную функцию нахождения
степени числа.

int SearchPow(int a, int b) {
    if (b == 0) return 1;
    else if (b == 1) return a;
    else return a * SearchPow(a, --b);
}

void main() {
    cout << SearchPow(3, 3);
}
*/
/*
Написать рекурсивную функцию, которая
выводит N звезд в ряд, число N задает пользователь.

void showStar(int N) {
    cout << '*';
    if (N > 1) showStar(--N);
}
void main() {
    int a;
    cin >> a;
    showStar(a);
}
*/
/*
Написать рекурсивную функцию, которая
вычисляет сумму всех чисел в диапазоне от a до b. Поль-
зователь вводит a и b

int sum = 0;
int summa(int a, int b) {
    sum += a;
    if (a < b)
        summa(++a, b);
    else
        return sum;
}

void main() {
    cout << summa(5, 8);
}
*/
/*
Напишите рекурсивную функцию, которая
принимает одномерный массив из 100 целых чисел за-
полненных случайным образом и находит позицию, с ко-
торой начинается последовательность из 10 чисел, сумма
которых минимальна.

int minSum = 10000000;
int index = 0, minIndex = 0;

void indexMin(int arr[], int s) {
    int sum = 0;
    if (index <= s - 10) {
        for (int i = index; i < index + 10; i++) {
            sum += arr[i];
        }
       // cout << sum << " " << index << endl;
        if (sum < minSum) {
            minSum = sum;
            minIndex = index;
        }
        index++;
        indexMin(arr, s);
    }
}

void main() {
    cout << minIndex << endl;
    srand(time(NULL));
    int arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    indexMin(arr, 100);
    cout << minIndex << " " << minSum;
}
*/
/*
Написать перегруженные функции и проте-
стировать их в основной программе:
■ Нахождения максимального значения в одномерном
массиве;
■ Нахождения максимального значения в двумерном
массиве;
■ Нахождения максимального значения в трёхмерном
массиве;
■ Нахождения максимального значения двух целых;
■ Нахождения максимального значения трёх целых.

#define SIZE 5

template <class T>
T MaxNumberToArray(T arr[SIZE]){
    T max = arr[0];
    for (int i = 0; i < SIZE; i++) {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}

template <class T>
T MaxNumberToArray(T arr[SIZE][SIZE]) {
    T max = arr[0][0];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (max < arr[i][j]) max = arr[i][j];
        }
    }
    return max;
}

template <class T>
T MaxNumberToArray(T arr[SIZE][SIZE][SIZE]) {
    T max = arr[0][0][0];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                if (max < arr[i][j][k]) max = arr[i][j][k];
            }
        }
    }
    return max;
}

int MaxNumber(int a, int b){
    return max(a, b);
}
int MaxNumber(int a, int b, int c){
    return max(max(a, b), c);
}*/

/*
int F() {  
    static int a = 0; 
    a++;
    return a;
}

void F2() {
    cout << F() + 2 << endl;
}
void main() {
    cout << F() << endl;
    cout << F() << endl;
    F2();
    cout << F() << endl;
    F2();
}
*/