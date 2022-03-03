#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector <int> &mass){
    for(int i = 0; i < mass.size() - 1; i++) cout << mass[i] << " ";
    cout << mass[mass.size() - 1];
    cout << endl;}
void enter_vector(vector <int > &mass2, int n){
    int c;
  for(int i = 0; i < n; i++){
        cin >> c;
        mass2.push_back(c);}}
void swap_vector(vector <int> & mass, int j){
    int c = mass[j];
    mass[j] = mass[j - 1];
    mass[j - 1] = c;}
void itc_bubble_sort(vector <int> & mass){
    for(int i = 0; i < mass.size() -  1; i++){
        for (int j = 1; j < mass.size() - i; j ++){
            if (mass[j - 1] > mass[j])
                swap_vector(mass, j);
                print_vector(mass);}}}
void itc_add_sort(vector<int> &mass) {
    print_vector(mass);
    for (int i = 1; i < mass.size(); i++) {
        int key = mass[i];
        int j = i - 1;
        while (j >= 0 && mass[j] > key) {
            mass[j + 1] = mass[j];
            mass[j] = key;
            j--;}
        print_vector(mass);}}
void swap(int & a, int & b){
    int tmp = a;
    a = b;
    b = tmp;}
void select(vector<int> &mass, int i, int minj) {
    mass[i] = mass[minj];
    mass[minj] = mass[i];}
void itc_selection_sort(vector <int> &mass) {
     for (int i = 0; i < mass.size(); i++) {
        int min = i;
        for (int j = i; j < mass.size(); j++) if (mass[j] < mass[min]) min = j;
        if (min != i) swap(mass[i], mass[min]);
        print_vector(mass);}}
void itc_comb_sort(vector <int> & a){
    int dist = (int)(a.size() / 1.247);
    while (dist != 0){
        int i_end = dist;
        while (i_end < a.size()) {
            int i_beg = i_end - dist;
            if (a[i_end] < a[i_beg]){
                swap(a[i_end], a[i_beg]);
                print_vector(a);}
            i_end++;}
        dist = (int)(dist / 1.247);}
}
void itc_shaker_sort(vector <int> & a){
	print_vector(a);
	bool dir = true;
	int i = a.size() - 1;
	int j = 0;
	while (i != 0){
		bool changed = false;
		for (int x = 0; x < i; x++){
			if (dir) j++;
			else j--;
			if (a[j - 1] > a[j]){
				swap(a[j - 1], a[j]);
				changed = true;}
			print_vector(a);}
		dir = !dir;
		i--;
		if (!changed) break;}
}
int main(){
    vector <int> a;
    int n;
    cin >> n;
    enter_vector(a, n);
    itc_shaker_sort(a);
    //itc_comb_sort(a);
    //itc_selection_sort(mass);
return 0;}













