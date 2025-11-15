#include <string.h>

int main(int argc, char* argv[]) {
    if (argc != 2) return 1;
    char* s = argv[1];
        int output = 0;
        int len = strlen(s);

        for (int i = 0; i < len; i++) {
            switch(s[i]) {
                case 'I':
                    if (i + 1 < len) {
                        if (s[i+1] == 'V') {
                            output += 4;
                            i++;
                            break;
                        }
                        if (s[i+1] == 'X') {
                            output += 9;
                            i++;
                            break;
                        }
                    }
                    output += 1;
                    break;
                case 'V':
                    output += 5;
                    break;
                case 'X':
                    if (i + 1 < len) {
                        if (s[i+1] == 'L') {
                            output += 40;
                            i++;
                            break;
                        }
                        if (s[i+1] == 'C') {
                            output += 90;
                            i++;
                            break;
                        }
                    }
                    output += 10;
                    break;
                case 'L':
                    output += 50;
                    break;
                case 'C':
                    if (i + 1 < len) {
                        if (s[i+1] == 'D') {
                            output += 400;
                            i++;
                            break;
                        }
                        if (s[i+1] == 'M') {
                            output += 900;
                            i++;
                            break;
                        }
                    }
                    output += 100;
                    break;
                case 'D':
                    output += 500;
                    break;
                case 'M':
                    output += 1000;
                    break;
                default:
                    output += 0;
                    break;
            }
        }
        return output;
    }
