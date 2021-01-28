#include <cstdlib>
#include <iostream>
#include<ctime>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stack>
#define RANGE 255
#define N 8

using namespace std;

//variables para la cola
int lista[10];
int frente=0, cola=0;
int tamanio=sizeof(lista)/sizeof(*lista);

void menu();
void insertion_sort();
void insertion_sort_proceso(int A[], int length);
void busqueda_binaria();
int binarySearch(int arr[], int l, int r, int x);
void busqueda_lineal();
int busquedaLineal_algoritmo(int arr[], int n, int x);
void fibonacci();
int fibonacci_algoritmmo(int n);
void factorial();
int factorial_algoritmo(int n);
void mergeSort();
void mergeSort_algoritmo(int arr[],int l,int r);
void mershe(int arr[], int l, int m, int r);
void heapSort();
void heapSort_algoritmo(int arr[], int n);
void heapify(int arr[], int n, int i);
void counting_Sort();
void counting_Sort_algoritmo(char arr[]);
void quick_sort();
void quick_sort_algoritmo(int arr[], int low, int high);
int partition (int arr[], int low, int high);
void swap(int* a, int* b);
int partition_random(int arr[], int low, int high);
void randomized_quickSort_algoritmo(int arr[], int low, int high);
void rQuicksort();
void radixSort();
void radixSort_algoritmo(int arr[], int n);
int getMax(int arr[], int n);
void countSort(int arr[], int n, int exp);
void subset_sum();
bool isSubsetSum(int set[], int n, int sum);
void nReinas();
bool solveNQ();
bool Resuelve(int tablero[N][N], int col);
void Solucion(int tablero[N][N]);
bool Segura(int tablero[N][N], int row, int col);
void pila();
void createStack(stack <int> mystack);
void queue();
void enqueue(int valor);
int dequeue();
int Back();
int Front();
bool Empty();
int Size();

