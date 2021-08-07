#include <SFML/Graphics.hpp>

class Visualizer
{
    public:
        Visualizer::Visualizer();
        void draw(vector<int> &nums);

        sf::RenderWindow window;
        int WINDOW_HEIGHT = 800;
        int WINDOW_WIDTH = 1000;

};