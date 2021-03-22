#include "SFML/Graphics.hpp"
#include <iostream>

using namespace sf;

int main() {

	// Create a video mode object
	sf::VideoMode vm(1920, 1080);

	// Create and open a window for the game
	sf::RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	// Load a graphic into texture
	textureBackground.loadFromFile("graphics/background.png");

	// Create a sprite
	Sprite spriteBackground;

	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);

	while (window.isOpen()){
		if (Keyboard::isKeyPressed(Keyboard::Escape)){
			window.close();
		}


		//Clear everything from the last frame
		window.clear();

		// Draw our game scene here
		window.draw(spriteBackground);

		// Show everything we just drew
		window.display();
	}
	return 0;
}

