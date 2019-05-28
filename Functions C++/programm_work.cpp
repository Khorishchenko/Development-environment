
	cout << szHisName << ",от всей души поздравляем Вас!!!"
	     << "Все цветы у Ваших ног," << szHisName << "!!!" << "\n"
	     << "Эта музыка для Вас!!!" << "\n"
	     << "Для продолжения нажмите на Enter...";
	getchar();
}

int	main()
{
	unsigned int	nAnswer = 0;
	
	do
	{
		cout << "Год рождения Николая Васильевича Гоголя - 1809г.? (да - 1, нет - 2):";
		cin >> nAnswer;
		cout << "\n";
		switch (nAnswer)
		{
			case 1:
				cout << "Вы правильно ответили на вопрос!!!" << endl;
				break;
			case 2:
				cout << "Подумайте внимательно :)" << endl;
				cout << "Подсказка: число заканчивается на 09" << endl;
				break;
			default:
				cout << "Вы не ввели 1 или 2 повторите еще раз!!!" << endl;
		}
	}
	while (nAnswer != 1);
	cin.clear();
	cin.ignore();
	ShowName();
	return (0);
}
