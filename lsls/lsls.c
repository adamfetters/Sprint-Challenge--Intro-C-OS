#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *pDir;

  if (argc < 2)
  {
    //TODO open current directory
    printf("Usage: testprog <dirname>\n");
    pDir = opendir(argv[0]);
    return 1;
  }
  else
  {
    pDir = opendir(argv[1]);
    if (pDir == NULL)
    {

      printf("Cannot open directory %s\n", argv[1]);
      return 1;
    }
  }

  // Repeatly read and print entries

  // Close directory

  return 0;
}