#pragma once
//функция поиска пути
int searchEulerPath(int **Matrix,//матрица
	                int N, //размер
	                int start, //начальная вершина
	                int countNS,//кол-во вершин в пути
	                int *Array);//массив вершин пути
//функция проверки на путь
int checkForEulerPath(int **Matrix,//матрица
	                  int N, //размер
	                  int &countS,//кол-во 1 в строке 
	                  int &countNE, //кол-во нечетных вершин
	                  int &start,//начальная вершина
	                  int &count);//кол-во 1 в матрице