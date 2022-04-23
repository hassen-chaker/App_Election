#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED

#include <locale.h>

#endif // TP1_H_INCLUDED


void EX1TP1()
{ printf("-------------------------------------\n");
    setlocale(LC_ALL,"");
    int x; float y;
    printf("Donner un entier x : ");
    scanf("%d",&x);
    printf("Donner un réel y : ");
    scanf("%f",&y);
    printf("%8.5d\n",x);
    printf("%5.0f\n", y);

   printf("\n\n");
   system("pause");
}

void EX2TP1()
{ printf("-------------------------------------\n");
    setlocale(LC_ALL,"");
    int x; float y;
    printf("donner un entier x : ");
    scanf("%d",&x);
    printf("donner un réel y : ");
    scanf("%f",&y);

    printf("%3d\n",x);
    printf("%10f\n",y);

    printf("\n\n");
   system("pause");
}

void EX3TP1()
{ printf("-------------------------------------\n");
    int i, j,n;
    i=0; n=i++;
    printf("A : i=%d  n=%d \n", i, n);
    i=10; n=++i;
    printf("B : i=%d  n=%d \n", i, n);
    i=20; j=5; n=i++ *++j;
    printf("C : i=%d j=%d n=%d \n", i, j, n);
    i= 15; n=i+=3;
    printf("D : i=%d n=%d \n", i, n);
    i=3; j = 5; n=i+=--j;
    printf("E : i=%d j =%d n=%d \n", i, j, n);

 printf("\n\n");
   system("pause");
}

void EX4TP1Q1()
{ printf("-------------------------------------\n");
    int A,B,C,MAX;
    printf("Donner A : ");
    scanf("%d",&A);
    printf("Donner B : ");
    scanf("%d",&B);
    printf("Donner C : ");
    scanf("%d",&C);
    //Question 1)
    if(A>B) MAX=A;
    else MAX=B;
    if(C>MAX) MAX=C;

    printf("MAX=%d \n",MAX);

   printf("\n\n");
   system("pause");
}

void EX4TP1Q2()
{ printf("-------------------------------------\n");
    int A,B,C;
    printf("Donner A : ");
    scanf("%d",&A);
    printf("Donner B : ");
    scanf("%d",&B);
    printf("Donner C : ");
    scanf("%d",&C);
    //Question 2)
    if(A>=B && A>=C) printf("MAX=%d \n",A);
    else if(B>=A && B>=C) printf("MAX=%d \n",B);
    else printf("MAX=%d \n",C);

   printf("\n\n");
   system("pause");
}

void EX4TP1Q3()
{ printf("-------------------------------------\n");
    int A,B,C,MAX;
    printf("Donner A : ");
    scanf("%d",&A);
    printf("Donner B : ");
    scanf("%d",&B);
    printf("Donner C : ");
    scanf("%d",&C);
    //Question 3)

    MAX= A>=B?A:B;
    MAX= C>MAX?C:MAX;

    printf("MAX=%d \n",MAX);

 printf("\n\n");
   system("pause");
}

void EX4TP1Q4()
{ printf("-------------------------------------\n");
    int A,B,C,MAX;
    printf("Donner A : ");
    scanf("%d",&A);
    printf("Donner B : ");
    scanf("%d",&B);
    printf("Donner C : ");
    scanf("%d",&C);
    //Question 4)

    (A>=B && A>=C)? printf("MAX=%d \n",A)  :  (B>=C ? printf("MAX=%d \n",B)   :   printf("MAX=%d \n",C)  );

printf("\n\n");
   system("pause");
}

