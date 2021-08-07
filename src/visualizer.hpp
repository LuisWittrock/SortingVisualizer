#include <SFML/Graphics.hpp>
#include <vector>

class Visualizer
{
    public:
        sf::RenderWindow window;
        int WINDOW_HEIGHT = 800;
        int WINDOW_WIDTH = 1000;

        void draw(std::vector<int> &nums);
};