/*adp pour Analyse des Dépenses Mensuelles*/
/*ce programme a pour but de lire un fichier de données afin d'en faire
une synthèse
le but étant qu'il soit le plus flexible possible afin de s'adapter à nimporte
quelles données et demandes*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum e_type {
	FLOAT,
	INT,
	CHAR,
	DATE,
	HEURE
} t_type;

typedef struct {
	char	**col_title;//title en 0, subtitle en 1 etc...
	int		data_type;
	void	*data;//peut stocker des int, des char ou autre
} column;

typedef struct {
	char	*file_title;
	int		col_nbr;
	int		lin_nbr;
	column	*col;
} data_file;

typedef struct {
	char		*activity_name;
	char		*date_of_creation;
	char		*hour_of_creation;
	data_file	*files;
} activity;
