#ifndef TP2_H_INCLUDED
#define TP2_H_INCLUDED

#include <locale.h>
#include<math.h>

#endif // TP2_H_INCLUDED

int sommeChiffres (int x);
int estHeureux(int x);
int premierDiviseurPremier(int X);
int estPalindrome(int x);
int estPremier(int x);

int estPalindrome(int x)
{int n,s,c;
     n=x; s=0;
          while (n!=0)
              {
                  c= n%10;
                  s=s*10+c ;
                  n=n/10;
              }
           if(s==x)
             return 1;
           else
             return 0;
}

int estPremier(int x)
{ int j, estPrem;
    j=2;
      estPrem=1;
      while(j<=x/2 && estPrem)
      {
        if (x%j==0)
           estPrem=0;
        j++;
       }
    return estPrem;


}

int premierDiviseurPremier(int X)
{ int n,i,estPremier;
    //on genere les nombres premiers n jusqu'à ce que X%n==0
      n=2;
      while (n <= X)
      {
        //vérifier si n est premier
         estPremier=1;
         i=2;
         while(i<=n/2 && estPremier )
           {
             if (n%i==0)
                estPremier=0;
             i++;
           }

        if (estPremier && X%n==0)
            return n;
        else
            n++;
      }

}

int sommeChiffres (int x)
{ int somme=0, chiff;
    while(x>0)
    {
        chiff=x%10;
        somme = somme + chiff*chiff;
        x=x/10;
    }
    return (somme);
}


int estHeureux(int x)
{
    int somme;
    do
    {
       somme = sommeChiffres(x);
       x=somme;
    }while (x>=10);

    if (x==1)
     return 1;
    else
     return 0;
}

void EX1TP2While()
{
long int n,i , s=0,a ;
do
{ printf("-------------------------------------\n");
printf ( "Donner un entier > 0 : " ) ;
scanf ("%ld",&n ) ;
}while ( !(n>0));

 while (n!=0)
{
a= n%10;
s=s*10+a ;
n=n/10;
}

printf("Le resultat = %ld", s) ;
printf("\nce programme inverse le nombre");
/* ce programme inverse le nombre */

 printf("\n\n");
   system("pause");
}

void EX1TP2For()
{
long int n,i , s=0,a ;
do
{ printf("-------------------------------------\n");
printf ( "Donner un entier > 0 : " ) ;
scanf ("%ld",&n ) ;
}while ( !(n>0));


for (i=n; i!=0; i/=10)
{
 a= n%10;
 s=s*10+a ;
 n=n/10;
}

printf("Le resultat = %ld", s) ;
printf("\nce programme inverse le nombre");
/* ce programme inverse le nombre */

 printf("\n\n");
   system("pause");
}

void EX1TP2DoWhile()
{
long int n,i , s=0,a ;
do
{ printf("-------------------------------------\n");
printf ( "Donner un entier > 0 : " ) ;
scanf ("%ld",&n ) ;
}while ( !(n>0));


do
{
a= n%10;
s=s*10+a ;
n=n/10;
}while (n!=0);

printf("Le resultat = %ld", s) ;
printf("\nce programme inverse le nombre");
/* ce programme inverse le nombre */

 printf("\n\n");
   system("pause");
}

void EX2TP2()
{
   int N,i;
   float s=1;

   do
   {
       printf("-------------------------------------\n");
       printf("Donner un entier >2 : ");
       scanf("%d",&N);
   }while( !(N>2) );

    setlocale(LC_ALL,"");

    printf("s = 1");
   for(i=2;i<=N;i++)
   {
       s = s + (1/pow(i,2));
       printf(" + 1/%d²",i);
   }


   printf(" = %f",s);
   printf("\n\n");
   system("pause");

}

void EX3TP2()
{
   int N,i;
   float s=1;

   do
   {
       printf("------------------------------------\n");
       printf("Donner un entier >2 : ");
       scanf("%d",&N);
   }while( !(N>2) );

    setlocale(LC_ALL,"");

    printf("s = 1");
   for(i=2;i<=N;i++)
   {
       if(i %2 ==0)
       {
            s = s - (1/pow(i,2));
            printf(" - 1/%d²",i);
       }
        else
        {s = s + (1/pow(i,2));
        printf(" + 1/%d²",i);
        }
   }
   printf(" = %f",s);

    printf("\n\n");
   system("pause");
}

