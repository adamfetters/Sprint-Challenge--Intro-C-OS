#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *pDir;
  struct dirent *ent;
  struct stat buf;

  if (argc < 2)
  {
    //TODO open current directory

    pDir = opendir(".");
  }
  else
  {
    pDir = opendir(argv[1]);
  }

  // Repeatly read and print entries
  if (pDir == NULL)
  {

    printf("Cannot open directory %s\n", argv[1]);
    exit(0);
  }
  while ((ent = readdir(pDir)) != NULL)
  {
    // stat(ent->d_name, &buf);
    // printf("file size is %lld\n", (unsigned int)buf.st_size);
    printf("%s\n", ent->d_name);
  }
  // Close directory
  closedir(pDir);

  return 0;
}