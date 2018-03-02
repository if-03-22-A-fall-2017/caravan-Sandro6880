/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include "general.h"

struct CaravanImplementation {
    struct Node* head;
    int length = 0;
};

Caravan new_caravan()
{
  struct CaravanImplementation* list;
  list = (struct CaravanImplementation*)malloc(sizeof(struct CaravanImplementation));
  list->head = 0;
  return list;
}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  struct Node* current = caravan->head;
  while (current != 0) {
    struct Node* to_delete = current;
    current = current->next;
    sfree(to_delete);
  }
  sfree(caravan);
}


void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if(animal != 0)
  {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(caravan->head == 0)
    {
      caravan->head = newNode;
      caravan->head->data = animal;
      add_to_caravan(caravan->head->data,caravan);
      caravan->length++;
    }
    else
    {
      struct Node* current = caravan->head;
      while(current->next != 0)
      {
        current = current->next;
      }
      current->next = newNode;
      current->data = animal;
      add_to_caravan(current->data,caravan);
      caravan->length++;
    }
  }
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
  struct Node* current = caravan->head;

}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan)
{
}
