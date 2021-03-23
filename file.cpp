#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 100
FILE*tp;
FILE*tc;

struct vvv
{
    char fn[10];
    char ln[10];
    char gen[10];
    int mmm;
} a;
struct aaa
{
    char Afn[10];
    char Aln[10];
    char Agen[10];
    int mc;
} B[MAX];
void mm();
void vv();
int main()
{
    mm();
    vv();
}
void mm()
{
    tp=fopen("suvo.txt","a");

    printf("\n\n\t\t\t\t\tFIRST NAME       : ");
    scanf("%s",&a.fn);
    printf("\n\t\t\t\t\tLAST NAME        : ");
    scanf("%s",&a.ln);
    printf("\n\t\t\t\t\tGENDER           : ");
    scanf("%s",&a.gen);
    printf("\n\t\t\t\t\tID               : ");
    scanf("%d",&a.mmm);
    fwrite(&a,sizeof(a),1,tp);
    fclose(tp);


}
void vv()
{
    tc=fopen("suvo.txt","r");
    for(int i=0;i<5;i++)
    {
    fread(&B[i],sizeof(B[i]),1,tc);
    B[i].Afn;
    B[i].Aln;
    B[i].Agen;
    B[i].mc;
    }
    for(int i=0; i<5; i++)
    {
        printf("\n\t\t\t\t\tFIRST NAME        : %s",B[i].Afn);
        printf("\n\t\t\t\t\tLAST NAME         : %s",B[i].Aln);
        printf("\n\t\t\t\t\tGENDER            : %s",B[i].Agen);
        printf("\n\t\t\t\t\tID                : %d",B[i].mc);
    }

    fclose(tc);
}
