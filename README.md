# CIS255 Lab 5: Inheritance and Composition with Pokémon

## Project Overview
This project is part of the CIS255 course and focuses on demonstrating inheritance and composition in C++. Using a hierarchy of Pokémon classes, the program showcases key object-oriented programming principles. Pokémon are represented as objects in a class hierarchy, with each Pokémon type derived from a base `Pokemon` class. This lab highlights the Is-A (inheritance) and Has-A (composition) relationships, creating a flexible and scalable structure for managing Pokémon attributes and behaviors.

## Program Features
- **Inheritance**: The project includes a three-level inheritance hierarchy. The base class `Pokemon` provides core attributes such as `pokedexNumber`, `primaryType`, and `canEvolve`, while derived classes like `Dragapult`, `Milotic`, and `Espeon` expand on these attributes by adding specific moves and evolution details.
- **Composition**: Each Pokémon contains a list of its moves, represented using a vector, demonstrating the Has-A relationship between Pokémon and their moves.
- **Polymorphism**: The program uses polymorphism by overriding the `showValues()` and `evolutionDetails()` methods in each derived class. This allows for dynamic behavior depending on the Pokémon type, providing a customized display of attributes for each object.

## Class Structure
- **Base Class**: `Pokemon`
  - Attributes: `pokedexNumber`, `primaryType`, `secondaryType`, `canEvolve`, and `moves`.
  - Methods: `showValues()`, `evolutionDetails()`, getters, and setters for the attributes.
  
- **Derived Classes**: 
  - Classes include Pokémon like `Dragapult`, `Volcarona`, `Milotic`, and more.
  - Each derived class overrides the base class methods to provide specific Pokémon-related data.

### Composition
Each Pokémon object Has-A list of moves, which is represented as a vector of strings. This demonstrates how composition works in C++.

## Example Pokémon and Features:
- **Dragapult** (Dragon/Ghost-type): Displays unique moves like "Dragon Darts" and "Phantom Force" with evolution details.
- **Milotic** (Water-type): Demonstrates evolution from Feebas, and showcases moves like "Hydro Pump" and "Ice Beam."
- **Espeon** (Psychic-type): Shows evolution from Eevee and moves like "Psychic" and "Morning Sun."

## Program Menu
Upon running the program, the console displays each Pokémon's attributes, evolution details, and move sets. All Pokémon objects are instantiated and displayed in the console using overridden methods from their respective classes.

## How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/NotEsperix/Triton-CIS-255-Programming-Lab-5.git
