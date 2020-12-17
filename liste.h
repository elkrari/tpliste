#include "elementListe.h"

#ifndef _LISTE_CHAINEE
#define _LISTE_CHAINEE


/* ------------------------------------------------------------------------ */
/**
 *  \typedef    element
 *  \brief      Définition de la nature des éléments qui composent
 *              la liste.
 *              Ici c'est un entier.
 */
typedef elementListe element;

/* ------------------------------------------------------------------------ */
/**
 *  \typedef    Place
 *  \brief      Définition du type Place qui est une adresse de Cellule
 */
typedef struct cellule *Place;  /* la place = adresse cellule */

/**
 *  \struct     cellule
 *  \brief      Définition de la structure d'une cellule
 */
typedef struct cellule {
	/** La donnée enregitrée sur la cellule */
 element valeur;  
 	/** Adresse de la cellule suivante. 
 	NULL si la cellule est la dernière de la liste */
 struct cellule *suivant;   
} Cellule;

/**
 *  \struct     Liste
 *  \brief      Définition du type Liste qui est une adresse de (la première) Cellule
 */
typedef Cellule *Liste;

/**
 *  \fn         Liste listeVide (void)
 *  \brief      Créer une liste vide.
 *  \return		Un pointeur NULL de type Liste
 */
Liste listeVide (void);

/**
 *  \fn         int longueur (Liste l)
 *  \brief      Calcule la longueur de la liste
 *  \param      l   La liste
 *  \return		Le nombre de cellules qui composent la liste
 */
int longueur (Liste l);


/**
 *  \fn         Liste inserer (Liste l, int i, element e)
 *  \brief      Insère un nouvel élément dans la liste 
 *  \param      l       liste dans laquelle l'élément sera inséré
 *  \param      i       indice dans lequel l'élément sera inséré
 *  \param      e       l'élément à insérer
 *  \return     La liste après insertion du nouvel élément
 *  \note		L'indice d'insertion doit etre supérieur ou égale à 0, 
 *				et inférieur ou égale à la longueur de la liste
 */
Liste inserer (Liste l, int i, element e);

/**
 *  \fn         Liste supprimer (Liste l, int i)
 *  \brief      Retire la cellule n° i de la liste
 *  \param      l       liste dans laquelle l'élément sera inséré
 *  \param      i       indice de la cellule à supprimer de la liste
 *  \return     La liste après suppression de la cellule n° i
 *  \note		L'indice de suppression doit etre supérieur ou égale à 0, 
 *				et strictement inférieur à la longueur de la liste
 */
Liste supprimer (Liste l, int i);

/**
 *  \fn         element keme (Liste l, int k)
 *  \brief      Récupère l'élément de la cellule n° k de la liste
 *  \param      l       liste puis laquelle l'élément sera récupéré
 *  \param      k       indice de la cellule à récupérer son élément
 *  \return     L'élément se trouvant dans la cellule n° k de la liste
 *  \note		L'indice de de la cellule doit etre supérieur ou égale à 0, 
 *				et strictement inférieur à la longueur de la liste
 */
element keme (Liste l, int k);

/**
 *  \fn         Place acces (Liste l, int i)
 *  \brief      Récupère l'adresse de la cellule n° i de la liste
 *  \param      l       liste puis laquelle l'adresse sera récupéré
 *  \param      i       indice de la cellule à récupérer son adresse
 *  \return     L'adresse de la cellule n° i de la liste
 *  \note		L'indice de de la cellule doit etre supérieur ou égale à 0, 
 *				et strictement inférieur à la longueur de la liste
 */
Place acces (Liste l, int i);

/**
 *  \fn         element contenu (Liste l, Place i)
 *  \brief      Récupère l'élément de la cellule pointée par p 
 *  \param      l       liste depuis laquelle l'élément sera récupéré
 *  \param      p       adresse de la cellule à récupérer son élément
 *  \return     L'élément se trouvant dans la cellule (de la liste) pointée par p
 */
element contenu (Liste l, Place p);

/**
 *  \fn         Place succ (Liste l, Place p)
 *  \brief      Récupère l'adresse de la cellule qui succède à celle pointée par p 
 *  \param      l       liste où se trouve la cellule pointée par p 
 *  \param      p       adresse de la cellule à récupérer son succeseur
 *  \return     L'adresse du suivant de p, NULL si p est l'adresse de la dernière cellule
 */
Place succ (Liste l, Place p);

#endif