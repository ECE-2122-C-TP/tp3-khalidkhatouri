//EXERCICE1

/*#include<stdio.h>
int main (){
    int a,b;
    printf("saisir un entier a");
    scanf("%d",&a);
    printf("saisir un entier b");
    scanf("%d",&b);
if(a>b) {
    printf("le plus grand nombre est : %d ",a);
} else
    if(a<b){ printf("le plus grand nombre est : %d ",b);
        } else {printf("erreur");
    }

return 0 ;
}*/




//EXERCICE 2
/* #include<stdio.h>
int main() {
    int longueur, larg,perim,air;
    printf("saisir la longueur du rectangle ");
    scanf("%d", &longueur);
    printf("saisir la largeur du rectangle ");
    scanf("%d", &larg);
    perim=(longueur + larg) * 2;
    air=longueur * larg;
    printf("le perimetre du rectangle est %d \n", perim);
    printf("l air du rectangle est %d", air);
    return 0;
} */




//EXERCICE 3
/*include<stdio.h>
int main(){
int a,b=3;
printf("saisir la valeur de a : ");
scanf("%d",&a);
if(a% b ==0 && a>=10){
    printf(" c est u multiple de %d et superieure ou egal a 10 ",b);}
    else { printf(" non");
}
return 0;
}
 */



// EXERCICE 4
/*#include<stdio.h>
int main() {
    int age;
    printf("saisir votre age: ");
    scanf("%d",&age);
    if(age>=0 && age<12){ printf("le tarif est 4 euro:");}
    else if(age>=12 && age<=17 ){ printf("le tarif est 6 euro: ") ;}
    else if( age>=65 ) { printf("le tarif est 6 euro ") ;}
else{ printf("le tarif est 9 euro "); }
return 0;
 }
*/

//EXERCICE 5
/*#include<stdio.h>
int main(){
    int choix ;
    printf("entrer votre choix SVP : \n");
    scanf("%d", &choix);
    switch(choix)
    {
        case 1 :
            printf("vous avez choisi un the avec glasson . \n");
            break ;
        case 2:
            printf("vous avez choisi un jus d'orange . \n");
            break ;
        case 3 :
            printf ("vous avez choisi un jus de banane .\n ");
            break ;
        case 10 :
            printf("vous avez choisi un cafe nespresso . \n");
            break ;
        case 11 :
            printf("vous avez choisi un cafe creame . \n");
            break ;
        default:
            printf(" message erreur");

    }
    return 0;
}
*/

//EXERCICE 6

/*#include<stdio.h>
int main(){
    int i;
    float note,moyenne=0;
for(i=1;i<=3;i++){
        printf("saisir la %d note: ",i);
        scanf("%f",&note);
if(note>=0 && note<=20){
    moyenne+=note;}
else{ printf("saisir la %d note: ",i);
    scanf("%d",&note); }
    }
printf("La moyenne est : %f ",moyenne/3);
return 0;
}
*/

//EXERCICE 7
/*#include<stdio.h>
int main ()
{
    int classes ,  eleves ,  totaleleve =0;
    printf("saisissez le nombre de classes ouvertes : ");
    scanf("%d",&classes);
    for(int i=1;i<=classes ;i++)
    {
        printf("saisissez le nombre d'eleves de %d classe ouverte :",i);
        scanf("%d",&eleves);
        totaleleve+=eleves;
    }
    printf("le nombre total d'eleves est : %d",totaleleve);
    return 0;
}
 */

//EXERCICE 8
/*#include<stdio.h>
int main ()
{
    int a ;
    printf("entrer l'entier a : ");
    scanf("%d",&a);
    while(a%2 != 0 || a%7 != 0){
        printf("entrer l'entier a : ");
        scanf("%d",&a);

    }
    return 0 ;
}
*/

//EXERCICE 9
/*#include <stdio.h>
int main (){
    int n,P=0,E=0,i=1;
    printf(" Combien de pierres avez vous ? : ");
    scanf("%d",&n);
    do {
        P = P + (i * i);
        i = i + 1;
        if (P <= n) {
            E = E + 1;
        } else if (P > n)
            break;
    }while (P < n);

        printf(" le nombre d etage est %d : ",E);


return 0 ;

}

*/




//EXERCICE 10
/*#include <stdio.h>
int main ()
{
    int nompositifs=0 , moy=0 ;
    while(nompositifs>= 0)
    {
        moy += nompositifs ;
        printf("entrer la suite des  nombres positifs : ");
        scanf("%d",&nompositifs);


    }
    printf("la moyenne  des nombres positifs est : %d",moy);
    return 0 ;
}
*/