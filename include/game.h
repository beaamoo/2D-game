/*
 * File: game.h
 * Author: Alessandra Gorla
 * Date: November 21, 2023
 * Description: Game class header.
 */
#pragma once
#include <SFML/Graphics.hpp>

class Game {
public:
    Game();
    int run();

private:
    sf::RenderWindow window;
    sf::Sprite background;
    sf::Texture backgroundTexture;
    sf::Texture playerTexture;
    sf::CircleShape player;
    sf::Clock clock;

    static const float SCENE_WIDTH;
    static const float SCENE_HEIGHT;
    static const float PLAYER_START_X;
    static const float PLAYER_START_Y;
    static const float RADIUS;
    static const float SPEED;

    int initWindow();
    int initBackground();
    int initPlayer();
    void processInput();
    void update();  // Updated declaration
    void render();
};
