# projet-cpp-2018-VinSey1

Explications :
Principe d'un jeu de rôle, avec un joueur qui peut jouer plusieurs classes et qui peut avoir de l'équipement.
Classes :
- DonjonEtDragons : main
- Joueur : nom, points d'armure
  - Guerrier : fureur
  - Voleur : finesse
  - Archer : agilité
- Équipement : nom, rareté, prix
  - Bouclier : points de blocage
  - Arme : puissance
  - Pieds : bonus de fuite
  
Actions utilisateur : Lors de la boucle infinie, le joueur peut appuyer sur deux touches différentes :
 - q : Permet de stopper la boucle, et sauvegarde les différents Joueurs dans le fichier /data/donjon.xml,
 - a : Permet de modifier un personnage qu'on choisit en entrant son emplacement dans la liste de personnages (entre 0 et 4).
 On peut ensuite entrer deux mots-clés pour pouvoir modifier ce personnage :
    - nom : Permet de modifier le nom du Joueur,
    - armure : Permet de modifier l'armure du Joueur.
  - e : Permet de compareur l'armure de deux personnages, en choisissant leur emplacement dans la liste.
  
Mes 3 événements sont donc :
- Modification du nom d'un joueur,
- Modification de l'armure d'un joueur,
- Comparaison de deux joueurs choisis.
