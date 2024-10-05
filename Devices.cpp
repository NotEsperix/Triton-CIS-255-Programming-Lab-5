#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Base class: Pokemon
class Pokemon {
protected:
    int pokedexNumber;
    string primaryType;
    string secondaryType;
    bool canEvolve;
    vector<string> moves;
public:
    // Default constructor
    Pokemon() : pokedexNumber(0), primaryType("Unknown"), secondaryType("None"), canEvolve(false) {}

    // All-argument constructor
    Pokemon(int dex, string type1, string type2, bool evolve, vector<string> mv)
        : pokedexNumber(dex), primaryType(type1), secondaryType(type2), canEvolve(evolve), moves(mv) {}

    // Getters
    int getPokedexNumber() const { return pokedexNumber; }
    string getPrimaryType() const { return primaryType; }
    string getSecondaryType() const { return secondaryType; }
    bool getCanEvolve() const { return canEvolve; }

    // Show basic information (Virtual function)
    virtual void showValues() const {
        cout << "Pokédex Number: " << pokedexNumber << endl;
        cout << "Type: " << primaryType;
        if (secondaryType != "None") {
            cout << "/" << secondaryType;
        }
        cout << endl;
        cout << "Can Evolve: " << (canEvolve ? "Yes" : "No") << endl;
        cout << "Moves: ";
        for (const auto& move : moves) {
            cout << move << ", ";
        }
        cout << endl;
    }

    // Virtual method for showing evolution details
    virtual void evolutionDetails() const {
        cout << "No evolution details available." << endl;
    }
};

// Derived class: Dragapult
class Dragapult : public Pokemon {
public:
    Dragapult() : Pokemon(887, "Dragon", "Ghost", false, { "Dragon Darts", "Phantom Force", "U-turn", "Draco Meteor", "Thunderbolt", "Flamethrower", "Hydro Pump", "Psychic" }) {}

    void evolutionDetails() const override {
        cout << "Dragapult is the final evolution of Dreepy (Evolves at level 50 to Drakloak, then evolves at level 60 to Dragapult)." << endl;
    }
};

// Derived class: Volcarona
class Volcarona : public Pokemon {
public:
    Volcarona() : Pokemon(637, "Bug", "Fire", false, { "Fiery Dance", "Bug Buzz", "Quiver Dance", "Hurricane", "Heat Wave", "Psychic", "Giga Drain", "Solar Beam" }) {}

    void evolutionDetails() const override {
        cout << "Volcarona evolves from Larvesta at level 59." << endl;
    }
};

// Derived class: Milotic
class Milotic : public Pokemon {
public:
    Milotic() : Pokemon(350, "Water", "None", false, { "Hydro Pump", "Ice Beam", "Recover", "Surf", "Dragon Pulse", "Scald", "Toxic", "Mirror Coat" }) {}

    void evolutionDetails() const override {
        cout << "Milotic evolves from Feebas when traded holding a Prism Scale." << endl;
    }
};

// Derived class: Zoroark (Hisuian)
class ZoroarkHisuian : public Pokemon {
public:
    ZoroarkHisuian() : Pokemon(571, "Normal", "Ghost", false, { "Bitter Malice", "Shadow Ball", "Hyper Voice", "U-turn", "Knock Off", "Nasty Plot", "Dark Pulse", "Focus Blast" }) {}

    void evolutionDetails() const override {
        cout << "Hisuian Zoroark evolves from Hisuian Zorua at level 30." << endl;
    }
};

// Derived class: Metagross
class Metagross : public Pokemon {
public:
    Metagross() : Pokemon(376, "Steel", "Psychic", false, { "Meteor Mash", "Bullet Punch", "Earthquake", "Zen Headbutt", "Iron Defense", "Agility", "Thunder Punch", "Ice Punch" }) {}

    void evolutionDetails() const override {
        cout << "Metagross evolves from Metang at level 45." << endl;
    }
};

