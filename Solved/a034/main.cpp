#include <stdio.h>

int main() {
    int input,s[1000]={0};
    int index = 0;

    while(scanf("%d",&input) != EOF) {
        index=0;
        while(input!=1) {
            s[index]=input%2;
            input/=2;
            index++;
        }
        s[index] = 1;

        for (int j = index; j>=0; j--) {
            printf("%d",s[j]);
        }
        printf("\n");
    }

    return 0;
}