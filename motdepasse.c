#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int verif(char s[50]){                                                //création d'une fonction pour vérifier le nombre de chiffre present
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
int main(){
    char code[50];
    int i=0;
    printf("entrer ton mot de passe: ");
    scanf("%s",&code);
    while (verif(code)==0)
    {
        printf("entrer  un nombre: ");
         scanf("%s",&code);
    }
    int Tab[3] = {110,120,130};
    int a=3;  
    while (atoi(code)!=Tab[i])
    {     
        if (i<3)
        {     
            i++;
        }
        else 
            {     
                if(a>1)
                    {         
                        printf("mot de passe saisi incorrecte; il vous reste %d tentatives: ",a);         
                        scanf("%s",&code);         
                        i=0;         
                        a--;     
                    }
                else 
                   { 
                        printf("fin des tentatives");     
                        return 0;     
                   }      
            } 
    }    
    printf("correcte");
return 0;    
}