void EX4TP2()
{
    int N,i,v=0,U,D,C,M;
    int T[100];

    do
    { printf("------------------------------------\n");
        printf("Donner la taille de la suite : ");
        scanf("%d",&N);
    }while( !(N>1) );

    printf("Donner les %d entiers :\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&T[i]);
    }


    for(i=0;i<N;i++)
    {
        U=T[i]%10;
        D=(T[i]/10)%10;
        C=(T[i]/100)%10;
        M=(T[i]/1000)%10;

        if(M != 0)
            if( (U % M == 0) && (D % M == 0) && (C % M == 0) )     v=v+1;
    }

    if( v<=1 ) printf("\nIl y a %d entier valable dans la suite",v);
    else  printf("\nIl y a %d entiers valables dans la suite",v);

   printf("\n\n");
   system("pause");
}

void EX5TP2()
{
    int X,n,estPremier;

   do{ printf("------------------------------------\n");
        printf("Donner un entier >1 : ");
        scanf("%d",&X);
     }while(X<=1);

   printf("%d = ",X);
   do
   {
        n=premierDiviseurPremier(X);
        if (X==n) //pour eviter le * superflu à la fin
           printf("%d ",n);
        else
           printf("%d * ",n);
        X=X/n;
    }while(X>1);
       printf("\n\n");
    system("pause");
}

void EX6TP2()
{ int a,b,i,j;

   do{printf("-------------------------------------\n");
        printf("Donner un entier a >=100 : ");
        scanf("%d",&a);
     }while(a<100);

   do{
        printf("Donner un entier b > %d : ",a);
        scanf("%d",&b);
     }while(b<=a);

   printf("les entiers palindromes premiers sont: ");

   for (i=a; i<=b;i++)
   {
      if(estPalindrome(i)&& estPremier(i))
       {
          printf (" %d  ",i);
       }

   }

printf("\n\n");
system("pause");
}

void EX7TP2()
{
    int n,p,a,position,nbr;

    // Saisie d'un nbr n>10 :
    do
    { printf("-------------------------------------\n");
        printf("Donner un entier >10 : ");
        scanf("%d",&n);
    }while(!(n>10));

    p=0;
    position=0;
    nbr=n;
    while( (nbr != 0) )
    {
        position++;
        if(position % 2 != 0)   // Si la position est impair ou non dans le nombre.
        {
            a=nbr%10;

            if(a % 2 == 0) p++;   // p++ si le chiffre est pair.
        }

        nbr=nbr/10;
    }


    if(p==0)
    printf("%d est totalement impair.\n",n);
    else  printf("%d n'est pas totalement impair.\n",n);

printf("\n\n");
system("pause");
}

void EX8TP2Q1()
{
int nb,i,estPremier, n,N,M;

   do{ printf("-------------------------------------\n");
        printf("Donner un entier >1 : ");
        scanf("%d",&nb);
     }while(nb<=1);
  i=2; estPremier=1;
  while(i<=nb/2 && estPremier)
   { if (nb%i==0)
        estPremier=0;
     i++;
   }
   if(estPremier)
     printf("%d est un nombre premier \n",nb);
   else
     printf("%d n'est pas un nombre premier \n",nb);

printf("\n\n");
system("pause");
}

void EX8TP2Q2()
{
  int n=1,nb=2,i,estPremier;
   printf("-------------------------------------\n");
   printf ("les 10 premiers nombres premiers : ");
   while(n<=10)
   {
      i=2; estPremier=1;
      while(i<=nb/2)
        { if (nb%i==0)
            estPremier=0;
        i++;
        }
       if(estPremier)
        {
           printf(" %d ",nb);
           n++;
         }
       nb++;
   }

printf("\n\n");
system("pause");
}

void EX8TP2Q3()
{
    int i,N,M,nb,estPremier;
do{ printf("-------------------------------------\n");
        printf("Donner un entier N >1 : ");
        scanf("%d",&N);
     }while(N<=1);

    do{ printf("-------------------------------------\n");
        printf("Donner un entier M >%d : ",N);
        scanf("%d",&M);
     }while(M<=N || M>1000);
     printf ("Les nombres premiers compris entre %d et %d : ",N,M);
     for(nb=N;nb<=M;nb++)
     {
            i=2; estPremier=1;
            while(i<=nb/2)
              { if (nb%i==0)
                estPremier=0;
               i++;
              }
             if(estPremier)
            {
               printf(" %d ",nb);
            }
      }

printf("\n\n");
system("pause");
}

void EX9TP2()
{int a,b,x;

    do{ printf("-------------------------------------\n");
        printf("donner un entier a>=50 : ");
        scanf("%d",&a);
    }while(a<50);

     do{ printf("-------------------------------------\n");
        printf("donner un entier b>=%d : " ,a);
        scanf("%d",&b);
    }while(b<a || b>500);

    for (x=a;x<=b;x++)
    {
        if (estHeureux(x))
            printf("  %d ",x);
    }

printf("\n\n");
system("pause");
}
