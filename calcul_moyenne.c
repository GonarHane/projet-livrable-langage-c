#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int v(char s[20]){                                                //creer une fonction permettant de vérifier le nombre de chiffres saisi
int count=0;
for (int i=0; i<strlen(s);i++)
{
    if(s[i]>='0'&& s[i]<='9')
    {
        count++;    
    }
}
if (strlen(s)==count)
{
    return 1;
}
return 0;
}
int main()
{
char nmbr[50];
char nom[50]=" ";
char prenom[50]=" ";
char matiere[50]=" ";
float note1,tt,moy,note,note2;
int i=4,coef,somcoef=0,tt_som=0;    
printf("veiller entrer le nom et le prénom de l'apprenant: %s %s",nom,prenom);
scanf("%s %s",&nom,&prenom);
printf("veiller entrer le nombre de matiere  pour le quel il a composé: ");
scanf("%s",&nmbr);
while (v(nmbr)==0)
{
    printf("incorrecte veuillez entrer des entiers : ");
    scanf("%s",&nmbr);
}
for ( i = 0; i < 3; i++)                                             
{   
    printf("entrer la discipline: ",matiere);
    scanf("%s",&matiere);                                                      
    printf("entrer les deux notes en %s : ",matiere);        
    scanf("%f %f",&note1,&note2);
    while (note1<0 || note1>20 || note2>20 || note2<0)
    {
        printf("veuillez saisir des notes comprises entre 0 et 20: ");
        scanf("%f %f",&note1,&note2);    
    }                                      
    printf("saisir le coefficient : ");
    scanf("%d",&coef);
    note=(note1+note2)/2;                                 
    somcoef=somcoef+coef;
    tt=note*coef;
    tt_som=tt_som+tt;                                                      
    printf("la moyenne en %s est %f\n",matiere,note);                             
}
moy=(tt_som)/somcoef;
printf("la moyenne générale est de %f ",moy);
printf("et la mention est ");
if (moy<10)
{
    printf("médiocre");
}
else if (moy==10)
{
    printf("passable");
}
else if (moy>=12 && moy<=14)
{
    printf("trés bien");
}
else if (moy>14)
{
    printf("excellent");
}

return 0;
}