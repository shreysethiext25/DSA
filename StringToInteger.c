


int myAtoi(char* s) {
    int len = strlen(s);
    int i = 0;
    long long num = 0;
    bool negative = false;

    while (i < len && s[i] == ' ') {
        i++;
    }

    if (s[i] == '+') {
        i++;
    } else if (s[i] == '-') {
        negative = true;
        i++;
    }
    while (i < len && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';
        if (num > (LLONG_MAX - digit) / 10) {
            if(negative){
                return INT_MIN;
            }
            else{
                return INT_MAX;
            }
        }
        num = num * 10 + digit;
        i++;
    }

    if (negative) {
        num = -num;
    }
    if (num > INT_MAX) {
        return INT_MAX;
    }
    if (num < INT_MIN) {
        return INT_MIN;
    }
    return (int)num;
}
