#ifndef TP3_H_INCLUDED
#define TP3_H_INCLUDED

#include <locale.h>

#endif // TP3_H_INCLUDED

int magique(int m[100][100], int d);
void affiche_M(int m[100][100],int d);
void remplir_M(int m[100][100],int d);
int saisir_Impair();

int kpp(int n, int k);
void remplir1 (int t[],int n);

int maximum(int T[100], int taille);
void Trier (int T[100], int taille, int B[100]);

void PlateauMaximal(int T1[100], int taille1);
void apparait(int n,int T[]);
int supps_Min(int n,int T[],int A);
int saisir ();

int appartient(int T1[100],int taille1, int val);
int fusion(int T1[100], int taille1,  int T2[100], int taille2, int V1[200]);
void INSERTION(int n,int T[]);
void rotation(int n,int T[]);
void INVERSE(int n,int T1[]);
int SYMETRIQUE(int n,int T1[]);
void TRANSFERE (int n,int T1[],int T2[]);
void remplir (int t[],int n);
void affiche(int t[],int n);


//Saisir la dimension d'une matrice :
int saisir_Impair()
{int d;
   do
   {printf("-------------------------------------\n");
    printf(" Saisir une dimension impaire du matrice d : ");
    scanf("%i",&d);
   }while(d%2==0);    //dimension impaire
    return d;
}

//remlissage d'une matrice
void remplir_M(int m[100][100],int d)
{int i,j;
 for(i=1;i<=d;i++)
  for(j=1;j<=d;j++)
    {printf(" m[%i][%i]=",i,j);
    scanf("%i",&m[i][j]);
    }
}

//affichage d'une matrice
void affiche_M(int m[100][100],int d)
{int i,j;
  for(i=1;i<=d;i++)
      {for(j=1;j<=d;j++)
      printf(" %i\t",m[i][j]);
     printf("\n");
      }
}

//vérifie si la Matrice est magique ou non :
int magique(int m[100][100], int d)
{
	int i, j;
	int s = 0;
	int sommesM;   //-

sommesM=d * (d * d + 1) / 2;
printf(" Il faut les sommes sont égale à %i",sommesM);
printf("\n");
	//Somme des lignes :
	for(i=1; i<=d; i++){
		s = 0;
		for(j=1; j<=d; j++){
			s = s + m[i][j];
		}
		if(s != sommesM){
			return 0;
		}
	}

	//Somme des colonnes :
	for(i=1; i<=d; i++){
		s = 0;
		for(j=1; j<=d; j++){
			s = s + m[j][i];
		}
		if(s != sommesM){
			return 0;
		}
	}

	//Somme des diagonales :
	s = 0;
	for(i=1; i<=d; i++){
		s = s + m[i][i];
	}
	if(s != sommesM){
		return 0;
	}
	s = 0;
	for(i=1; i<=d; i++){
		s = s + m[i][d-i+1];
	}
	if(s != sommesM){
		return 0;
	}

	return 1;
}

void remplir1 (int t[],int n)
{int i,valide;
   do{
    printf("\nRemplir T avec des entiers positifs de 3 chiffres :\n");
        valide=0;
    for(i=0;i<n;i++)
    {
      printf("t[%i]=",i);
      scanf("%i",&t[i]);

     if (t[i] < 100 || t[i]>999) valide=1; //des entiers positifs
    }                                      //  et de 3 chiffres
    }while( valide !=0) ;
}

int kpp(int n, int k)
{
int p, f = 0;
for (p = 2; f < k && p*p <= n; p++)
while ( n % p == 0)
n /= p, f++;

return f + (n > 1) == k;
}


int maximum(int T[100], int taille)
{
    int i, max=-1, indiceMax;
    for (i=0;i<taille;i++)
    {
        if(T[i] > max)
            {
            max=T[i];
            indiceMax = i;
            }
    }
    return indiceMax;
}

void Trier (int T[100], int taille, int B[100])
{
    int i,indiceMax;
    for (i=0;i<taille; i++)
    {   indiceMax = maximum(T,taille);
        B[i]=T[indiceMax];
        T[indiceMax] = -1;
    }
}

int saisir (){
int A;
    printf("\n Saisir un nombre A : ");
    scanf("%d",&A);
    return A;
}

