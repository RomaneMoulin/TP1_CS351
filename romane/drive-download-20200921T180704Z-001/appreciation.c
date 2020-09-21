#include <stdio.h>

/*Version utilisant des instructions if imbriquées*/
void version1()
{
  char lettre;

  printf("Entrez une lettre (de A à E)\n");
  scanf(" %c", &lettre); /*Un espace est présent devant le %c pour ne pas prendre en compte le '\n' que l'on tape au moment du choix de la version dans le main*/

  if (lettre == 'A')
  {
    printf("Très bien\n");
  }
  else
  {
    if (lettre == 'B')
    {
      printf("Bien\n");
    }
    else
    {
      if (lettre == 'C')
      {
        printf("Assez bien\n");
      }
      else
      {
        if (lettre == 'D')
        {
          printf("Passable\n");
        }
        else
        {
          if (lettre == 'E')
          {
            printf("Insuffisant\n");
          }
          else
          {
            printf("Aucune appreciation ne correspond\n");
          }
        }
      }
    }
  }

}


/*Version utilisant des if en séquence*/
void version2()
{
  char lettre;

  printf("Entrez une lettre (de A à E)\n");
  scanf(" %c", &lettre);

  if (lettre == 'A')
  {
    printf("Très bien\n");
  }

  else if (lettre == 'B')
  {
    printf("Bien\n");
  }

  else if (lettre == 'C')
  {
    printf("Assez bien\n");
  }

  else if (lettre == 'D')
  {
    printf("Passable\n");
  }

  else if (lettre == 'E')
  {
    printf("Insuffisant\n");
  }

  else
  {
    printf("Aucune appreciation ne correspond\n");
  }

}


/*Version utilisant l'instruction switch*/
void version3()
{
  char lettre;

  printf("Entrez une lettre (de A à E)\n");
  scanf(" %c", &lettre);

  switch (lettre)
  {
    case 'A':
    printf("Très bien\n");
    break;

    case 'B':
    printf("Bien\n");
    break;

    case 'C':
    printf("Assez bien\n");
    break;

    case 'D':
    printf("Passable\n");
    break;

    case 'E':
    printf("Insuffisant\n");
    break;

    default:
    printf("Aucune appreciation ne correspond\n");
    break;
  }

}



int main()
{
  int version;

  printf("Choisissez la version de ce programme : \n1. Version utilisant des instructions if imbriquées\n2. Version utilisant des if en séquence\n3. Version utilisant l'instruction switch\n");
  scanf("%d", &version);
  printf("\n");

  switch (version)
  {
    case 1:
      version1();
      break;

    case 2:
      version2();
      break;

    case 3:
      version3();
      break;

    default:
      printf("ERROR : choix invalide\n");
      break;
  }

  return (0);
}

/*Nous avons réalisé le programme de sorte qu'il renvoie "Aucune appréciation ne correspond" lorsque l'utilisateur entre une autre lettre que A à E, puis il se termine*/
