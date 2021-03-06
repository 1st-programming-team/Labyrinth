#include "labyrinth.h"
#include "map.h"
#include "generate.h"
#include "print.h"

int main (void)
{
  map *labyrinth;
  coordinate entrance_position = {0,0}, exit_position = {34, 28};
  labyrinth = generate (35, 29, entrance_position, exit_position);
  print (labyrinth);

  exit (0);
}
