void output(int arr[], int n, char ch) {
    for(unsigned int i = 0; i < n; i++) {
        std::cout << arr[i];
        if(i != n-1) {
            std::cout << ch;
    }
}
}