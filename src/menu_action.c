#include "../include/menu_action.h"

int choose_path(char *out_c)
{
	if (scanf("%s", out_c) < 0)
	{
		return -1;
	}
	return 0;
}

void compress_selected(char *path_to_file)
{
	compress(path_to_file);
}

void decompress_selected(char *path_to_file)
{
	decompression(path_to_file);
}

void help()
{
	printf("\n");
	printf("Commencez par choisir un fichier à compresser ou décompresser avec '1' en tapant son chemin relatif (ex : \"./test.txt\"), puis en choisissant l'option voulue '2' pour compresser et '3' pour decompresser.\n");
	printf("\n");
}
