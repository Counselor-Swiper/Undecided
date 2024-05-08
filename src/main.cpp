#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
    window.setFramerateLimit(144);
    sf::Text text;
    sf::Font font;
    font.loadFromFile("/home/swiper/Desktop/JetBrainsMono/JetBrainsMonoNLNerdFont-Regular.ttf");
    text.setFont(font);
    text.setString("Hello SFML!");
    text.setCharacterSize(100);
    text.setFillColor(sf::Color::White);
    text.setStyle(sf::Text::Bold);
    text.setPosition(100, 100);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.draw(text);
        window.display();
    }
}