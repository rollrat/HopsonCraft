#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include <SFML/Graphics.hpp>

namespace sf
{
    class Window;
}

class Display
{
    public:
        static Display& get();

        Display(const Display& other) = delete;
        Display& operator =(const Display& other) = delete;

        Display(Display&& other) = delete;
        Display& operator =(Display&& other) = delete;


        void close();

        void clear();
        void update();

        bool isOpen();

        sf::RenderWindow& getRaw();

        void sfDraw(const sf::Drawable& drawable);

    private:
        Display();

        sf::ContextSettings getContextSettings();

        sf::RenderWindow window;
};


#endif // DISPLAY_H_INCLUDED
