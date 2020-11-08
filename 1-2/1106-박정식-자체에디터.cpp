#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main(){
    char p[1000000]={0, };
    char a;
    char c;
    int i;
    int key;
    int n;
    FILE *open;
    
    printf("EDIT:A, OPEN:B : ");
    a=getchar();
    printf("\n\nKEY : ");
    scanf("%d", &key);
    if(a=='A'||a=='a'){
        printf("\n\nFILE NAME(.cnp) : ");
        scanf("%s", p);
        open=fopen(p, "w");
        
        printf("type : \n");
        scanf("%s", p);
        n=strlen(p);
        fprintf(open, "%d ", n);
        for(i=0;i<n;i++){
            fprintf(open, "%c", c^key);
        }
        
        system("pause");
    } else if(a=='B'||a=='b'){
        printf("\n\nFILE NAME(.cnp) : ");
        scanf("%s", p);
        open=fopen(p, "r");
        fscanf(open, "%d ", &n);
        
        for(i=0;i<n;i++){
            printf("%c", c ^ key);
        }
        
        system("pause");
    }
    
    return 0;
}
