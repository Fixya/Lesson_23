#include <SFML/Graphics.hpp>

using namespace sf;
const float SC_WIDTH = 800.f;
const float SC_HEIGHT = 600.f;
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(SC_WIDTH, SC_HEIGHT), "SFML Works!");


	const int size = 5;
	//CircleShape arr_clafbd[size];

	float dx = 100.f;
	RectangleShape arr_rect[size];
	for (int i = 0; i < size; i++)
	{
		arr_rect[i].setSize(Vector2f(50.f, 50.f));
		arr_rect[i].move(0, dx * i);
		arr_rect[i].setFillColor(Color{ (Uint8)(250 - 40 * i), (Uint8)(20 + 35*i), 200 });


	}
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		//2
		
		// Отрисовка окна 
		window.clear();
		/*for (int i = 0; i <= size; i++)
		{
			window.draw(arr_circle[i]);
		}*/
		//window.draw(c1);
		//window.display();
		//c1.setFillColor(Color(255, 0, 0));
		//window.draw(circle);
		for (int i = 0; i < size; i++)
		{
			window.draw(arr_rect[i]);
		}
		window.display();
	}
	return 0;
}