// Derived class: Togekiss
class Togekiss : public Pokemon {
public:
    Togekiss() : Pokemon(468, "Fairy", "Flying", false, { "Air Slash", "Aura Sphere", "Dazzling Gleam", "Flamethrower", "Thunder Wave", "Shadow Ball", "Ancient Power", "Roost" }) {}

    void evolutionDetails() const override {
        cout << "Togekiss evolves from Togetic using a Shiny Stone." << endl;
    }
};

// Derived class: Venusaur
class Venusaur : public Pokemon {
public:
    Venusaur() : Pokemon(3, "Grass", "Poison", false, { "Solar Beam", "Sludge Bomb", "Earthquake", "Leech Seed", "Synthesis", "Frenzy Plant", "Giga Drain", "Sleep Powder" }) {}

    void evolutionDetails() const override {
        cout << "Venusaur evolves from Ivysaur at level 32." << endl;
    }
};

// Derived class: Spiritomb
class Spiritomb : public Pokemon {
public:
    Spiritomb() : Pokemon(442, "Ghost", "Dark", false, { "Shadow Ball", "Dark Pulse", "Sucker Punch", "Will-O-Wisp", "Confuse Ray", "Nasty Plot", "Psychic", "Hex" }) {}

    void evolutionDetails() const override {
        cout << "Spiritomb does not evolve." << endl;
    }
};

// Derived class: Skeledirge
class Skeledirge : public Pokemon {
public:
    Skeledirge() : Pokemon(909, "Fire", "Ghost", false, { "Torch Song", "Shadow Ball", "Earthquake", "Will-O-Wisp", "Hex", "Overheat", "Snarl", "Sludge Bomb" }) {}

    void evolutionDetails() const override {
        cout << "Skeledirge evolves from Crocalor at level 36." << endl;
    }
};

// Derived class: Scizor
class Scizor : public Pokemon {
public:
    Scizor() : Pokemon(212, "Bug", "Steel", false, { "Bullet Punch", "X-Scissor", "Swords Dance", "Iron Head", "U-turn", "Night Slash", "Roost", "Knock Off" }) {}

    void evolutionDetails() const override {
        cout << "Scizor evolves from Scyther when traded holding a Metal Coat." << endl;
    }
};

// Derived class: Espeon
class Espeon : public Pokemon {
public:
    Espeon() : Pokemon(196, "Psychic", "None", false, { "Psychic", "Morning Sun", "Shadow Ball", "Dazzling Gleam", "Calm Mind", "Psyshock", "Baton Pass", "Yawn" }) {}

    void evolutionDetails() const override {
        cout << "Espeon evolves from Eevee when leveled up with high friendship during the day." << endl;
    }
};

// Derived class: Gliscor
class Gliscor : public Pokemon {
public:
    Gliscor() : Pokemon(472, "Ground", "Flying", false, { "Earthquake", "Swords Dance", "Roost", "U-turn", "Acrobatics", "Toxic", "Ice Fang", "Knock Off" }) {}

    void evolutionDetails() const override {
        cout << "Gliscor evolves from Gligar when leveled up holding a Razor Fang at night." << endl;
    }
};

int main() {
    // Create objects from each Pokémon class
    Dragapult dragapult;
    Volcarona volcarona;
    Milotic milotic;
    ZoroarkHisuian zoroark;
    Metagross metagross;
    Togekiss togekiss;
    Venusaur venusaur;
    Spiritomb spiritomb;
    Skeledirge skeledirge;
    Scizor scizor;
    Espeon espeon;
    Gliscor gliscor;

    // Display information for each Pokémon
    Pokemon* pokemons[] = { &dragapult, &volcarona, &milotic, &zoroark, &metagross, &togekiss, &venusaur, &spiritomb, &skeledirge, &scizor, &espeon, &gliscor };

    for (Pokemon* p : pokemons) {
        p->showValues();
        p->evolutionDetails();
        cout << endl;
    }

    return 0;
}
