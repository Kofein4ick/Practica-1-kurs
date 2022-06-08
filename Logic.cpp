using namespace std;
//проверка по теореме Эйлера
int checkForEulerPath(int **Matrix, int N, int &countS, int &countNE, int &start,int &count)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (Matrix[i][j] == 1)
			{
				count = count + 1;
				countS = countS + 1; //определяем кол-во 1 в строке
			}//if	
		}//fot j
		if (countS % 2 != 0)//проверяем четность вершины
		{
			countNE = countNE + 1;//кол-во нечетных вершин
			if (countNE == 1)
				start = i;//определяем начальную вершину
		}//if
		countS = 0;
	}//for i
	
	if (countNE > 2)//если не удовлетворяет условию
		return 1;
	return 0;
}//checkForEP

//поиск пути
int searchEulerPath(int **Matrix, int N, int start, int countNS, int *Array)
{
	int temp;//переменная для замены
	//перемменые циклов
	int j;
	int i;
	//объявляем массив-копию
	int **TempMatrix = new int *[N];
	for (i = 0; i < N; i++)
		TempMatrix[i] = new int[N];
	//заполняем его элементами исходного массива
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			TempMatrix[i][j] = Matrix[i][j];
	i = start;//выбираем начальеую вершину
	Array[0] = i+1;//заносим ее в массив
	int k = 1;//начинаем с 1, т.к. начальную вершину занесли в массив
	for (j = 0; j < N; j++)
	{
		if (TempMatrix[i][j] == 1)
		{
			TempMatrix[i][j] = 0;//отмечаем дугу в графе, как пройденную
			Array[k] = j+1;// заполняем массив вершин
			//меняем местами i j, т.е. переходим по дуге 
			temp = i;
			i = j;
			j = temp;
			if (TempMatrix[i][j] == 0)//если матрица была заполнена с ошибкой(в одной строке связь указана,в другой нет)
				return 2;
  			TempMatrix[i][j] = 0;//отмечаем дугу в графе, как пройденную
			k = k + 1;
			if (k == countNS)//если обработаны все вершины
				break;
		}//if
		if ((j==N-1) && TempMatrix[i][j] == 0)//обрабатываем случаи, когда все последующие эл-ты 0
			j = -1;//возврат в начало строки матрицы
	}//for j
	//удаление массива-копии
	for (i = 0; i < N; i++)
		delete[] TempMatrix[i];
	delete[] TempMatrix;
	return 0;
}//searchEPFM