void EX5TP1()
{ printf("-------------------------------------\n");
    int Q;
    float PI,HT,TVA,TTC,NP,Re;
    const float TTVA=0.18;
    printf("+--------------------------------------+\n");
    printf("Donner la quantite commande :");
    scanf("%d",&Q);

    printf("Donner le prix unitaire :");
    scanf("%f",&PI);

    HT=Q*PI;

    TVA=HT*TTVA;

    TTC=HT+TVA;

    if(TTC<1000)
    Re=TTC*0.10;
    else if (TTC>=1000 && TTC<5000)
    Re=TTC*0.15;
    else if (TTC>=5000 && TTC<10000)
    Re=TTC*0.20;
    else
    Re=TTC*0.30;

    NP=TTC-Re;

    printf("+--------------------------------------+\n");
    printf("Montant HT \t : %.3f Dinars \n",HT);
    printf("Montant TVA \t : %.3f Dinars \n",TVA);
    printf("Montant TTC \t : %.3f Dinars \n",TTC);
    printf("Remise  \t : %.3f Dinars \n",Re);
    printf("+--------------------------------------+\n");
    printf("Net a payer  \t : %.3f Dinars \n",NP);

    printf("\n\n");
   system("pause");
}

void EX6TP1()
{ printf("-------------------------------------\n");
int jour, mois, annee;
   int jour1,mois1, annee1;
   int nbJoursMois;
   setlocale (LC_ALL,"");
do{
        printf("Donner jour : ");
        scanf("%d",&jour);
      }
    while (jour<1 || jour>31);
    do{
        printf("Donner mois : ");
        scanf("%d",&mois);
      }
    while (mois<1 || mois>12);
    do{
        printf("Donner annee : ");
        scanf("%d",&annee);
      }
    while (annee<1583 || annee>9999);
   printf("%d/%d/%d  ",jour,mois,annee);

   switch(mois)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:nbJoursMois = 31;
                break;
        case 4:
        case 6:
        case 9:
        case 11:nbJoursMois = 30;
                break;
        case 2: /* bissextile divisible par 4 mais pas par 100 ou divisible par 400 */
                if ((annee%4==0 && annee%100 !=0)||(annee%400 == 0))
                    nbJoursMois = 29;
                else
                    nbJoursMois = 28;
                break;

        default: printf("mois non valide");
    }

    if (jour >0 && jour <= nbJoursMois  && mois>0  && mois <= 12 && annee >0)
    {
      jour1 = (jour+1)% nbJoursMois;
      if (jour1==1)
          mois1= (mois+1)%12;
      else
          mois1= mois;

      if(mois1 == 1 && jour1==1)
         annee1= annee+1;
    else
         annee1= annee;
      printf("Date suivante %d/%d/%d \n",jour1,mois1,annee1);
    }
    else
        printf("\ndate invalide");

printf("\n\n");
   system("pause");
}

void EX7TP1()
{ printf("-------------------------------------\n");
int J,M,A,c,a,m,j;
    do{
        printf("Donner J : ");
        scanf("%d",&J);
      }
    while (J<1 || J>31);
    do{
        printf("Donner M : ");
        scanf("%d",&M);
      }
    while (M<1 || M>12);
    do{
        printf("Donner A : ");
        scanf("%d",&A);
      }
    while (A<1583 || A>9999);

    c=(14-M)/12;
    a=A-c;
    m=M+12*c-2;
    j=( J + a + a/4 - a/100 + a/400 + (31*m)/12 ) % 7;

    switch(j)
    {
        case 0: printf("le %d/%d/%d est un Dimanche",J,M,A);
                break;
        case 1: printf("le %d/%d/%d est un Lundi",J,M,A);
                break;
        case 2: printf("le %d/%d/%d est un Mardi",J,M,A);
                break;
        case 3: printf("le %d/%d/%d est un Mercredi",J,M,A);
                break;
        case 4: printf("le %d/%d/%d est un Jeudi",J,M,A);
                break;
        case 5: printf("le %d/%d/%d est un Vendredi",J,M,A);
                break;
        case 6: printf("le %d/%d/%d est un Samdi",J,M,A);
    }

printf("\n\n");
   system("pause");
}
