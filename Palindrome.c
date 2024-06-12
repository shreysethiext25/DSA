bool isPalindrome(int x){
    if (x < 0) {
        return false;
    }

    char str[20];
    int len = 0;
    
    while (x > 0) {
        str[len++] = x % 10;
        x /= 10;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }

    return true;
}