int main(){
    menu();
    return 0;
}
void menu(){
    int num;
    do{
        cout<<"Ingrese un numero del algoritmo que desea ver"<<endl;
        cout<<"1.- Insertion Sort"<<endl;
        cout<<"2.- Busqueda Binaria"<<endl;
        cout<<"3.- Busqueda Lineal"<<endl;
        cout<<"4.- Fibonacci"<<endl;
        cout<<"5.- Factorial"<<endl;
        cout<<"6.- Merge Sort"<<endl;
        cout<<"7.- Heap Sort"<<endl;
        cout<<"8.- Counting Sort"<<endl;
        cout<<"9.- Quick Sort"<<endl;
        cout<<"10.- Randomized Sort"<<endl;
        cout<<"11.- Radix Sort"<<endl;
        cout<<"12.- Subset Sum"<<endl;
        cout<<"13.- N-Reinas"<<endl;
        cout<<"14.- Stack (pila)"<<endl;
        cout<<"15.- Queue (cola)"<<endl;
        cout<<endl<<"0.- Salir"<<endl;

        cin>>num;
        switch(num){
        case 0:
            system("cls");
            break;
        case 1:
            insertion_sort();
            system("cls");
            break;
        case 2:
            busqueda_binaria();
            system("cls");
            break;
        case 3:
            busqueda_lineal();
            system("cls");
            break;
        case 4:
            fibonacci();
            system("cls");
            break;
        case 5:
            factorial();
            system("cls");
            break;
        case 6:
            mergeSort();
            system("cls");
            break;
        case 7:
            heapSort();
            system("cls");
            break;
        case 8:
            counting_Sort();
            system("cls");
            break;
        case 9:
            quick_sort();
            system("cls");
            break;
        case 10:
            rQuicksort();
            system("cls");
            break;
        case 11:
            radixSort();
            system("cls");
            break;
        case 12:
            subset_sum();
            system("cls");
            break;
        case 13:
            nReinas();
            system("cls");
            break;
        case 14:
            pila();
            system("cls");
            break;
        case 15:
            queue();
            system("cls");
            break;
        default:
            cout<<"Numero invalido"<<endl;
            system("pause");
            system("cls");
        }
    }
    while(num != 0);
}
void insertion_sort(){
    system("cls");
    cout<<"El arreglo de numeros es de tamaño 6\n";
    int A[6];
    for(int i =0; i<6; i++){
        cout<<"Escribe el numero "<<i+1<<endl;
        cin>>A[i];
    }
    int sise = sizeof(A)/sizeof(A[0]);
    system("cls");
    insertion_sort_proceso(A, sise);
}
void insertion_sort_proceso(int A[], int length){
    int j, i, key;
    for (j=1; j<length; j++){
        key = A[j];
        i=j-1;
        while(i>=0 && A[i]>key){
            A[i+1] = A[i];
            i = i-1;
        }
        A[i+1] = key;
    }
    cout<<"El arreglo ordenado es:\n";
    for (j=0; j< length; j++){
        cout<<A[j]<<endl;
    }
    system("pause");
}
void busqueda_binaria(){
    system("cls");
    int arr[] = {2, 8, 12, 15, 25, 28};
    cout<<"El arreglo de numeros es este:"<<endl;
    for (int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    int x;
    cout<<"Escriba el numero del arreglo que desea buscar: ";
    cin>>x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int resultado = binarySearch(arr, 0, n-1, x);
    if (resultado == -1)
        cout<< "El elemento no existe en el arreglo\n";
    else
        cout<<"El elemento se encuentra en la posicion "<<resultado+1<<endl;
    system("pause");
}
int binarySearch(int arr[], int l, int r, int x){
    if (r>=1){
        int mid = l + (r-l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid]<x)
            return binarySearch(arr, mid+1, r, x);
        return binarySearch(arr, l, mid-1, x);
    }
    else
        return -1;
}
void busqueda_lineal(){
    system("cls");
    int arr[] = {2, 8, 12, 15, 25, 28};
    cout<<"El arreglo de numeros es este:"<<endl;
    for (int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    int x;
    cout<<"Escriba el numero del arreglo que desea buscar: ";
    cin>>x;
    int n = (sizeof(arr) / sizeof(arr[0]));
    int resultado = busquedaLineal_algoritmo(arr, n, x);
    if (resultado == -1)
        cout<< "El elemento no existe en el arreglo\n";
    else
        cout<<"El elemento se encuentra en la posicion "<<resultado<<endl;
    system("pause");
}
int busquedaLineal_algoritmo(int arr[], int n, int x){
    for(int i=0; i<n; i++){
            if(x == arr[i])
                return (i+1);
    }
    return -1;
}
void fibonacci(){
    system("cls");
    int n;
    cout<<"Ingresa el numero ";
    cin>>n;
    int f=fibonacci_algoritmmo(n);
    cout<<f<<endl;
    system("pause");
}
int fibonacci_algoritmmo(int n){
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else{
        int x=fibonacci_algoritmmo(n-1);
        int y=fibonacci_algoritmmo(n-2);
        return (x+y);
    }
}
void factorial(){
    system("cls");
    int n;
    cout<<"inserte el numero del cual desea saber el factorial"<<endl;
    cin>>n;
    int facto=factorial_algoritmo(n);
    cout<<facto<<endl;
    system("pause");
}
int factorial_algoritmo(int n){
    if (n<0){
        return 0;
    }
    else if (n==0){
        return 1;
    }
    else{
            return (n*factorial_algoritmo(n-1));
    }
}
void mergeSort(){
    system("cls");
    int arr[] = { 52, 101, 13, 25, 16, 47 };
    int arr_tam = sizeof(arr) / sizeof(arr[0]);
    cout<<"El arreglo de numeros es este:"<<endl;
    for (int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
    system("cls");
    mergeSort_algoritmo(arr, 0, arr_tam - 1);

    cout << "\nArreglo ordenado \n";
    for (int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
}
void mergeSort_algoritmo(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m = (l+r-1)/2;
    mergeSort_algoritmo(arr,l,m);
    mergeSort_algoritmo(arr,m+1,r);
    mershe(arr,l,m,r);
}
void mershe(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void heapSort(){
    system ("cls");
    int arr[] = { 12, 11, 13, 5, 1, 7 };
    cout<<"El arreglo de numeros es este:"<<endl;
    for (int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort_algoritmo(arr, n);
    cout << "El arreglo ordernado es: \n";
    for (int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
}
void heapSort_algoritmo(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void counting_Sort(){
    system("cls");
    char arr[] = "nomerepruebeprofe";
    cout<<"Arreglo de caracteres sin ordenar: "<<arr<<endl;
    system("pause");
    counting_Sort_algoritmo(arr);
    cout << "Arreglo de caracteres ordenado " <<arr<<endl;
    system("pause");
}
void counting_Sort_algoritmo(char arr[]){
    char output[strlen(arr)];
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));
    for (i = 0; arr[i]; ++i)
        ++count[arr[i]];
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i - 1];
    for (i = 0; arr[i]; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
}
void quick_sort(){
    system("cls");
    int arr[] = {10, 7, 8, 9, 1, 5};
    cout<<"El arreglo de numeros es este:"<<endl;
    for (int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort_algoritmo(arr, 0, n - 1);
    cout << "Arreglo ordenado: \n";
    for (int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
}
void quick_sort_algoritmo(int arr[], int low, int high){
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quick_sort_algoritmo(arr, low, pi - 1);
        quick_sort_algoritmo(arr, pi + 1, high);
    }
}
int partition (int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition_random(int arr[], int low, int high){
    srand(time(NULL));
    int random = low + rand() % (high - low);

    swap(arr[random], arr[high]);

    return partition(arr, low, high);
}
void randomized_quickSort_algoritmo(int arr[], int low, int high){
    if (low < high) {
        int pi = partition_random(arr, low, high);
        randomized_quickSort_algoritmo(arr, low, pi - 1);
        randomized_quickSort_algoritmo(arr, pi + 1, high);
    }
}
void rQuicksort(){
    system("cls");
    int arr[] = { 100,25,1,13,20,57,95 };
    cout<<"El arreglo de numeros es este:"<<endl;
    for (int i=0; i<7; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
    int n = sizeof(arr) / sizeof(arr[0]);
    randomized_quickSort_algoritmo(arr, 0, n - 1);
    cout<<"Arreglo ordenado: \n";
    for (int i=0; i<7; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
}
void radixSort(){
    system("cls");
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    cout<<"El arreglo de numeros es este:"<<endl;
    for (int i=0; i<8; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
    int n = sizeof(arr) / sizeof(arr[0]);
    radixSort_algoritmo(arr, n);
    cout<<"Arreglo ordenado: \n";
    for (int i=0; i<8; i++){
        cout<<arr[i]<<endl;
    }
    system("pause");
}
void radixSort_algoritmo(int arr[], int n){
    int m = getMax(arr, n);
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
int getMax(int arr[], int n){
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
void countSort(int arr[], int n, int exp){
    int output[n];
    int i, count[10] = { 0 };
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void subset_sum(){
    system("cls");
    int set[] = { 3, 34, 4, 12, 5, 2 };
    cout<<"El arreglo de numeros es este:"<<endl;
    for (int i=0; i<6; i++){
        cout<<set[i]<<endl;
    }
    int sum;
    cout<<"Ingrese el numero que guste sin importar si esta en la lista o no\n";
    cin>>sum;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        printf("La suma existe\n");
    else
        printf("La suma no existe\n");
    system("pause");
}
bool isSubsetSum(int set[], int n, int sum){
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);
    return isSubsetSum(set, n - 1, sum)
           || isSubsetSum(set, n - 1, sum - set[n - 1]);
}
void nReinas(){
    system("cls");
    solveNQ();
    system("pause");
}
bool solveNQ(){
    int tablero[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
    if (Resuelve(tablero, 0) == false) {
        printf("No existe solucion");
        return false;
    }
    Solucion(tablero);
    return true;
}
bool Resuelve(int tablero[N][N], int col){
    if (col >= N)
        return true;
    for (int i = 0; i < N; i++) {
        if (Segura(tablero, i, col)) {
            tablero[i][col] = 1;
            if (Resuelve(tablero, col + 1))
                return true;
            tablero[i][col] = 0; // BACKTRACK
        }
    }
    return false;
}
bool Segura(int tablero[N][N], int row, int col){
    int i=0, j=0;
    for (i = 0; i < col; i++){
        if (tablero[row][i]){
          return false;
        }

    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
       if (tablero[i][j]){
              return false;
        }

    }
    for (i = row, j = col; j >= 0 && i < N; i++, j--){
        if (tablero[i][j]) {
            return false;
        }

    }
    return true;
}
void Solucion(int tablero[N][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", tablero[i][j]);
        printf("\n");
    }
}
void pila(){
    system("cls");
    stack <int> st;
	st.push(32);
	st.push(21);
	st.push(39);
	st.push(89);
	st.push(25);

	cout << "La pila st es: ";
	createStack(st);
	cout << "\n st.size() : " << st.size();
	cout << "\n st.top() : " << st.top();
	cout << "\n st.pop() : ";
	st.pop();
	createStack(st);
	system("pause");
}
void createStack(stack <int> mystack){
	stack <int> ms = mystack;
	while (!ms.empty())
	{
		cout << '\t' << ms.top();
		ms.pop();
	}
	cout << '\n';
}
void queue(){
    system("cls");
    for(int i=10;i<=100;i+=10)
        enqueue(i);
    cout<<"Se ha retirado "<<dequeue()<<endl;
    enqueue(15);
    cout<<"Back-> "<<Back()<<endl;
    cout<<"Front-> "<<Front()<<endl;
    Empty()?cout<<"Esta vacio"<<endl:cout<<"No esta vacio"<<endl;
    cout<<"Tamanio-> "<<Size()<<endl;
    for(int i=0;i<10;i++)
        cout<<lista[i]<<endl;
    system ("pause");
}
void enqueue(int valor){
    if(!lista[frente]){
        lista[frente]=valor;
        frente++;
        if(frente>(tamanio-1))
            frente=0;
    }
}
int dequeue(){
    int temp=lista[cola];
    lista[cola]=0;
    cola++;
    if(cola>(tamanio-1) && lista[0]!=0)
        cola=0;
    return temp;
}
int Back(){
    return lista[cola];
}
int Front(){
    if(frente)
        return lista[frente-1];
    return lista[tamanio-1];
}
bool Empty(){
    if(!lista[frente] && !lista[cola])
        return 1;
    return 0;
}
int Size(){
    int cont=0;
    for(int i=0; i<tamanio; i++){
        if(lista[i]!=0)
            cont++;
    }
    return cont;
}
