#include <stdio.h>
#include <conio.h>

int main(){
    FILE *fps,*fpr;
    int j,n;
    char ch,fnamer[100],fnames[100],keep;
    int a=0,e=0,i=0,o=0,u=0;
    printf("Please enter file name to read: ");
    gets(fnamer);
    fpr=fopen(fnamer,"r");

    printf("Please enter file name to save: ");
    gets(fnames);
    fps=fopen(fnames,"w");
    while((ch=getc(fpr))!=EOF){
        if(ch=='a'){
            a+=1;
        }
        if(ch=='e'){
            e+=1;
        }
        if(ch=='i'){
            i+=1;
        }
        if(ch=='o'){
            o+=1;
        }
        if(ch=='u'){
            u+=1;
        }
    }
    fclose(fpr);
    fprintf(fps,"a %d\ne %d\ni %d\no %d\nu %d",a,e,i,o,u);
    fclose(fps);
    printf("-------------------------------\n");
    printf("FILE IS ALREADY SAVED.\n");
    printf("-------------------------------\n");
    printf("Number of Vowels in %s are\n",fnamer);
    fps=fopen(fnames,"r");
    fflush(stdin);
    for(j=0;j<5;j++){
        fscanf(fps," %c %d",&keep,&n);
        printf("%c: %d\n",keep,n);
    }
    fclose(fps);
    return 0;
}