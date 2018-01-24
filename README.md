# OBJECTIF 

Ce projet est une tentative pour calculer les dimensions d'une piece qui aurait trois faces.  
Si on considere qu'une piece a une epaisseur, alors quelle doit etre la taille de cette derniere (en fonction du rayon de la piece) pour que la piece est 1 chance sur 3 de tomber sur le coté Pile, 1 chance sur 3 de tomber sur le cote Face, et 1 chance sur 3 pour tomber sur la tranche.  
Il existe plusieurs personnes ayant tente de repondre a cette question ; en fixant un rayon de 1, une des reponses apportees est d'avoir une epaisseur de 2sqrt(2), une autre propose une epaisseur de sqrt(3) (cf source).  
Il semblerait que, d'un point de vue experimental, la premiere proposition a une epaisseur trop fine (et donc la tranche tombe moins souvent qu'une fois sur trois) alors que la seconde est trop grande (plus d'une fois sur trois).  
  
### Notations  
* | : tranche   
* X : Pile  
* O : Face  
  
L'idee de la proposition est de considerer que si un cylindre forme un angle alpha entre le sol et une de ses faces "planes" (i.e. Pile ou Face), alors il faut trouver une valeur x telle que lorsque 0<=alpha<=x, alors la piece tombe sur la tranche, alors que si x<alpha<=pi/2, la piece tombe sur une face "plane".  
Comme il n'y a, a priori, aucune raison pour que la distribution de cet angle ne soit pas uniformement repartie entre 0 et pi/2, et qu'on doit avoir P(|)=P(X)=P(O) ainsi que P(0<=alpha<=x) = 2P(x<alpha<=pi/2), on a x = pi/3.  
En appelant P le plan orthogonal au sol passant par le point d'intersection entre la piece et le sol et orthogonal à ?..  
Il faut donc calculer quelle doit etre la hauteur d'un cylindre pour que, lorsqu'il forme un angle de pi/3 avec le sol, le volume correspondant a la partie gauche de l'intersection entre P et la piece soit egal au volume de la partie droite.  
  
#### A suivre...  
  
### Sources : 
* [How thick is a three-sided coin?](https://www.youtube.com/watch?v=-qqPKKOU-yY&)  
* [Help me find the thickness of a three-sided coin!](https://www.youtube.com/watch?v=xN5_VO7Nbu8)

