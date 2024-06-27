char* removeStars(char *s) {
  char stack[200004];
  int top = -1;

  for (int i = 0; s[i] != '\0'; i++) {
    char c = s[i];
    if (c != '*') {
      stack[++top] = c;
    } else {
      if (top >= 0) {
        top--;
      }
    }
  }

  stack[top + 1] = '\0'; 
  strcpy(s, stack); 

  return s;
}

