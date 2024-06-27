int romanToInt(char *s) {
  char rom[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
  int integer[7] = {1, 5, 10, 50, 100, 500, 1000};
  int num = 0;

  int i = strlen(s)-1;
  while (i >= 0) {
    for (int j = 0; j < 7; j++) {
      if (s[i] == rom[j]) {
        if ( s[i] == 'I' && (s[i + 1] == 'V' || s[i+1]=='X')) {
          num -= 1;
          i--;
          break;
        }
        else if ( s[i] == 'X' && (s[i + 1] == 'L' || s[i+1]=='C')) {
          num -= 10;
          i--;
          break;
        }
        else if ( s[i] == 'C' && (s[i + 1] == 'D' || s[i+1]=='M')) {
          num -= 100;
          i--;
          break;
        }
        else {
          num += integer[j];
          i--;
          break;
        }
      }
    }
  }
  return num;
}