int supps_Min(int n,int T[],int A){
int i,j,T2[50],pos,aux;
    pos=0;
for(i=0;i<n;i++)
{
    if(T[i]>A)
    {
        T2[pos]=T[i];
        pos++;
    }
}
printf(" => Les éléments de T qui sont supérieurs à A : \n");
affiche(T2,pos);

//chercher le plus petit des elements qui sont superieurs a A :
    aux=T2[0];
    for(i=1;i<pos;i++)
        if(T2[i]<aux)
        aux=T2[i];
    printf("\n => le plus petit des éléments qui sont supérieurs à A : %d \n",aux);

}

void apparait(int n,int T[]){
int occ=0,r=0,app=0,c,i,aux,j ;
for (i=0;i<n;i++)
{
    aux=T[i];
    c=0;
    {
        for(j=0;j<n;j++)
        {
            if(T[j]==aux)
                c++;
        }
        if(c>occ)
        {
            occ=c;
            app=aux;
        }
    }
}
printf("\n => L'élément qui apparaît le plus est : %d \n => le nombre d'occurrence est : %d \n",app,occ);

}

void PlateauMaximal(int T1[100], int taille1)
{
    int debutPlateau=0, finPlateau=0, tailleMax=0,taillePlateau, DebutPlateauMax, finPlateauMax;

    while (finPlateau < taille1)
    { taillePlateau = 0;
        debutPlateau = finPlateau;
        while (T1[finPlateau]== T1[debutPlateau])
        {
            finPlateau++;
            taillePlateau++;
        }

        if ((taillePlateau) > tailleMax)
        {
           tailleMax=taillePlateau;
           DebutPlateauMax=debutPlateau;
           finPlateauMax= finPlateau-1;
        }

    }
 printf ("\n => Le plateau max est de taille %d il commence à l'indice %d et il se termine à l'indice %d", tailleMax,DebutPlateauMax,finPlateauMax  );
}

void remplir (int t[],int n)
{int i;
    for(i=0;i<n;i++)
    {
      printf("t[%i]=",i);
      scanf("%i",&t[i]);
    }
}

void affiche(int t[],int n)
{int i;
    for(i=0;i<n;i++)
        printf("%i\t",t[i]);
    printf("\n");
}

void TRANSFERE (int n,int T1[],int T2[]){
int i=0,j=0,h=n-1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            T2[j]=T1[i];
            j=j+1;
        }
        else {
                T2[h]=T1[i];
                h=h-1;
             }
    }
}

int SYMETRIQUE(int n,int T1[]){
int i=0,j=n-1,s=0;
while((T1[i]==T1[j])&&(i!=n/2)){
    s++;
    i++;
    j--;
}
if(s==n/2)
    return 1 ;
else
    return 0 ;
}

void INVERSE(int n,int T1[]){
int i,j,aux;
for(i=0,j=n-1;i<=(n/2),j>=(n/2);i++,j--)
 {
    aux=T1[i];
    T1[i]=T1[j];
    T1[j]=aux;
 }
}

void rotation(int n,int T[]){
int i,j,aux,k;
do{
    printf("\n Saisir le nbr de rotation k : ");
    scanf("%d",&k);
}while(k<=0 || k>=n);

    for(i=0;i<k;i++)
     {
      aux=T[0];
        for(j=0;j<n-1;j++)
         {
          T[j]=T[j+1];
         }
      T[n-1]=aux;
     }
}
void INSERTION(int n,int T[]){
int i,j,val,pos;
do{
    printf("\n Saisir une valeur à inserer : ");
    scanf("%d",&val);
     printf(" Saisir une position : ");
     scanf("%d",&pos);
}while(pos<0 || pos>n);
n=n+1;
for(i=2,j=1;i<=(n-pos),j<(n-pos);i++,j++)
{
    T[n-j]=T[n-i];
}
T[pos]=val;

}

int appartient(int T1[100],int taille1, int val)
{
    int i=0;
    int trouve = 0;
    while(!trouve && i<taille1)
    {
      if (T1[i]==val)
        trouve=1;
      i++;
    }
    return trouve;
}

int fusion(int T1[100], int taille1,  int T2[100], int taille2, int V1[200])
{int i, taille=0;
    for (i=0; i<taille1; i++)
    {
        if (!appartient(V1,taille,T1[i]))
           { V1[taille]= T1[i]; taille++;}

    }

     for (i=0; i<taille2; i++)
    {
        if (!appartient(V1,taille,T2[i]))
            {V1[taille]= T2[i]; taille++;}

    }
return taille;
}


