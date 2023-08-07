#include<stdlib.h>
/**
 * alloc_grid - Pointer to 2 dimentional arry
 * @width: Pointer to width
 * @height: Pointer to height
 * Return: The pointer to dimentional arry
 */
int **alloc_grid(int width, int height)
{
	int **Arr;
	int i, j, k;

	if(width <= 0 || height <= 0)
		return(NULL);
	Arr = malloc(width * sizeof(int*));
	if(Arr == NULL)
		return(NULL);
	for(i = 0; i < height; i++)
	{
		Arr[i] = malloc(width * sizeof(int));
		if(Arr[i] == NULL)
		{
			for(k = 0; k < height; k++)
				free(Arr[k]);
			free(Arr);
			return(NULL);
		}
	}
	for(i = 0; i < height; i++)
		for(j = 0; j < width; j++)
			Arr[i][j] = 0;
	return (Arr);
}
