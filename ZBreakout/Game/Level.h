/*
ZBreakout Project

Copyright (c) 2018 Nikita Kogut (Telegram @MrOnlineCoder | github.com/MrOnlineCoder | mronlinecoder@gmail.com)
All rights reserved.

Only original author is allowed to edit and share this file.
Unauthorized copying or editing this file, via any medium is strictly prohibited
Proprietary and confidential
*/

#ifndef LEVEL_H
#define LEVEL_H

#include <SFML/Graphics.hpp>

#include <tmxlite/Map.hpp>
#include <iostream>

const static std::string LVL_START_NAME = "level_start";
const static std::string LVL_WALL = "wall";

class Level {
public:
	Level();

	bool loadFromFile(std::string path);

	bool collide(sf::FloatRect r);

	const sf::Vector2f& getStartPosition();
	std::vector<sf::FloatRect>& getWalls();
	tmx::Map& getTMXMap();
private:
	void parseObject(const tmx::Object& obj);

	sf::Vector2f startPos;

	tmx::Map map;

	std::vector<sf::FloatRect> walls;
};

#endif
