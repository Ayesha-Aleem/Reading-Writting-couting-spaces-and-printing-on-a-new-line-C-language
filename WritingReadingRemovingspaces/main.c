#include <stdio.h>
#include<stdlib.h>
int main() {
    FILE *fr;
    FILE *fw;
    char ch;
    int c=0,s=0,tab=0,nextline=0;
//    fw= fopen("filewriter.txt","w");
    fr= fopen("filewriter.txt","r");
    if(fw == NULL){
        printf("File doesnt exist");
        exit(1);
    }
//    printf("Enter text which you want to write in a text file:\n");
//    while((ch= getchar()) != '\n') {
//        putc(ch,fw);
//    }

    printf("After reading from a file:\n");
    while((ch = getc(fr)) != EOF) {
        if (ch==' ' ){
            printf("\n");
        }
        else {
            printf("%c", ch);
        }
    //for couting white spaces, new line tabs etc
        //        if(ch==' '){
//            s++;
//        }
//        if(ch=='\t'){
//            tab++;
//        }
//        if(ch=='\n'){
//            nextline++;
//        }
   //     c++;



    }
//    printf("\n");
//    printf("Number of characters in a file:%d\n",c);
//    printf("Number of spaces in a file:%d\n",s);
//    printf("Number of tabs in a file:%d\n",tab);
//    printf("Number of next lines in a file:%d\n",nextline);
    fclose(fw);
    fclose(fr);
    return 0;
}
//another way to write text in file
//char sentence[1000];
//    fgets(sentence, sizeof(sentence), stdin);
//    fprintf(fw, "%s", sentence);