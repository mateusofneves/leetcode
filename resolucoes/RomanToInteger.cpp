class Solution {
public:
    int valor(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        return 1000; //para o valor de M
    }

    int romanToInt(string s) {
        int resultado = 0;

        for (int i = 0; i< s.size(); i++) {
            if (i < s.size() - 1 && valor(s[i]) < valor(s[i+1])) {
                resultado -= valor(s[i]);
            } else {
                resultado += valor(s[i]);
            }
        }

        return resultado;
    }
};