void EX1TP3()
{
    int n,T1[50],T2[50],T[50],V[50],i,taille;
    printf("-------------------------------------\n");
    printf("Donner la taille du T1 : ");
    scanf("%d",&n);

setlocale(LC_ALL,"");

//Remplissage du T1 :
remplir(T1,n);


                    //-------------Q1-------------------//
printf("\n -------------Question 1 :------------ \n");

//Affichage de T1 :
printf("T1: \n");
affiche(T1,n);

TRANSFERE (n,T1,T2);

//Affichage de T2 :
printf("T2: \n");
affiche(T2,n);

                //------------------Q2------------------//
printf("\n -------------Question 2 :------------ \n");
if (SYMETRIQUE(n,T1)==1)
printf("\n => T1 est symétrique\n");
else
    printf("\n => T1 non symétrique\n");
               //------------------Q3--------------------//
printf("\n -------------Question 3 :------------ \n");
INVERSE(n,T1);
printf("\n T1 inversé : \n");
affiche(T1,n);
               //------------------Q4--------------------//
printf("\n -------------Question 4 :------------ \n");
//Remplissage du T :
remplir(T,n);
printf("T: \n");
affiche(T,n);

rotation(n,T);

printf("\nT après rotation : \n");
affiche(T,n);

                //------------------Q5--------------------//
printf("\n -------------Question 5 :------------ \n");
INSERTION(n,T);  //insertion d'une valeur dans T
printf("\nT après l'insertion :\n");
affiche(T,n+1);
                //------------------Q6--------------------//
printf("\n -------------Question 6 :------------ \n");
int t1[100]={1,2,3,4,5};
int t2[100]={7,8,3,2,9,10,11};
printf("t1: \n");
affiche(t1,5);
printf("t2: \n");
affiche(t2,7);
printf("\n");
taille= fusion(t1, 5, t2, 7, V);
printf("V: \n");
affiche(V,taille);

   printf("\n\n");
   system("pause");
}

void EX2TP3()
{
    int N,T[50],i,A;
printf("-------------------------------------\n");
setlocale(LC_ALL,"");
//Saisie de taille du T :
    do
    {
    printf("Saisir la taille du T : ");
    scanf("%d",&N);
    }while(N>50);

//Remplissage du T:
remplir(T,N);

//Affichage du T :
printf("T: \n");
affiche(T,N);
                    //-----------Q1--------------//
printf("\n -------------Question 1 :------------ \n");
//Saisie de A :
    A=saisir();
//elements de  T > A  et  le plus petit des elements qui sont superieurs a A :
supps_Min(N,T,A);
                    //-----------Q2--------------//
printf("\n -------------Question 2 :------------ \n\n");
apparait(N,T);
                    //-----------Q3--------------//
printf("\n -------------Question 3 :------------ \n");
PlateauMaximal(T,N);


   printf("\n\n");
   system("pause");
}

void EX3TP3()
{
    int N,T[50],i,B[50];

    setlocale(LC_ALL,"");

    do{printf("-------------------------------------\n");
    printf("donner la taille du T : ");
    scanf("%d",&N);
    }while(!(N>0));

    //Remplissage du T:
    remplir(T,N);

    //Affichage du T :
    printf("T: \n");
    affiche(T,N);

    Trier (T,N,B);

    //Affichage du B (le tableau trié):
    printf("B: \n");
    affiche(B,N);
    printf("=> Le tableau T trié dans B \n");

   printf("\n\n");
   system("pause");
}

void EX4TP3()
{
int N,i, c, k;
int T[50];

do{ printf("-------------------------------------\n");
    printf("Donner la taille du T : ");
    scanf("%d",&N);
    }while(!(N<=50));

 //Remplissage du T1 :
remplir1(T,N);

//Affichage de T1 :
printf("T: \n");
affiche(T,N);

//Chercher et afficher les k-pp nombres du T :
for (k = 2; k <= 5; k++)
    {
        printf("k = %i:  ", k);
            for (c = 0; c<N; c++)
                if (kpp(T[c], k))
                {
                  printf("%i  ", T[c]);
                }
       putchar('\n');
     }

   printf("\n\n");
   system("pause");
}

void EX7TP3()
{
   int d,m[100][100];

//Saisir la dimension de la matrice M :
d=saisir_Impair();

//Remplissage de la matrice M:
remplir_M(m,d);

//Affichage de la matrice M :
printf("\n");
setlocale(LC_ALL,"");
printf(" La Matrice carrée M de dimension %i : \n",d);
affiche_M(m,d);
printf("\n");

//vérifie si la Matrice M est magique ou non :

	if(magique(m,d)){
		printf("\n =>la matrice carrée est magique!");
	}
	else{
		printf("\n =>la matrice carrée n\'est pas magique! ");
	}
printf("\n");

   printf("\n\n");
   system("pause");
}

