#include <iostream>
#include <string>
using namespace std;
class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    Voiture() : marque("inconnue"), modele("inconnue"), annee(0), kilometrage(0.0), vitesse(0.0) {
        cout << "Voiture créée avec des valeurs par défaut." << endl;
    }

    Voiture(string mrq,string mode, int ann, float km, float vts)
        : marque(mrq), modele(mode), annee(ann), kilometrage(km), vitesse(vts) {
        cout << "Voiture créée avec des paramètres." << endl;
    }

    
    void accelerer(float valeur) {
        vitesse += valeur;
        cout << " La Vitesse après accélération: " << vitesse << " km/h" << endl;
    }

    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) {
            vitesse = 0;
        }
        cout << "Vitesse après freinage: " << vitesse << " km/h" << endl;
    }

    void afficherInfo() const {
        cout << "Marque: " << marque << endl;
        cout << "Modèle: " << modele << endl;
        cout << "Année: " << annee <<endl;
        cout << "Kilométrage: " << kilometrage << " km" << endl;
        cout << "Vitesse actuelle: " << vitesse << " km/h" << endl;
    }
    void avancer(float distance) {
        kilometrage += distance;
        cout << "La voiture a avancé de " << distance << " km. Nouveau kilométrage: " << kilometrage << " km" << endl;
    }

    ~Voiture() {
        cout << "La voiture est détruite." << endl;
    }
};

int main() {
    Voiture v1;
    v1.afficherInfo();

    Voiture v2("Dacia", "Dacia sandero", 20223, 15.000,160.00 );
    v2.afficherInfo();

    v2.accelerer(20);
    v2.freiner(60);

    v2.avancer(100.0);

    return 0;
}